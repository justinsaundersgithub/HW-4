#include <iostream>
#include <sstream>
#include <sstream>
#include <fstream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;


class Product{

         string UPC;
         string description;
public:

Product (string UPC = "123456789", string description = "Unknown"){
}

Product createTree(ifstream &file){
    BinarySearchTree<string> tree;
    //ifstream file;
    Product treeData;
	//file.open( fileName, std::ios::binary);
	while(!file.eof()){
		cout<<"File Opened"<<endl;
		string s1;
		getline(file, s1, ','); //uses , as splitter instead of white space
        string UPC = s1;
        //cout << UPC <<" ";
        string s2;
        tree.insert(UPC);
        cout<<UPC<<endl;
        getline(file, s2, ',');
        string description = s2;
        cout<<description<<endl;
        tree.insert(description);
        
    }
    
}

friend ostream& operator<<(ostream& os, Product item){
    os << "|" <<"item:"<<  item.UPC << "|";
    return os;
}

friend bool operator< (Product &p,Product &other){
    return p.UPC<other.UPC;
  
}
friend bool operator>(Product &p, Product &other){
    return p.UPC>other.UPC;
}

friend bool operator == (Product &p, Product &other){
    return p.UPC==other.UPC;
}

// bool fileOpen(ifstream &file){
//     if(file.is_open()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

         
};



