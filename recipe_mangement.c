#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

// Node structure
struct Node {
    int id;
    char name[50];
    struct Node* next; // for adjacency list
};

// Graph structure
struct Graph {
    struct Node* adjList[MAX];
    int visited[MAX];
};

// Create graph
struct Graph* createGraph() {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    for (int i = 0; i < MAX; i++) {
        graph->adjList[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

// Create node
struct Node* createNode(int id, char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    return newNode;
}

// Add edge (ingredient relation)
void addEdge(struct Graph* graph, int src, int dest, char name[]) {
    struct Node* newNode = createNode(dest, name);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

// Add node
void addNode(struct Graph* graph) {
    int id;
    char name[50];

    printf("Enter node ID: ");
    scanf("%d", &id);

    printf("Enter node name: ");
    scanf("%s", name);

    graph->adjList[id] = createNode(id, name);

    printf("Node added successfully!\n");
}

// Display graph
void display(struct Graph* graph) {
    printf("\n--- Ingredient Graph ---\n");
    for (int i = 0; i < MAX; i++) {
        if (graph->adjList[i] != NULL) {
            struct Node* temp = graph->adjList[i];
            printf("[%d] %s -> ", i, temp->name);

            temp = temp->next;
            while (temp) {
                printf("%s -> ", temp->name);
                temp = temp->next;
            }
            printf("NULL\n");
        }
    }
}

// Search node
void searchNode(struct Graph* graph) {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    if (graph->adjList[id] != NULL) {
        printf("Node Found: %s\n", graph->adjList[id]->name);
    } else {
        printf("Node not found!\n");
    }
}

// Update node
void updateNode(struct Graph* graph) {
    int id;
    char newName[50];

    printf("Enter ID to update: ");
    scanf("%d", &id);

    if (graph->adjList[id] != NULL) {
        printf("Enter new name: ");
        scanf("%s", newName);
        strcpy(graph->adjList[id]->name, newName);
        printf("Node updated!\n");
    } else {
        printf("Node not found!\n");
    }
}

// Delete node
void deleteNode(struct Graph* graph) {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    if (graph->adjList[id] != NULL) {
        struct Node* temp = graph->adjList[id];
        struct Node* next;

        while (temp) {
            next = temp->next;
            free(temp);
            temp = next;
        }

        graph->adjList[id] = NULL;
        printf("Node deleted successfully!\n");
    } else {
        printf("Node not found!\n");
    }
}

// Menu
int main() {
    struct Graph* graph = createGraph();
    int choice;

    while (1) {
        printf("\n===== Recipe Ingredient Graph =====\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNode(graph);
                break;
            case 2:
                deleteNode(graph);
                break;
            case 3:
                updateNode(graph);
                break;
            case 4:
                searchNode(graph);
                break;
            case 5:
                display(graph);
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}