#include "binary_trees.h"
#define max(a, b) ((a) >= (b) ? (a) : (b))

/**
 * height - function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: tree is NULL, your function must return 0
 */

size_t height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (1 + max(height(tree->left),
				height(tree->right)));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (height(tree->left) != height(tree->right))
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
