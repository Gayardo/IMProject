#ifndef DEF_GRAPH
#define DEF_GRAPH
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
// a graph represents a social network with a node set V and an edge set E
class Graph
{
    public:

        // Constructeur de la classe graph
        Graph(string folder, string graph_file);
        // number of nodes
        int n;
        // number of edges
        int m;
        // the size of the seed set for influence maximization
        int k;
        // nombre d'arretes connect�s a un sommet ????
        vector<int> inDeg;
        // ???
        vector <vector <int>> gT;
        // definition de l'enumeration pour les trois types de modeles de diffusion
        enum InfluModel{IC,LT,CONT};
        // le modele de diffusion du graphe
        InfluModel influModel;
        // dossier du graph
        string folder;
        // fichier contenant le graph
        string graph_file;
        // vecteur de probabilit�s
        // Nous traitons ici uniquement les valeurs discretes
        vector <vector<double>> probT;
        //
        vector <bool> hasnode;
        // prototypes
        void setInfuModel(InfluModel modele);
        void readNM();
        void Afficher();
        void addEdge(int a, int b, double p);
        void readGraph();









};


#endif DEF_GRAPH
