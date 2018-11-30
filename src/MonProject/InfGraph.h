#ifndef DEF_INFGRAPH
#define DEF_INFGRAPH
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include "Graph.h"
#include "head.h"
using namespace std;
class InfGraph : public Graph
{
private:
vector<bool> visit;
vector<int> visit_mark;


public:
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
void build_seedset(int k);
double influenceHyperGraph();

};

#endif
