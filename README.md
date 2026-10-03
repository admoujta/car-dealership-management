# 🚗 Car Dealership Management System

<div align="center">

**A modular command-line car dealership management system written in C.**

Manage vehicle inventory, search and sort cars, calculate stock statistics, and save or reload dealership data from files.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Make](https://img.shields.io/badge/Build-Make-6D00CC?style=for-the-badge&logo=gnu&logoColor=white)
![CLI](https://img.shields.io/badge/Interface-CLI-111111?style=for-the-badge)
![Data Structure](https://img.shields.io/badge/Data%20Structure-Linked%20List-2F855A?style=for-the-badge)

</div>

---

## 📌 About the Project

**Car Dealership Management System** is a console application developed in **C** for managing the inventory of a car dealership.

The project is built around a **singly linked list**, where every node represents one vehicle in stock. Each vehicle stores:

- Brand
- Model
- Manufacturing year
- Price
- Pointer to the next vehicle

The application provides a menu-driven interface for performing the main operations required to manage a dealership inventory, including creation, modification, deletion, search, sorting, statistics, and file persistence.

This project is particularly useful for practicing core C programming concepts such as **structures, pointers, dynamic memory allocation, linked lists, modular programming, file handling, input validation, and Makefiles**.

---

## ✨ Features

### 🚘 Vehicle Management

- Add a vehicle at the beginning of the list
- Add a vehicle at the end of the list
- Add a vehicle after an existing vehicle
- Modify vehicle information
- Delete vehicles from the inventory
- Display all available vehicles

### 🔎 Search System

Search vehicles by:

- Brand
- Model
- Year
- Price
- Multiple criteria with advanced search

### ↕️ Sorting

The inventory can be sorted by:

- Brand
- Model
- Year
- Price

### 📊 Inventory Statistics

The program can calculate useful information about the dealership stock, including:

- Total number of vehicles
- Total monetary value of the inventory

### 💾 File Management

Vehicle data can be persisted using files:

- Save the current inventory to a file
- Load an existing inventory from a file

This makes it possible to reuse vehicle data between different executions of the program.

---

## 🧠 Concepts Used

This project demonstrates several important C programming concepts:

| Concept | Usage |
|---|---|
| Structures | Represent vehicle information |
| Linked Lists | Store and manage the vehicle inventory dynamically |
| Pointers | Traverse and modify the linked list |
| Dynamic Memory | Create and remove vehicle nodes at runtime |
| File I/O | Save and restore dealership data |
| Modular Programming | Separate features into multiple `.c` files |
| Header Files | Share structures and function prototypes |
| Input Validation | Validate numeric and text input |
| Makefile | Automate compilation and cleanup |

---

## 🏗️ Project Structure

```text
car-dealership-management/
│
├── Makefile
├── README.md
│
├── includes/
│   └── ft.h
│
└── srcs/
    ├── main.c
    ├── Gestion.c
    ├── menu_principale.c
    ├── menu_ajout.c
    ├── menu_modifier.c
    ├── menu_sup.c
    ├── menu_recherche.c
    ├── menu_trie.c
    ├── menu_statistique.c
    ├── menu_Fichier.c
    │
    ├── creation_noeud.c
    ├── Ajout_debut.c
    ├── ajout_fin.c
    ├── ajout_apre_voiture.c
    │
    ├── sup_debut.c
    ├── sup_fin.c
    ├── sup_voit.c
    │
    ├── modif_marque.c
    ├── modif_model.c
    ├── modif_anne.c
    ├── modif_prix.c
    │
    ├── Recherche_marque.c
    ├── Recherche_model.c
    ├── Recherche_annee.c
    ├── Recherche_prix.c
    ├── Recherche_avance.c
    │
    ├── trie_marque.c
    ├── trie_model.c
    ├── trie_annee.c
    ├── trie_prix.c
    │
    ├── Total_voit.c
    ├── Valeur_tota_voit.c
    │
    ├── charger_fichier.c
    ├── sauv_fichier.c
    ├── affiche.c
    └── to_lower.c
```

The project is intentionally divided into small modules so that each source file is responsible for a specific operation.

---

## 📦 Vehicle Data Structure

The central data structure is defined in `includes/ft.h`:

```c
typedef struct Voiture
{
    char marque[50];
    char modele[50];
    int annee;
    float prix;
    struct Voiture *next;
} Voiture;
```

Each `Voiture` node contains the information of one car and a pointer to the next node in the inventory.

Conceptually, the stock looks like this:

```text
HEAD
  │
  ▼
┌─────────────┐    ┌─────────────┐    ┌─────────────┐
│ Vehicle #1  │───▶│ Vehicle #2  │───▶│ Vehicle #3  │───▶ NULL
└─────────────┘    └─────────────┘    └─────────────┘
```

---

## ⚙️ Requirements

To build the project, you need:

- A C compiler such as `cc`, `gcc`, or `clang`
- GNU `make`
- A Unix-like terminal environment

The provided Makefile compiles the project using:

```text
-Wall -Wextra -Werror
```

### Linux

Install the required build tools on Debian/Ubuntu-based systems:

```bash
sudo apt update
sudo apt install build-essential
```

### Fedora

```bash
sudo dnf install gcc make
```

### macOS

Install Apple's Command Line Tools:

```bash
xcode-select --install
```

---

## 🚀 Installation

### 1. Clone the repository

```bash
git clone https://github.com/admoujta/car-dealership-management.git
```

### 2. Enter the project directory

```bash
cd car-dealership-management
```

### 3. Compile the project

```bash
make
```

After compilation, the executable will be created as:

```text
car-management
```

---

## ▶️ How to Run

Launch the application with:

```bash
./car-management
```

You will first see the main menu:

```text
Menu Principal:

1 --> Gestion d'un Concessionnaire de Voitures
2 --> Quitter
```

Select `1` to open the dealership management interface.

The management menu provides the main operations:

```text
1 --> Add a vehicle to stock
2 --> Modify a vehicle
3 --> Delete a vehicle
4 --> Search for a vehicle
5 --> Display vehicles in stock
6 --> File operations
7 --> Sort inventory
8 --> Inventory statistics
9 --> Return to main menu
```

Enter the number corresponding to the operation you want to perform and follow the prompts displayed in the terminal.

---

## 🧪 Example Workflow

A typical usage scenario could be:

```text
1. Start the program
2. Open dealership management
3. Add several vehicles
4. Display the inventory
5. Search for a specific model
6. Sort vehicles by price
7. Display inventory statistics
8. Save the inventory to a file
9. Exit the program
```

When the application is started again, the saved inventory can be loaded through the file-management menu.

---

## 🛠️ Makefile Commands

The project includes a Makefile to simplify compilation and cleanup.

### Compile

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and executable

```bash
make fclean
```

### Rebuild everything

```bash
make re
```

---

## 🔍 Main Functional Modules

| Module | Responsibility |
|---|---|
| `main.c` | Program entry point |
| `menu_principale.c` | Main application menu |
| `Gestion.c` | Dealership management menu |
| `creation_noeud.c` | Creates a new vehicle node |
| `Ajout_debut.c` | Inserts a vehicle at the beginning |
| `ajout_fin.c` | Inserts a vehicle at the end |
| `ajout_apre_voiture.c` | Inserts a vehicle after another vehicle |
| `modif_*.c` | Updates vehicle attributes |
| `sup_*.c` | Removes vehicles from the list |
| `Recherche_*.c` | Searches the inventory |
| `trie_*.c` | Sorts vehicles |
| `Total_voit.c` | Counts vehicles in stock |
| `Valeur_tota_voit.c` | Calculates total stock value |
| `sauv_fichier.c` | Saves inventory data |
| `charger_fichier.c` | Loads inventory data |
| `ft.h` | Shared structure and function declarations |

---

## 🎯 Learning Objectives

The main purpose of this project is to strengthen understanding of:

- Building a complete program in C
- Designing and manipulating linked lists
- Working safely with pointers
- Organizing a project across multiple source files
- Implementing CRUD-style operations without a database
- Searching and sorting structured data
- Saving data with file I/O
- Managing dynamically allocated memory
- Building projects with Make

---

## 💡 Possible Improvements

Future versions could include:

- Unique vehicle IDs
- Persistent binary or CSV storage
- Duplicate detection
- More advanced statistics
- Price-range filtering
- Pagination for large inventories
- Improved terminal UI
- Unit tests
- Better error reporting
- Import/export support
- A database-backed version
- A graphical or web interface

---

## 🤝 Contributing

Contributions, improvements, and suggestions are welcome.

To contribute:

```bash
# Fork the repository
# Create a new branch
git checkout -b feature/my-feature

# Commit your changes
git commit -m "Add my feature"

# Push your branch
git push origin feature/my-feature
```

Then open a Pull Request on GitHub.

---

## 👤 Author

**Adam Moujtahid**

GitHub: [@admoujta](https://github.com/admoujta)

---

<div align="center">

### ⭐ If you find this project useful, consider giving the repository a star.

Built with **C**, linked lists, and a focus on clean modular programming.

</div>
