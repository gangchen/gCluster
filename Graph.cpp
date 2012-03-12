#include "Graph.h"

using namespace std;

Graph::Graph(){
  nodes = new set<Node*, nodeCmp>;
  edges = new vector<Edge*>;
}

set<Node*>::iterator Graph::addNode(Node* node){
  pair<set<Node*>::iterator, bool> insertRet;
  insertRet = nodes->insert(node);
  return insertRet.first;
}

bool Graph::addEdge(Edge* edge){
  edges->push_back(edge);
  return true;
}

set<Node*, nodeCmp>* Graph::getNodes(){
  return nodes;
}

vector<Edge*>* Graph::getEdges(){
  return edges;
}
