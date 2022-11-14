#include "binary_trees.h"
#define max(a, b) ((a) >= (b) ? (a) : (b))

/**
 * _binary_tree_height - function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: tree is NULL, your function must return 0
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(_binary_tree_height(tree->left),
				_binary_tree_height(tree->right)));
}
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
		if (tree == NULL)
			return (0);
		return (_binary_tree_height(tree->left) -
		_binary_tree_height(tree->right));

}
