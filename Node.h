#ifndef NODE_H
#define NODE_H

#include "Edge.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Edge;

class Node{
 private:
  int id;
  string label;
  vector<Edge*>* edges;
 public:
  Node(int, string);
  Node(string);
  Node();
  int getId() const;
  string getLabel() const;
  bool setId(int);
  bool setLabel(string);
  bool addEdge(Edge*);
  vector<Edge*>* getEdges() const;
};

#endif
