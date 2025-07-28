// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class Student {
public:
    int id;
    string name;
    int mark1;
    int mark2;
    int mark3;

  
  int total(){
      return  mark1+mark2+mark3;
  }
  int average(){
      return (mark1+mark2+mark3)/3;
  }
  
  
};

int main() {
    
    Student st[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " Name : ";
        cin >> st[i].name;
        
        cout << "ENTER THE MARKS : \n\n";

        cout << "subject 1: ";
        cin >> st[i].mark1;

        cout << "subject 2: ";
        cin >> st[i].mark2;

        cout << "subject 3: ";
        cin >> st[i].mark3;
    }
    
    
    for (int i = 0; i < 3; i++) {
        cout << "Name : \t" << " Mark 1\t" << " Mark 2 \t" << " Mark 3 \t" << "Total \t"<< "Average \t" << endl;
    }
}