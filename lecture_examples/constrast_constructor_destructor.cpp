#include<iostream>
using namespace std;

class Employee {
    public:
      //Employee();
      Employee(){
          cout << "Defaul Constructor. Invoked when a new object is created." << endl;
      }
      
      ~Employee(){
          cout << "Destructor. It deallocates the memory assigned when the object was created." << endl;
      }
};

int main(){
    
    cout << "The constructor is called when the object is created." << endl;
    
    Employee* e = new Employee();
    
    cout << endl;
    
    cout << "The destructor is called when the object is destroyed." << endl;
    
    delete e;
    
    return 0;
}
