#include "Product.h"
#include "BinarySearchTree.h"
#include <fstream>
#include <iostream>

using namespace std;

// bool convertStringToInt(string input) {
// 	std::string::size_type sz;   // alias of size_t
//   	if(std::stoi (input,&sz))
// 	  	return true;
// 	else{
// 		return false;
// 	}
// }

int main(){
	BinarySearchTree<Product> tree;
	Product initialItem;
	ifstream file;
	file.open("test.txt", std::ios::binary);
	
	
	
	 if(file.is_open()){
		Product actualItem = initialItem.createTree(file);
		tree.insert(actualItem);
		cout<<"test"<<endl;

		cout<<"PREORDER: ";
		tree.printPreOrder();
		cout<<endl;
		cout<<"INORDER: ";
		tree.printInOrder();
		cout<<endl;
		cout<<"POSTORDER: ";
		tree.printPostOrder();
		cout<<endl;
	}
	


return 0;


}

	
	
	// int x=10,y=4,t=23, k=7, m=1,z=29;
	// int e = -1;
	// tree.insert(x);
	// tree.insert(y);
	// tree.insert(t);
	// tree.insert(k);
	// tree.insert(m);
	// cout<<"Search re/media/sf_CS_300/hw4/project/Product.hsult 23 = "<<tree.search(t)<<endl;
	// cout<<"Tree Traversals:"<<endl;
	// tree.printInOrder();
	// cout<<"PrintInOrder"<<endl;
	// tree.printPreOrder();
	// cout<<"PrintPreOrder"<<endl;
	// tree.printPostOrder();
	// cout<<"PrintPostOrder"<<endl;
	// cout<<"Max:"<<tree.findMax(e)<<endl;
	// cout<<"Min:"<<tree.findMin(e)<<endl;
	// cout<<"Height:"<<tree.height()<<endl;
	// tree.deletenode(x);
	// cout<<endl;
	// cout<<"Search result(1/0):"<<tree.search(z);
	// cout<<"Searching...."<<endl;
	// cout<<tree.searchNode(e, z);
	// cout<<"\n\n";


	
    // string s = "453";
    // int y = atoi(s.c_str());
    // int y = stoi(s); // another method



	//suggest string as well for comparison
	//short quiz on binary heap on Wednesday

	//string input = "10,100,4,7";



