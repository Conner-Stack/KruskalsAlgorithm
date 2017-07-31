#pragma once
#include <iostream>
class Edge {
public:
	// Default constructor to create an edge with no data.
	Edge();

	/*Default constructor to create an edge with incident
	vertices v1 and v2, and the weight of the edge.*/
	Edge(int v1, int v2, int weight);

	/*Member function to return the integer representation
	of the first incident vertex.*/
	int first();

	/*Member function to return the integer representation
	of the second incident vertex.*/
	int edgeWeight();

	//Overloaded assignment operator.
	void operator= (Edge rhs);

	//Overloaded less than or equal to operator
	bool operator<=(Edge rhEdge);
private:
	struct AnEdge {
		int v1;
		int v2;
		int weight;
	};
	AnEdge theEdge;
};
