/*
 * Graph.h
 *
 *  Created on: 15 May 2022
 *      Student: Aladdin Karsli
 *      ID: 4160039
 *      E-mail: kar.3la2@gmail.com
 *		SPU-IT/SoftEng.
 */

#ifndef GRAPH_H_
#define GRAPH_H_
#include <list>
#include <vector>

using namespace std;

class Graph {
	int size;
	vector<int> *adjacent;
	vector<int> *weight;
	int h_cost[];
	void DFSHelper(int node, int goal, bool visited[]);
	void DFSHelper(int node, int goal1, int goal2, bool visited[]);
public:
	Graph(int size);
	virtual ~Graph();
	void addEdge(int node1, int node2);
	void addEdge(int node1, int node2, int weight);
	void addEdge(int node1, int node2, int weight, int h_cost);
	void DFS(int start, int goal);
	void DFS(int start, int goal1, int goal2);
	void BFS(int start, int goal);
	void BFS(int start, int goal1, int goal2);
	void UCS(int start, int goal);
	void UCS(int start, int goal1, int goal2);
	void AStarTS(int start, int goal);
	void AStarTS(int start, int goal1, int goal2);
	void AStarGS(int start, int goal);
	void AStarGS(int start, int goal1, int goal2);
	void displayPath(struct priorityQueue p);
};

#endif /* GRAPH_H_ */
