
#include <stdio.h>

#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];

void DFS(int node, int N) {
    visited[node] = 1;
    printf("%d, ", node);

    for (int i = 0; i < N; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            DFS(i, N);
        }
    }
}

int main() {
    int N;
    printf("Enter the number of nodes: ");
    scanf("%d", &N);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int numConnectedComponents = 0;

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            numConnectedComponents++;
            printf("Connected Component %d: ", numConnectedComponents);
            DFS(i, N);
            printf("\n");
        }
    }

    return 0;
}
