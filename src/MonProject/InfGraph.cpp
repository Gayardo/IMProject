#include "InfGraph.h"
#include "Graph.h"

using namespace std;
InfGraph::InfGraph(string folder, string graph_file) : Graph(folder,graph_file)
{
        //initialisation
        //cette fonction se trouve dans SFMT.H
        sfmt_init_gen_rand(&sfmtSeed, 95082);
        init_hyper_graph();
        visit = vector<bool> (n);
        visit_mark = vector<int> (n);

}
void InfGraph::afficher()
{
        cout << "Le X : " <<endl;
}
void InfGraph::init_hyper_graph()
{
        hyperG.clear();
        for(int i=0; i<n; i++)
        {
                hyperG.push_back(vector<int>());
        }
        hyperGT.clear();
}

void InfGraph::build_seedset(int k)
{
        // pourquoi un compteur ??
        Counter cnt(1);
        vector<int> degree;
        vector<int> visit_local(hyperGT.size());

        seedSet.clear();
        for (int i = 0; i < n; i++)
        {
                degree.push_back(hyperG[i].size());
        }
        // deux assert à mettre ici
        for(int i=0; i<n; i++)
        {
                // quoi comme type ?
                auto t= max_element(degree.begin(),degree.end());
                int id=t-degree.begin();
                seedSet.insert(id);
                degree[id]=0;

                for(int t : hyperG[id])
                {
                        if(!visit_local[t])
                        {
                                visit_local[t]= true;
                                for(int node : hyperGT[t])
                                {
                                        degree[node]--;
                                }
                        }
                }


// un trace ici
        }
}
double InfGraph::influenceHyperGraph()
{

        set<int> s;
        // ajouter un trace juste ici.
        for( auto t : seedSet)
        {

        }
        double inf =(double)n*s.size();

        return inf;
}
