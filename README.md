# Home Recipies-management-app
# Home Recipe Ingredient Graph CRUD (C Project)

 ##Team Members

1.Shaik Abdul Azeez

2.Syed Mansoor

#Problem Statement

Managing recipes and their ingredients efficiently is important in food applications.
This project implements a **Home Recipe  Management System** using a **Graph Data Structure** in C.

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


### 3. delete

* Locate node
* Free all linked nodes using `free`
* Remove reference from graph

### 4. update
* Search node by ID
* Modify the node name using `strcpy`
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
<img width="403" height="208" alt="Screenshot 2026-04-24 210807" src="https://github.com/user-attachments/assets/967bf385-2f8c-4a85-9618-4b99c0a26e55" />
2.
<img width="475" height="300" alt="Screenshot 2026-04-24 210924" src="https://github.com/user-attachments/assets/632a1455-87a6-49ba-b221-560ceae6c9cb" />
3.
<img width="480" height="341" alt="Screenshot 2026-04-24 210935" src="https://github.com/user-attachments/assets/68fca8c5-8b20-4070-97c6-73c44e8a858a" />
4.
<img width="426" height="317" alt="Screenshot 2026-04-24 210949" src="https://github.com/user-attachments/assets/1a3a53c8-539e-40c6-ab8f-830b6615bb25" />
5.
<img width="432" height="257" alt="Screenshot 2026-04-24 211001" src="https://github.com/user-attachments/assets/a3db9aea-3c0d-4536-bddc-571676d739b6" />
6.
<img width="516" height="317" alt="image" src="https://github.com/user-attachments/assets/069684e1-db65-48d9-8ad0-40a8f91881a3" />

## 🎥 Demo Video Link
