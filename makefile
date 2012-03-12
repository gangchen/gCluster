gegc: gCluster.o gegc.cpp
	g++ Graph.o Edge.o Node.o gCluster.o gegc.cpp -o gegc
gCluster.o: gCluster.cpp gCluster.h Graph.o Edge.o Node.o
	g++ gCluster.cpp -c
Graph.o: Edge.o Node.o Graph.cpp Graph.h
	g++ Graph.cpp -c
Edge.o: Edge.cpp Edge.h
	g++ Edge.cpp -c
Node.o: Node.cpp Node.h
	g++ Node.cpp -c
clean:
	rm *.o