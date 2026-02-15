/*
Class + Object + Array + Array Traversing + Searching

Suppose we have an organization that stores the following
information about its employees:

- Name
- Date of Birth
- Department

(a) Create a class for the above information.
(b) Construct 5 objects (e.g., Maria, David, John, etc.).
(c) Write an algorithm to find the employee whose name 
    contains more than one 'a'.
*/

#include <bits/stdc++.h>
using namespace std;

class Org{
    public:
    string name;
    int dob;
    string deptt;
    
    Org(string name1,int dob1,string deptt1){
        name=name1;
        dob=dob1;
        deptt=deptt1;
    }
    
    int countA(){
        int count=0;
        for(int i=0;i<name.length();i++){
            if(name[i]=='a' || name[i]=='A'){
                count++;
            }
        }
        return count;
    }
};

int main() {
    // Org* obj1= new Org("karan",2001,"Cse"); ways to create obj
    // Org obj1("karan", 2001, "Cse");
    
    Org arr[5]={
        Org("Maria",2001,"CSE"),
        Org("David",2000,"HR"),
        Org("John",1999,"IT"),
        Org("Ananya",2002,"CSE"),
        Org("Aakash",1998,"Finance")
    };
    //Searching for employee
    for(int i=0;i<5;i++){
        if(arr[i].countA() > 1){
            cout<<"Employee Found"<<endl;
            cout<<"Name = "<<arr[i].name<<endl;
            cout<<"Date of Birth = "<<arr[i].dob<<endl;
            cout<<"Department = "<<arr[i].deptt<<endl;
        }
    }
    
    
    return 0;
}