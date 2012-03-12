#include "Edge.h"

Edge::Edge(Node* eStartNode, Node* eEndNode){
  startNode = eStartNode;
  endNode = eEndNode;
  weight = 1.0;
}

Node* Edge::getStartNode(){
  return startNode;
}

Node* Edge::getEndNode(){
  return endNode;
}
