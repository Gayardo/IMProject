#ifndef __Graph.h__
#define __Graph.h__

#include <string>
#include <vector>
#include <map>
#include <utility>
#include <set>

#include "Arguments.h"

/**
  *
  */
class Graph
{
  public:
    std::string directory;              /**< directory of dataset */
    int nodes;                          /**< number of nodes */
    int edges;                          /**< number of edges*/
    std::vector<std::vector<std::pair<int, double> > > graph;
    Arguments args;                     /**< Command line arguments */

    /**
      * Graph constructor
      *
      * @param arguments: Arguments object to hold important information on program
      */
    Graph(Arguments& arguments);

    /**
      * Graph Constructor
      *
      * @param arguments: Arguments object to hold important information on program
      * @param import: bool value to determine whether to import graph or not
      */
    Graph(Arguments& arguments, bool import);

    /**
      * Function to add an edge
      *
      * @param a: user influencee
      * @param b: user influenced
      * @param w: influence weight
      */
    void addEdge(int a, int b, double w);

    /**
      * Function to read attributes.txt
      */
    void readAttributes();

    /**
      * Function to import graph from file
      */
    void loadGraph();

    /**
      * Function to print graph
      */
    void print();
};
#endif
