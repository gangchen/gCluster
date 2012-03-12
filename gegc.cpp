#include "Graph.h"
#include "gCluster.h"

#include <iostream>


using namespace std;

int main(int argc, char * argv[]){

  gCluster *g = new gCluster();
  g->loadGraph("unweight.txt");
  g->loadExpression("expression.txt");
  g->cluster();
  g->writeResult("result.txt");
  return 0;
}
