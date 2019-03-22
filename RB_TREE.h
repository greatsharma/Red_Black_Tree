#ifndef __RB_TREE__
#define __RB_TREE__

#include "Node.h"

// This is just for display purpose
enum show
{
  full_horizontal,
  preorder,
  inorder,
  postorder
};

class RBT
{
private:
  //tree props
  Node *root;
  Node *NIL;
  int _no_lv;
  int _no_in_nodes;
  int _height;

  //atomic modules
  Node *get_root_by_address() const;
  void left_rotate(Node *);
  void right_rotate(Node *);
  Node *successor(Node *) const;
  Node *find_node(int) const;

public:
  //constructor
  RBT();

  //getter modules
  string get_node_prop(int) const;
  string get_tree_prop();
  int height_tree(const Node *) const;
  void no_of_leaves(const Node *);
  void no_of_internal_nodes(const Node *);

  //fundamental modules
  void insert(int);
  void insert_fixup(Node *);
  void delete_node(int);
  void delete_fixup(Node *);

  //application module
  bool search(int) const;
  void show_tree(int) const;
  void show_full_horizontal(const Node *, int space = 0) const;
  void show_preorder(const Node *) const;
  void show_inorder(const Node *) const;
  void show_postorder(const Node *) const;
  void clear(Node *);

  //destructor
  ~RBT();
};

#endif
