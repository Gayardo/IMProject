#include <iostream>
#include <fstream>
#include "Graph.h"
#include "InfGraph.h"
#include "head.h"
#include "Imm.h"

using namespace std;



    void menu(){

    int choixModel(0);
    double epsilone(0.0);
    int k(0);
    double T(0.0);
    string graphName;

    cout << "Bonjour, bienvenue dans la demo de la maximisation d'influence : \n Quel est le model ? " << endl;
    cout << "\n 1. graph_ic \n 2. graph_lt \n 3. graph_cont" << endl;
    cin >> choixModel;

    cout << "Inserez la valeur de epsilon :"    <<endl;
    cin >> epsilone;

    cout << "Inserez la valeur de T :" <<endl;
    cin >> T;

    cout << "Inserez la valeur de k (taille du seed set) :" <<endl;
    cin >> k;

    cout << " Resume : \n modele : " << choixModel << "\n epsilone : " << epsilone <<"\n k : "<< k << "\n T : " << T << endl;

    switch(choixModel){

    case 1: graphName="graph_ic.inf";
            break;
    case 2: graphName="graph_lt.inf";
            break;
    case 3: graphName="graph_cont.inf";
            break;
    default: cout << "modele de diffusion inconnu" << endl;

    }
    cout << "Nom du graph : " << graphName <<endl;


    }
   
int main()
{
    Argument arg;
    // taille du seedSet
    arg.k=2;
    arg.dataset="nethept";
    arg.model="IC";
    arg.epsilon=3.0;
    arg.T=2.3;

    //menu();
    //lectureFichier("graph_ic.inf");
    //Graph firstGraph("nethept","graph_ic.inf");
    //firstGraph.Afficher();
    //Graph firstGraph("nethept","graph_cont.inf");
    //Graph firstGraph("nethept","graph_lt.inf");
    //firstGraph.setInfuModel(Graph::LT);
    InfGraph g("nethept","graph_ic.inf");
    Imm::InfluenceMaximize(g,arg);

    //firstGraph.readNM();
    //g.afficher();

    cout << "salur" << endl;
   

    return 0;
}
