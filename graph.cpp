#include "graph.h"
#include <fstream>
#include <iostream>
#include <string>
#define INF 2147483647
using namespace std;
#include <algorithm>

/////////////////////////////////////////////////////////
//////////  TODO: Implement From Here      //////////////
/*  Write your codes if you have additional functions  */

///////////      End of Implementation      /////////////
/////////////////////////////////////////////////////////

/////////1,2

int Graph::addUndirectedEdge(string nodeA, string nodeB) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////
  return -1;
  ///////////      End of Implementation      /////////////
  ///////////////////////////////////////////////////////
}

int Graph::addUndirectedEdge(string nodeA, string nodeB, int weight) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////

  ///////////      End of Implementation      /////////////
  ///////////////////////////////////////////////////////
  return 0;
}

string Graph::checkCycle() {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////
  return "";
  ///////////      End of Implementation      /////////////
  ///////////////////////////////////////////////////////
}

string Graph::findFurthest(string nodeA) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////
  return "";
  ///////////      End of Implementation      /////////////
  ///////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////
//////////  TODO: Implement From Here      //////////////

int Graph::addDirectedEdge(string nodeA, string nodeB) {
  int i, j;
  int A = (int)nodeA[0] - 65;
  int B = (int)nodeB[0] - 65;
  for (i = 0; i < count; i++) {
    if (node_num[i] == A)
      break;
  }
  if (i == count) {
    node_num[count] = A;
    count++;
  }
  for (j = 0; j < count; j++) {
    if (node_num[j] == B)
      break;
  }
  if (j == count) {
    node_num[count] = B;
    count++;
  }
  edge[i][j] = 1;
  exist[i] = 1;
  exist[j] = 1;

  return 0;
}

int Graph::addDirectedEdgeWCC(string nodeA, string nodeB) {

  int A = (int)nodeA[0] - 'A';
  int B = (int)nodeB[0] - 'A';

  if (A < 0 || A >= 100 || B < 0 || B >= 100) {
    return -1;
  }

  edge[A][B] = 1;
  edge[B][A] = 1;

  exist[A] = true;
  exist[B] = true;

  if (A >= cnt)
    cnt = A + 1;
  if (B >= cnt)
    cnt = B + 1;

  return 0;
}

string Graph::getTopologicalSort() { return "ERROR"; }

string Graph::StrongConnectedComponents() { return "ERROR"; }

string Graph::WeaklyConnectedComponents() { return "ERROR"; }

///////////      End of Implementation      /////////////
///////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//////////  TODO: Implement From Here      //////////////
/*  Write your codes if you have additional functions for task5  */

///////////      End of Implementation      /////////////
/////////////////////////////////////////////////////////

int Graph::addDirectedEdge(string nodeA, string nodeB, int weight) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////

  ///////////      End of Implementation      /////////////
  ///////////////////////////////////////////////////////
  return 0;
}

std::string Graph::dijkstra(std::string source, int budget,
                            std::ofstream &fout) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////

  ///////////      End of Implementation      /////////////
  /////////////////////////////////////////////////////////
  return "ERROR";
}

int Graph::kruskalMST(ofstream &fout) {
  /////////////////////////////////////////////////////////
  //////////  TODO: Implement From Here      //////////////

  return 0;
  ///////////      End of Implementation      /////////////
  /////////////////////////////////////////////////////////
}