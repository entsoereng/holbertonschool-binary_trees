#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: the number of depth If tree is NULL must return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count_depth = 0;

if (!tree)
return (0);

while (tree->parent)
{
count_depth++;
tree = tree->parent;
}
return (count_depth);
}
