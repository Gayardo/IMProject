#include "InfGraph.h"
#include "Graph.h"
using namespace std;
InfGraph::InfGraph(string folder, string graph_file, int x):Graph(folder,graph_file),x(x)
{
      //initialisation
      // ou se trouve cette fonction ?
//      sfmt_init_gen_rand(&sfmtSeed , 95082);
      init_hyper_graph();
      visit = vector<bool> (n);
      visit_mark = vector<int> (n);

}
void InfGraph::afficher()
{
    cout << "Le X : " <<  x <<endl;
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


