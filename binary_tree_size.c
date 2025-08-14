/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:07:15 by imutavdz          #+#    #+#             */
/*   Updated: 2025/08/01 19:13:06 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Implement basic node struct/class and traversal routines.

Practice injections of nodes (BST insert/delete) 
and handling edge cases (empty tree, single node).

Advance to specialized problems (height, width, mirror, splitting, perimeter).*/

#include "binary_tree.h"
#include <stdlib.h>

int	h_tree(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = h_tree(root->left);
	right = h_tree(root->right);
	if (left < right)
		return (left + 1);
	else
		return (right + 1);
}

int	size_binary_tree(t_btree *root)
{
	if (!root)
		return (0);
	return (1
		+ size_binary_tree(root->left)
		+ size_binary_tree(root->right));
}

void	free_tree(t_btree *root)
{
	if (!root)
		return ;
	free_tree(root->left);
	free_tree(root->right);
	free(root);
}

t_btree	*new_node(int val)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	if (!node)
		return (NULL);
	node->value = val;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
