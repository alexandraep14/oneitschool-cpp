#include <iostream>

using namespace std;

void increase(int n) { // we pass a copy of the value
    n++;
}

// TODO or simply, n is called a OUTPUT PARAMETER
void increaseRef(int &n) { // we pass a reference of the value, meaning that n (from here) and b (from main) are the same variable
    n++;
}


//int main() {
//    int a, b;
//    a = b = 2;
//
//    increase(a); // Alt+Enter
//    cout << "a = " << a << endl;
//    increaseRef(b); // the editor fills in  &: as a label to tell us that the parameter is a reference
//    cout << "b = " << b << endl;
//
//    return 0;
//}


