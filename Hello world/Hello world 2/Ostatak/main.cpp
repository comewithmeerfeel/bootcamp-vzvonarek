#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n/n == 1 && n/1 == n && n%2==0){
        cout <<"nije prost" << endl;
    }
    else {
        cout <<"prost" << endl;
    }

    return 0;
}
