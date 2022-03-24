#include <stdlib.h>
#include "binary_trees.h"
/**
  * _pow_recursion - calculates base to the power of exp
  * @x: base number
  * @y: exponent
  * Return: x to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: tree to check
  * Return: 1 if perfect, 0 otherwise
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
  * binary_tree_size - measures the size of a binary tree
  * @tree: tree to measure
  * Return: size of tree, 0 if tree is NULL
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
