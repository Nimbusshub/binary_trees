#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t; /*Basic binary tree */
typedef struct binary_tree_s bst_t; /* Binary Search Tree */
typedef struct binary_tree_s avl_t; /*AVL tree */
typedef struct binary_tree_s heap_t; /* max binary heap */
void binary_tree_print(const binary_tree_t *); /*Printing the tree */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /*Creates a binary node tree */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); /* Inserts a node as the left_child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); /* Inserts a node as the right-child of another node */
void binary_tree_delete(binary_tree_t *tree); /* Deletes an entire binary tree */
int binary_tree_is_leaf(const binary_tree_t *node); /* Checks if a node is a leaf */
int binary_tree_is_root(const binary_tree_t *node); /*Checks if a node is root */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); /* Traverses through a binary tree in pre-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)); /* Traverses through a binary tree in in-order traversal */

#endif /* _BINARY_TREES_H_ */
