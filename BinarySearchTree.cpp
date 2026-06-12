#include <iostream>
using namespace std;

//membuat class node
class Node
{
    // memebuat akses modifier serta mendeklarasi variable dan objedt node
public:
    string info;
    Node* leftChild;
    Node* rightChild;

    //membuat construktor untuk class node 
    Node(string i, Node* 1, Node* r){
        //memberi nilai parameter ke variable
        info = i;
        leftChild = 1;
        rightChild = r;
    }
};

//membuat class BinaryThree
class BinaryTree {

    //memberi akses modifier dan deklarasi object
public:
    Node* ROOT;

    //membauat constructor dan memeberi nilai kepada object root
    BinaryTree(){
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element){

        //memberi nilai untuk setiap object yang berada didalam prosedur insert
        Node* newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent
    }
}