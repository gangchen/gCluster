#ifndef CLUSTER_H
#define CLUSTER

#include <vector>
#include "Graph.h"

class Cluster : public Graph{
 private:
  double inDegree;
  double outDegree;
  double modularity;
  Graph *parentGraph;
  vector<Node*> *nodes;
 public:
  double getModularity();
  double getNodes();
  double getParentGraph();
  Cluster();
  Cluster(vector<Node*> *, Graph *);
  ~Cluster();
};

#endif
