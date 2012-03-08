#ifndef EDGE_H
#define EDGE_H

#include "Node.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Node;

class Edge{
 private:
  Node* startNode;
  Node* endNode;
 public:
  Edge();
  Edge(Node, Node);
  ~Edge();
  Node getStartNode();
  Node getEndNode();
};

#endif
