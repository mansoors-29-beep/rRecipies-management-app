# rRecipies-management-app
# Recipe Ingredient Graph CRUD (C Project)

 ##Team Members

1.Shaik Abdul Azeez
2.Syed Mansoor

#Problem Statement

Managing recipes and their ingredients efficiently is important in food applications.
This project implements a **Recipe Ingredient Management System** using a **Graph Data Structure** in C.

Each recipe or ingredient is represented as a **node**, and relationships between them are represented as **edges**. The system supports full **CRUD operations** (Create, Read, Update, Delete) along with search functionality.
## 🧠 Data Structure Used

* **Graph (Adjacency List Representation)**
  * Each node represents:

  * Recipe / Ingredient
  * Each edge represents:

  * Relationship between ingredients

# Why Graph?

* Supports **multiple relationships (n-ary connections)**
* Efficient for representing complex ingredient dependencies

---

## ⚙️ Algorithm Explanation

### 1. Create (Add Node)


* Allocate memory using `malloc`
* Store node ID and name
* Insert into adjacency list


### 2. Read (Display)


* Traverse adjacency list
* Print each node and its connected ingredients


### 3. Update

* Search node by ID
* Modify the node name using `strcpy`

### 4. Delete

* Locate node
* Free all linked nodes using `free`
* Remove reference from graph

### 5. Search

* Check if node exists in adjacency list
* Display node details if found

---

## 🛠️ Compilation Instructions

### Step 1: Save File

Save the code as:

```
recipe_graph.c
```

### Step 2: Compile

Use GCC compiler:

```
gcc recipe_graph.c -o recipe_graph
```

### Step 3: Run

```
./recipe_graph
```

---

## 📋 Sample Output

1.main menu



2.

---

## 🎥 Demo Video Link
