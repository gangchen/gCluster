#ifndef GCLUSTER_H
#define GCLUSTER_H

#include "Graph.h"

#include <string>
#include <iostream>

class gCluster{
 private:
  Graph* g;
  //Expression e;
 public:
  gCluster();
  bool loadGraph(string);
  bool loadExpression(string);
  bool cluster();
  bool writeResult(string);
};

#endif
