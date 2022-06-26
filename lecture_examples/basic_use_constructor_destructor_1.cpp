#include <iostream>
using namespace std;


class Node{
   public:
      Node(int value){
         numVal = value;
      }
      
      ~Node(){
          cout << numVal << endl;
      }
      
      int numVal;
    
};

int main(){
    
   Node* node1 = new Node(1);
   Node* node2 = new Node(4);
   Node* node3 = new Node(5);
   Node* node4 = new Node(7);
   
   delete node1;
   delete node2;
   delete node3;
   delete node4;
   
   return 0;
}
