#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of nodes
 *Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}
