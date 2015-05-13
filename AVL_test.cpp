/*
 * AVL_test.cpp
 *
 *  Created on: May 4, 2015
 *      Author: bassam
 */
#include "AVL.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void print(Node<int>* node);
/******************************************************************************/
int main() {
	Node<int> root = Node<int>(121);
	AVL<int> avl = AVL<int>(&root);
	avl.insert(1);
	avl.insert(2);
	avl.insert(23);
	avl.insert(4);
	avl.deleteNode(23);
	avl.deleteNode(1);
	avl.insert(41);
	avl.insert(15);
	avl.insert(51);
	print(avl.getRoot());
	return 0;
}
/******************************************************************************/
void print(Node<int>* node){
	if(node) {
		print(node->leftSon);
		std::cout << "key = "<< node->key << "\n";
		print(node->rightSon);
	}
}
