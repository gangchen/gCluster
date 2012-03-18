gegc: gCluster.o gegc.cpp
	g++ Graph.o Edge.o Node.o gCluster.o gegc.cpp -o gegc
gCluster.o: gCluster.cpp gCluster.h Graph.o Cluster.o
	g++ gCluster.cpp -c
Cluster.o: Graph.o Cluster.cpp Cluster.h
	g++ Cluster.cpp -c
Graph.o: Edge.o Node.o Graph.cpp Graph.h
	g++ Graph.cpp -c
Edge.o: Edge.cpp Edge.h
	g++ Edge.cpp -c
Node.o: Node.cpp Node.h
	g++ Node.cpp -c
clean:
	rm *.o