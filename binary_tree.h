/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:07:34 by imutavdz          #+#    #+#             */
/*   Updated: 2025/08/01 19:07:45 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BINARY_TREE_H

# define BINARY_TREE_H

typedef struct s_btree
{
	int				value;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;


t_btree	*new_node(int val);
int	size_binary_tree(t_btree *root);
void	free_tree(t_btree *root);
int h_tree(t_btree *root);

#endif
