#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, or NULL if node is NULL or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *uncle;

if (!node || !node->parent || !node->parent->parent)
return (NULL);
uncle = node->parent->parent->left;
if (uncle && uncle != node->parent)
return (uncle);
uncle = node->parent->parent->right;
if (uncle && uncle != node->parent)
return (uncle);
return (NULL);
}
