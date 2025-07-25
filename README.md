# binary-tree
Binary tree exercise for the 42 exam.

Implementa function that calculates size of binary tree - total numebers of nodes it contains.
Binary tree os a tree where all nodes have at most two chidren, left and right one. 
Prototype should be as follows;
int size_binary_tree(t_btree *root);

You have to use ft_btree.h file, which will only contain:
typedef struct s_btree
{
  int value;
  struct s_btree *left;
  struct s_btree *roght;
} t_btree;

If the root node is NULL, your function must return 0.
//
