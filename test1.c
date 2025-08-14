/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imutavdz <imutavdz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:11:37 by imutavdz          #+#    #+#             */
/*   Updated: 2025/08/07 22:17:26 by imutavdz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	main(void)
{
	Node *root = NULL;
	int vals[];

	vals = {8, 3, 10, 1, 6, 14, 4, 7, 13};
	for (size_t i = 0; i < sizeof(vals)/sizeof(vals[0]); ++i)
		root = bst_insert(root, vals[i]);
		printf("size=%zu\n", tree_size(root));
		printf("height=%d\n", tree_height(root));             // 3
    printf("depth(7)=%d\n", tree_depth_value(root, 7));   // 3
    printf("balanced? %s\n", tree_is_balanced(root) ? "yes" : "no");
    printf("diameter=%d\n", tree_diameter(root));

    printf("inorder: "); inorder(root); puts("");
    tree_mirror(root);
    printf("inorder after mirror: "); inorder(root); puts("");

    tree_free(root);
    return 0;
}
