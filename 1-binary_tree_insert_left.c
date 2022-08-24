#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * of another node
 * @parent: pointer to the node to insert the left_child in.
 * @value: value to store in the new code
 * Return: new node or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *store = NULL;/* will store the address of parent left-child */

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		store = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = store;
		store->parent = parent->left;
		store = NULL;
		return (parent->left);
	}

	parent->left = binary_tree_node(parent, value);
	return (parent->left);

}
