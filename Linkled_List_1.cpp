#include<iostream>
using namespace std;
#include "Node.cpp"

int main(){
	
	//statically allocated
	Node n1(1);
	Node *head=&n1;
	Node n2(2);
	n1.next= &n2;
	
	cout<<head->data<<endl;
	
	//dynamically
	Node *n3= new Node(10);
	Node *head=n3
	Node *n4= new Node(20);
	n3->next=n4;
	
	cout<<n3->data<<endl;
	
	
}

//code for Node.cpp
class Node{
	public :
		int data ;
		Node *next;
		Node(int data){
			this->data= data ;
			next=NULL;
		}
};
