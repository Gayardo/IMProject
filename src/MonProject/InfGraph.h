#ifndef DEF_INFGRAPH
#define DEF_INFGRAPH
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "Graph.h"
#include "head.h"
#include "rrset.h"
typedef long long int64;
using namespace std;


// structure constituée des parametres d'entrée de IMM
class Argument{
public:
    //the size of the seed set for influence maximization
    int k;
    // le dossier contenant le graph
    string dataset;
    // epsilone
    double epsilon;
    // le model de diffusion
    string model;
    // ??
    double T;
};

class InfGraph: public Graph
{
private:
    vector<bool> visit;
    vector<int> visit_mark;


public:
	//
    vector<vector<int> > hyperG;
    vector<vector<int> > hyperGT;
    sfmt_t sfmtSeed;
    // ensemble de noeuds de départ 
    set<int> seedSet;
    deque<int> q;

    //constructeur de la classe infgraph
    InfGraph(string folder, string graph_file);
    void afficher();
    void init_hyper_graph();
    void build_hyper_graph(int64 R, const Argument & arg);
    void build_seedset(int k);
    double influenceHyperGraph();

};

#endif
