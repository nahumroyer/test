// Learning object oriented programming and sysC modeling with TLM
#include <iostream>
#include <stdio.h>
using namespace std;

class TestClass
{
    public:
        void quotePrint()
        {
            printf("Quoted words via printf\n");
        }
        void quoteCout()
        {
            cout << "Quoted words via cout" << endl;
        }
};

int main()
{
    TestClass tc;
    tc.quotePrint();
    tc.quoteCout();
    return 0;
}

