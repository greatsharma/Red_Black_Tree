/*
	Name: RED BLACK TREE
	Copyright: greatsharma
	Author: Gaurav Sharma
	Date: 02-03-19 15:45
	Description: This project consists of creation of a red-black tree under c++03 standards with documentary
                comments, so anyone having idea with a minimum of C++03 is good to go. The project consists
                of atomic and fundamental operations with RBT. Beside this there are some application modules also.  
    Prerequisites: Vanilla C++03, Pointers, OOP and vanilla BST.
*/

/*
Properties of RBT ->
                    1. Every node is either red or black
                    2. Root is always black
                    3. All leaves(NIL) are always black
                    4. A red node should have all it's children black
                    5. All nodes have the same black height i.e., no of black nodes from a given node to 
                       all it's descendant is same. 
*/

#include "menu.h"

void make_tree()
{
    RBT tree;
    while (true)
    {
        menu(tree);
        cout << "\n\nEnter 0 to exit : ";
        std::cin >> data;
        if (data == 0)
            break;
    }

    return;
}

int main(void)
{
    do
    {
        make_tree();
        cout << "\n\nwant to make new tree(if not press 0)? ";
        std::cin >> data;
    } while (data != 0);

    return 0;
}
