#ifndef __InfGraph.h__
#define __InfGraph.h__

#include "Arguments.h"
#include "Graph."

/**
  *
  */
class InfGraph: public Graph{

  // compute influence score using MC simulations SEQUENTIALLY
  double mcInfluenceScore();

  // compute influence score using MC simulations PARALLEL
  double mcInfluenceScoreParallel();

  // computes activated nodes in one MC simulation
  int influenceSimulation();
};
#endif
