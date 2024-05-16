#pragma once
#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#define NodeMaxCount 101
#define INF 2147483647
using namespace std;
// Number of vertices in the graph
#define V 26

/////////////////////////////////////////////////////////
///  TODO: Add Your Struct or Functions if required /////

///////////      End of Implementation      /////////////
/////////////////////////////////////////////////////////

class Graph {
public:
  Graph(){};
  ~Graph(){};

  /////////////////////////////////////////////////////////
  //////  TODO: Add public members if required ///////////

  ///////////      End of Implementation      /////////////
  /////////////////////////////////////////////////////////

  int addUndirectedEdge(string nodeA, string nodeB);
  int addUndirectedEdge(string nodeA, string nodeB, int weight);

  string checkCycle();
  string findFurthest(string nodeA);

  int addDirectedEdge(string nodeA, string nodeB);
  int addDirectedEdge(string nodeA, string nodeB, int weight);
  int addDirectedEdgeWCC(string nodeA, string nodeB);
  string getTopologicalSort();
  string StrongConnectedComponents();
  string WeaklyConnectedComponents();

  string dijkstra(string source, int budget, ofstream &fout);

  int kruskalMST(ofstream &);

private:
  /////////////////////////////////////////////////////////
  //////  TODO: Add private members if required ///////////
  int edge[100][100] = {0};
  int node_num[100] = {
      -1,
  };
  int count = 0;
  int cnt = 0;
  bool exist[100] = {0};

  int directGraph[26][26] = {
      0,
  };
  string pa5_answer;

  ///////////      End of Implementation      /////////////
  /////////////////////////////////////////////////////////
};
