#ifndef __ORDERSTATICTREE__
#define __ORDERSTATICTREE__
#include <rbtree.h>

static void left_rotate_hook(struct rbtree_node *n);
static void right_rotate_hook(struct rbtree_node *n);

class os_tree
{
private:
	rbtree *ostree;

public:
	os_tree();
	~os_tree();
	rbtree* get_the_os_tree(void);
	struct rbtree_node* os_select(struct the_tree *T, struct rbtree_node *s);
	unsigned int os_rank(struct the_tree *T, struct rbtree_node *s);
};


#endif

