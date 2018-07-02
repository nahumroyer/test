// Learning object oriented programming and sysC modeling with TLM
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class TestClass
{
    public:
        TestClass(string z)              // This is the constructor
        {
            setName(z);
        }

        void quotePrint()
        {
            printf("Quoted words via printf\n");
        }

        void quoteCout()
        {
            cout << "Quoted words via cout" << endl;
        }

        void setName(string x)    // Setting name 
        {
            name = x;
        }

        string getName()         // Getting Name
        {
            return name;
        }


    private:
        string name;

};

int main()
{
    TestClass tc("Constructing Crazy Constructors");  // Adding a parameter to the constructor
    tc.quotePrint();                                  // Calling the TestClass quotePrint funct
    tc.quoteCout();                                   // Calling the TestClass quoteCout funct
    cout << tc.getName() << endl;                     // Testing constructor call
    tc.setName("Setting The Name");                   // setting new name
    cout << tc.getName() << endl;                     // printing new name
    TestClass tc2("tc2 Constructor");
    cout << tc2.getName() << endl;
    return 0;
}

