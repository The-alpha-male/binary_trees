#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
binary_tree_t **queue, *node;
size_t front = 0, back = 0, size = 1;

if (!tree || !func)
return;
queue = malloc(sizeof(*queue) * size);
if (!queue)
return;
queue[back] = (binary_tree_t *)tree;
while (size)
{
node = queue[front];
func(node->n);
if (node->left)
{
if (size == back + 1)
{
size <<= 1;
queue = realloc(queue, sizeof(*queue) * size);
if (!queue)
return;
}
queue[++back] = node->left;
}
if (node->right)
{
if (size == back + 1)
{
size <<= 1;
queue = realloc(queue, sizeof(*queue) * size);
if (!queue)
return;
}
queue[++back] = node->right;
}
front++;
size--;
}
free(queue);
}
