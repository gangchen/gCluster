#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <set>

using namespace std;

class nodeCmp{
 public:
  bool operator()(const Node* node1, const Node* node2) const{
    return node1->getLabel() < node2->getLabel();
  }
};

class Graph{
 private:
  set<Node*, nodeCmp> *nodes;
  vector<Edge*> *edges;
  
 public:
  Graph();
  Graph(vector<Node*>, vector<Edge*>);
  bool addEdge(Edge*);
  set<Node*>::iterator addNode(Node*);
  set<Node*, nodeCmp>* getNodes();
  vector<Edge*>* getEdges();
};

#endif
