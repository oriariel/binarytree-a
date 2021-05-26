#include "doctest.h"
#include "BinaryTree.hpp"

TEST_CASE("FIRST TEST"){
ariel::BinaryTree<int> tree;
CHECK_NOTHROW(tree.add_root(0));
CHECK_NOTHROW(tree.add_root(1));
CHECK_NOTHROW(tree.add_root(2));
CHECK_NOTHROW(tree.add_root(-3));
CHECK_NOTHROW(tree.add_root(10000));
CHECK_NOTHROW(tree.add_root(-5));

CHECK_THROWS(tree.add_right(102,30));
CHECK_THROWS(tree.add_right(14,50));
CHECK_THROWS(tree.add_left(10,4));
CHECK_THROWS(tree.add_left(12,13));
}
TEST_CASE("SECOND TEST"){
ariel::BinaryTree<int> second_tree;
CHECK_NOTHROW(second_tree.add_root(0));
CHECK_NOTHROW(second_tree.add_root(1));
CHECK_NOTHROW(second_tree.add_root(2));
CHECK_NOTHROW(second_tree.add_root(-3));
CHECK_NOTHROW(second_tree.add_root(10000));
CHECK_NOTHROW(second_tree.add_root(-5));

CHECK_THROWS(second_tree.add_right(7,8));
CHECK_THROWS(second_tree.add_right(9,55));
CHECK_NOTHROW(second_tree.add_right(2,30));
CHECK_THROWS(second_tree.add_left(10,4));
CHECK_THROWS(second_tree.add_left(12,13));
CHECK_NOTHROW(second_tree.add_left(0,13));

}
