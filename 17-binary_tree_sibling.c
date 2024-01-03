#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if node is NULL or no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *sibling;

if (!node || !node->parent)
return (NULL);
sibling = node->parent->left;
if (sibling && sibling != node)
return (sibling);
sibling = node->parent->right;
if (sibling && sibling != node)
return (sibling);
return (NULL);
}
