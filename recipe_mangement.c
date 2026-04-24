//Home Recipe management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Recipe
struct Recipe {
    int id;
    char name[50];
    char ingredients[100];
    struct Recipe* next;
};

struct Recipe* head = NULL;

// Add Recipe
void addRecipe() {
    struct Recipe* newNode = (struct Recipe*)malloc(sizeof(struct Recipe));

    printf("Enter Recipe ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Recipe Name: ");
    scanf(" %[^\n]", newNode->name);

    printf("Enter Ingredients: ");
    scanf(" %[^\n]", newNode->ingredients);

    newNode->next = head;
    head = newNode;

    printf(" Recipe Added Successfully!\n");
}

// Display Recipes
void displayRecipes() {
    struct Recipe* temp = head;

    if (temp == NULL) {
        printf("No recipes available.\n");
        return;
    }

    printf("\n--- Recipe List ---\n");
    while (temp != NULL) {
        printf("\nID: %d", temp->id);
        printf("\nName: %s", temp->name);
        printf("\nIngredients: %s\n", temp->ingredients);
        temp = temp->next;
    }
}

// Search Recipe
void searchRecipe() {
    int id;
    printf("Enter Recipe ID to search: ");
    scanf("%d", &id);

    struct Recipe* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("\nFound Recipe:\n");
            printf("Name: %s\n", temp->name);
            printf("Ingredients: %s\n", temp->ingredients);
            return;
        }
        temp = temp->next;
    }

    printf(" Recipe not found.\n");
}

// Delete Recipe
void deleteRecipe() {
    int id;
    printf("Enter Recipe ID to delete: ");
    scanf("%d", &id);

    struct Recipe *temp = head, *prev = NULL;

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf(" Recipe not found.\n");
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);
    printf(" Recipe deleted successfully!\n");
}
//update recepie
void updateRecipe() {
    int id;
    printf("Enter Recipe ID to update: ");
    scanf("%d", &id);

    struct Recipe* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            printf("\nEnter new Recipe Name: ");
            scanf(" %[^\n]", temp->name);

            printf("Enter new Ingredients: ");
            scanf(" %[^\n]", temp->ingredients);

            printf(" Recipe updated successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf(" Recipe not found.\n");
// Main Menu
int main() {
    int choice;

    while (1) {
        printf("\n--- Home Recipe Management ---\n");
        printf("1. Add Recipe\n");
        printf("2. Display Recipes\n");
        printf("3. Search Recipe\n");
        printf("4. Delete Recipe\n");
        printf("5.update Recipe\n")
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecipe(); break;
            case 2: displayRecipes(); break;
            case 3: searchRecipe(); break;
            case 4: deleteRecipe(); break;
            case 5:updateRecipe(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
