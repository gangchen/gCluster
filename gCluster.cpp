#include "gCluster.h"

using namespace std;

gCluster::gCluster(){
  g = new Graph();
}

bool gCluster::loadGraph(string filename){
  
  ifstream networkFilestream(filename.c_str());

  if(!networkFilestream){
    cout << "Cannot open network file" << endl;
    return false;
  }
  
  string nodeLabel1, nodeLabel2, weight;
  while(networkFilestream >> nodeLabel1 >> nodeLabel2 >> weight){
    Node* node1 = new Node(1, nodeLabel1);
    Node* node2 = new Node(2, nodeLabel2);
    Edge* e = new Edge(node1, node2);
    set<Node*>::iterator itNode1 = g->addNode(node1);
    set<Node*>::iterator itNode2 = g->addNode(node2);

    if(!(*itNode1)->addEdge(e)){
      cout << "ERROR" << endl;
      exit(1);
    }
    if(!(*itNode2)->addEdge(e)){
      cout << "ERROR" << endl;
      exit(1);
    }
    g->addEdge(e);
  }
  networkFilestream.close();

  cout << g->getEdges()->size() << endl;
  cout << g->getNodes()->size() << endl;
  for(set<Node*>::iterator it = g->getNodes()->begin();
      it != g->getNodes()->end();
      it ++){
    cout << (*it)->getLabel() << ":";
    vector<Edge*>* edges = (*it)->getEdges();
    for(vector<Edge*>::iterator eit = edges->begin();
	eit != edges->end();
	eit++){
      cout << (*eit)->getStartNode()->getLabel() << ",";
    }
    cout << endl;
  }
  return true;
}

bool gCluster::loadExpression(string filename){
  return true;
}

bool gCluster::cluster(){
  return true;
}

bool gCluster::writeResult(string filename){
  return true;
}
