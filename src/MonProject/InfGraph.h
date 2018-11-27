#ifndef DEF_INFGRAPH
#define DEF_INFGRAPH
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "Graph.h"
using namespace std;
class InfGraph: public Graph
{
private:
    vector<bool> visit;
    vector<int> visit_mark;


public:
    vector<vector<int>> hyperG;
    vector<vector<int>> hyperGT;
    int x;
    InfGraph(string folder, string graph_file, int x);
    void afficher();
    void init_hyper_graph();



};

#endif
