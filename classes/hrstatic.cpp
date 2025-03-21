#include <iostream>
#include <string>
using namespace std;

//In C++ class there are two types of variables
//Non-static variables (instance variables)
//static variables (Shared variable)

namespace HR{
    class Person{
        public  :
                //shared variable between number of objects created at runtime
                static int count;
                int id;
                string firstName;
                string lastName;
                int age;

                Person(){
                    cout<<"Constructor is called"<<endl;
                    id=29;
                    firstName="sejal";
                    lastName="kulkarni";
                    age=23;
                    count++;
                }

                Person(int i, string fName, string lName,int ag){
                    cout<<" Parameterized Constructor is called"<<endl;
                    id=i;
                    firstName=fName;
                    lastName=lName;
                    age=ag;
                    count++;
                }
    
                ~Person(){
                    cout<<"Destructor is called"<<endl;
                    count--;

                }
            };
}

using namespace HR;
int Person::count=0;

int main(){

    Person p1;
    Person p2(45,"Sarthak", "Kadam",22);
    Person p3(65, "Sanika", "Kulkarni",21);
    cout<<endl;
    for(int i=0;i<=3;i++){
        Person p4(19, "Nikita", "Bansolde",21);
        Person p5(6, "Manish", "Nene",21);
        Person p7(79, "Rachita", "Gore",21);
        cout<<endl;
        cout<<" Number of objects in Iteration "<< i<<"--> "<<Person::count<<endl;
    }
    cout<<"Number of objects  "<<Person::count<<endl;
}