#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
binary_tree_t **queue, *node;
size_t front = 0, back = 0, size = 1;
int flag = 0;

if (!tree)
return (0);
queue = malloc(sizeof(*queue) * size);
if (!queue)
return (0);

queue[back] = (binary_tree_t *)tree;
while (size)
{
node = queue[front];
if (flag && (node->left || node->right))
{
free(queue);
return (0);
}
if (node->left)
{
if (size == back + 1)
{
size <<= 1;
queue = realloc(queue, sizeof(*queue) * size);
if (!queue)
return (0);
}
queue[++back] = node->left;
}
else
flag = 1;
if (node->right)
{
if (size == back + 1)
{
size <<= 1;
queue = realloc(queue, sizeof(*queue) * size);
if (!queue)
return (0);
}
queue[++back] = node->right;
}
else
flag = 1;
front++;
size--;
}
free(queue);
return (1);
}
