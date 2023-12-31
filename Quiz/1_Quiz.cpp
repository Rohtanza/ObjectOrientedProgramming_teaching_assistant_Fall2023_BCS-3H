#include "stdio.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() 
{    
    double x = 400;
    double *p = &x; 
    cout << &p << endl;
    cout << *p << endl;
    cout << &x << endl;
    cout << p << endl;  
    cout << *(&p) << endl;
    cout << p + 3 << endl;
    cout << *&p << endl;
    cout << (*p == x) << endl;
    return 0;
}
