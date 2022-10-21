x1A. C - Hash tables
====================

Resources
---------

**Read or watch**:

-   [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://alx-intranet.hbtn.io/rltoken/IQVfdxJlS6jhAgcuUoCseg "What is a HashTable Data Structure - Introduction to Hash Tables , Part 0")
-   [Hash function](https://alx-intranet.hbtn.io/rltoken/ZKpRI_FxOxAz80Onpfy0Ew "Hash function")
-   [Hash table](https://alx-intranet.hbtn.io/rltoken/mxjKpEfAw3E5B8S3inPuHQ "Hash table")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/fLjDjjaCL1oE-WJcDPpmFg "explain to anyone"), **without the help of Google**:

### General

-   What is a hash function
-   What makes a good hash function
-   What is a hash table, how do they work and how to use them
-   What is a collision and what are the main ways of dealing with collisions in the context of a hash table
-   What are the advantages and drawbacks of using hash tables
-   What are the most common use cases of hash tables

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are allowed to use the C standard library
-   The prototypes of all your functions should be included in your header file called `hash_tables.h`
-   Don't forget to push your header file
-   All your header files should be include guarded

More Info
---------

### Data Structures

Please use these data structures for this project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

```

### Tests

We strongly encourage you to work all together on a set of tests

### Python Dictionaries

Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for the user. Python doesn't use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about [how dictionaries are implemented in Python 2.7](https://alx-intranet.hbtn.io/rltoken/LGV7VAHGAkef5wdIhqiY2A "how dictionaries are implemented in Python 2.7") (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://alx-intranet.hbtn.io/rltoken/6wE80OFPwL-As1zGh2iMFg "Read more here") (not mandatory).

**Author:**
**Abdallah Mahmoud** [Abdallah Mahmoud](https://github.com/abdamah)
