#include <iostream>

using namespace std;
int addtwonumbers(int a, int b)
{

    return(a + b);

}


int main()
{
    int a, b,z;
    cout <<"Enter your value for a:" ;
    cin >> a;
    cout << "Enter value for b: " ;
    cin >> b;

    z = addtwonumbers(a, b);

    cout <<"Your  final answer is: " <<z ;


    return 0;
}

