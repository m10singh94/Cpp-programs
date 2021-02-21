// to print values of datatypes
#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int a;
    long long l;
    char ch;
    float f;
    double d;
    cin>>a>>l>>ch>>f>>d;
    cout<< a <<"\n"<< l << endl << ch << endl <<fixed<< f <<endl<<fixed<< d;
    return 0;
}
