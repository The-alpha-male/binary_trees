#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: number of nodes with at least 1 child in the tree, or 0 if tree is
 * NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (!tree)
return (0);
if (tree->left || tree->right)
nodes = 1;
nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
return (nodes);
}
