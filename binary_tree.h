/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_tree.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:07:34 by imutavdz          #+#    #+#             */
/*   Updated: 2025/07/30 17:48:52 by imutavdz         ###   ########.fr       */
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

#endif
