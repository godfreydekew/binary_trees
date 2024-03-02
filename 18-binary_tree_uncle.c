#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         has no parent, or has no uncle
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
