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
<img width="1641" height="733" alt="111" src="https://github.com/user-attachments/assets/5c8787f2-1eb0-4cec-aff5-6f5c458188a9" />

2.
--![2 c](https://github.com/user-attachments/assets/236218eb-602d-4f78-9944-f54a3a202ec8)
3.
![2 c](https://github.com/user-attachments/assets/8caef78e-b9e8-4fcd-ad5e-346087bc1f36)
4.
<img width="686" height="821" alt="image" src="https://github.com/user-attachments/assets/8eb99760-8333-4a79-8c01-cabfb18b8952" />
5.
<img width="1457" height="831" alt="image" src="https://github.com/user-attachments/assets/e156233e-a8b4-41c1-abd8-fa23bf8e442a" />
  
## 🎥 Demo Video Link
