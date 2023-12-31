#include "stdio.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int value = 50;
    int *ptr = &value;
    int &ref = *ptr;
    cout<<endl<<&ref;
    cout<<endl<<ptr;
    cout<<endl<<value;
    cout<<endl<<&ptr;
    cout<<endl<<*ptr;
    cout<<endl<<ptr+2;
    cout<<endl<<ptr-1;
    cout<<endl<<ref;
    return 0;
}
