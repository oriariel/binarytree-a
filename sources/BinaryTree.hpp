#include <iostream>
#include <string>

using namespace std;

namespace ariel{

	template<typename T>
	class BinaryTree {
	
		class Node{
		friend class BinaryTree;
		T data;
		Node *left;
		Node *right;
		Node *parent;
		};
		
	public:
		BinaryTree &add_root(const T &root){
			return *this;
		}
		BinaryTree &add_left(const T &parent,const T &l){
			return *this;
		}
		BinaryTree &add_right(const T &parent,const T &r){
			return *this;
		}
		friend ostream &operator<<(ostream &out, const BinaryTree<T> &binaryTree){
		return out;
		}
		
		class preOrder{
		Node *currentNode;
		public:
		preOrder(Node *ptr=nullptr): currentNode(ptr){}
		
		T &operator*()const{
		return currentNode->data;
		}
		preOrder &operator++(){
			return *this;
		}
		T *operator->() const{
			return &(currentNode->data);
		}
		preOrder operator++(int val){
			return *this;
		}
		bool operator!=(const preOrder &other)const{
			return currentNode != other.currentNode;
			}
		};
		
		preOrder begin_preorder(){
			return preOrder{};
		}
		preOrder end_preorder(){
			return preOrder{};
		}
		
		class inOrder{
		Node *currentNode;
		public:
		inOrder(Node *ptr=nullptr): currentNode(ptr){}
		T &operator*()const{
		return currentNode->data;
		}
		T *operator->() const{
			return &(currentNode->data);
		}
		inOrder operator++(int val){
			return *this;
		}
		inOrder &operator++(){
			return *this;
		}
		bool operator!=(const inOrder &other)const{
			return currentNode != other.currentNode;
		}
		};
		
		inOrder begin_inorder(){
			return inOrder{};
		}
		inOrder end_inorder(){
			return inOrder{};
		}
		
		class postOrder{
		Node *currentNode;
		public:
		postOrder(Node *ptr=nullptr): currentNode(ptr){}
		T &operator*()const{
		return currentNode->data;
		}
		T *operator->() const{
			return &(currentNode->data);
		}
		postOrder operator++(int val){
			return *this;
		}
		postOrder &operator++(){
			return *this;
		}
		bool operator!=(const postOrder &other)const{
			return currentNode != other.currentNode;
		}
		};
		
		postOrder begin_postorder(){
			return postOrder{};
		}
		postOrder end_postorder(){
			return postOrder{};
		}
		inOrder begin(){
			return begin_inorder();
		};
		inOrder end(){
			return end_inorder();
		};
}; //close class Binarytree
}
		
		
		
