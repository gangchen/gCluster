#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Graph{
 private:
  vector<Node> nodes;
  vector<Edge> edges;
  
 public:
  Graph(vector<Node>, vector<Edge>);
  bool addEdge(Edge);
  bool addNode(Node);
  vector<Node> getNodes();
  vector<Edge> getEdges();
};

#endif
