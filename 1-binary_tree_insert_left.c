#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
*                           If parent already has a left-child, the new node
*                           must take its place, and the old left-child must
*                           be set as the left-child of the new node.
*
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
*
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_child = NULL;

if (parent == NULL)
return (NULL);

left_child = malloc(sizeof(binary_tree_t));

if (left_child == NULL)
return (NULL);

left_child->parent = parent;
left_child->n = value;
left_child->left = NULL;
left_child->right = NULL;

if (parent->left != NULL)
{
left_child->left = parent->left;
left_child->left->parent = left_child;
}
parent->left = left_child;

return (left_child);
}
