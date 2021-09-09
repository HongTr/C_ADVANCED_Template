#include "Graphlib.h"

int main(){
    Graph g = createGraph();
    
    addVertex(g, 1, "a");
    addVertex(g, 2, "b");
    addVertex(g, 3, "c");
    addVertex(g, 4, "d");
    addVertex(g, 5, "e");
    addVertex(g, 6, "f");
    //addVertex(g, 7, "g");
    

    addEdge2(g, 1, 2, 5.2);
    addEdge2(g, 2, 3, 2.2);
    addEdge2(g, 1, 4, 1.2);
    addEdge2(g, 2, 4, 3.2);
    addEdge2(g, 2, 5, 2.2);
    addEdge2(g, 5, 4, 6.2);
    addEdge2(g, 5, 6, 1.2);
    addEdge2(g, 3, 6, 4.2);

    //BFS(g, 1, -1);
    //int i = weak_connect(g, 1, -1);
    //printf("%d \n", i);
    //DFS(g, 1, -1);
    
    int length, path[100];
    float temp = dijkstra(g, 1, 6, path, &length);
    for (int i = 0; i < length; i++){
        printf("%d ", path[i]);
    }
    printf("\n");
    printf("length: %.2f", temp);


           



}