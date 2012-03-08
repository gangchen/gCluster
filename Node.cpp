#include "Node.h"

using namespace std;

Node::Node(int nodeId, string nodeLabel){
  id = nodeId;
  label = nodeLabel;
}

Node::Node(string nodeLabel){
  id = -1;
  label = nodeLabel;
}

int Node::getId(){
  return id;
}

string Node::getLabel(){
  return label;
}

bool Node::setId(int nodeId){
  id = nodeId;
}

bool Node::setLabel(string nodeLabel){
  label = nodeLabel;
}

/*
bool Node::addEdge(Edge e){
  if(e.getStartNode() == this || e.getEndNode() == this){
    edges.push_back(e);
    return true;
  }else{
    return false;
  }
  }*/
