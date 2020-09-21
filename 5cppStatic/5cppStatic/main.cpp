#include <iostream>

using namespace std;

class Test {
public:
    static int n1;
    static int n2;
};

int Test::n1=23,n2=34;  

int main() {
    int test = sizeof(Test);
    cout << test << endl;
    cout << Test::n2 << endl;
}

