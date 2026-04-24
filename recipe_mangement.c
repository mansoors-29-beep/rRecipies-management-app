#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

// Node structure
struct Node {
    int id;
    char name[50];
    struct Node* next;
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

// Add edge (optional - recipe relation)
void addEdge(struct Graph* graph, int src, int dest, char name[]) {
    struct Node* newNode = createNode(dest, name);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

// Add recipe
void addNode(struct Graph* graph) {
    int id;
    char name[50];

    printf("Enter Recipe ID: ");
    scanf("%d", &id);

    printf("Enter Recipe Name: ");
    scanf("%s", name);

    graph->adjList[id] = createNode(id, name);

    printf("Recipe added successfully!\n");
}

// Display recipes
void display(struct Graph* graph) {
    printf("\n--- Home Recipe Management ---\n");
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

// Search recipe
void searchNode(struct Graph* graph) {
    int id;
    printf("Enter Recipe ID to search: ");
    scanf("%d", &id);

    if (graph->adjList[id] != NULL) {
        printf("Recipe Found: %s\n", graph->adjList[id]->name);
    } else {
        printf("Recipe not found!\n");
    }
}

// Update recipe
void updateNode(struct Graph* graph) {
    int id;
    char newName[50];

    printf("Enter Recipe ID to update: ");
    scanf("%d", &id);

    if (graph->adjList[id] != NULL) {
        printf("Enter new Recipe Name: ");
        scanf("%s", newName);
        strcpy(graph->adjList[id]->name, newName);
        printf("Recipe updated!\n");
    } else {
        printf("Recipe not found!\n");
    }
}

// Delete recipe
void deleteNode(struct Graph* graph) {
    int id;
    printf("Enter Recipe ID to delete: ");
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
        printf("Recipe deleted successfully!\n");
    } else {
        printf("Recipe not found!\n");
    }
}

// Main menu
int main() {
    struct Graph* graph = createGraph();
    int choice;

    while (1) {
        printf("\n===== Home Recipe Management System =====\n");
        printf("1. Add Recipe\n");
        printf("2. Delete Recipe\n");
        printf("3. Update Recipe\n");
        printf("4. Search Recipe\n");
        printf("5. Display Recipes\n");
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
