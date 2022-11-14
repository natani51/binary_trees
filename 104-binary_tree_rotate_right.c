#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs
 * a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right != NULL)
		pivot->right->parent = tree;
	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
