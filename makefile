Graph.o: Edge.o Node.o Graph.cpp Graph.h
	g++ Graph.cpp -c
Edge.o: Edge.cpp Edge.h
	g++ Edge.cpp -c
Node.o: Node.cpp Node.h
	g++ Node.cpp -c
clean:
	rm *.o