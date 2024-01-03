#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if tree is perfect, 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t nodes, height;

if (!tree)
return (0);
nodes = binary_tree_nodes(tree);
height = binary_tree_height(tree);
return (nodes == (2 << height) -1);
}
