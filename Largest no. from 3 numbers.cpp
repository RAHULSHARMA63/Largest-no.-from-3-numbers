#include <iostream>
using namespace std;
int main() 
{    
    float n1, n2, n3;

    cout << "enter three numbers: \n ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "largest number: \n" << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "largest number: \n" << n2;

    if(n3 >= n1 && n3 >= n2)
        cout << "largest number: \n" << n3;

    return 0;
}
