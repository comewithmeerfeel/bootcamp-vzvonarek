#include <iostream>
#include <time.h>

using namespace std;

void kockice();
int main()

{
    srand (time(NULL));
    int a,b,c,d;
    char x;

    while (a>0 && a<=6 && b>0 && b<=6 && c>0 && c<=6 && d>0 && d<=6)
     {
        cout << "Pristisni X za bacanje kocke " << endl;
        cin >> x;
        a = rand ()%6+1;
        cout << "Tvoj broj je " << endl;
        cout << a << endl;
        cout << "Red je na racunalu " << endl;
        cin >> x;
        b = rand()%6+1;
        cout << "Racunalo baca i dobiva broj " << endl;
        cout << b << endl;
        cout << "Druga runda " << endl;
        cin >> x;
        c = rand()%6+1;
        cout << "Tvoj broj je " << endl;
        cout << c << endl;
        cout << "Racunalo dobiva broj: " << endl;
        cin >> x;
        d = rand()%6+1;
        cout << d << endl;

        if (a+c > b+d){
            cout << "Cestitam pobijedio si " << endl;
        } else if (a+c < b+d) {
            cout << "Izgubio si " << endl;
        } else {
            cout << "Nerijeseno " << endl;
        }

}

return 0;
}
/*void kockice(){

    srand (time(NULL));
    int a,b,c,d;
    char x;

    while (a>0 && a<=6 && b>0 && b<=6)
     {
        cout << "Pristisni X za bacanje kocke " << endl;
        cin >> x;
        a = rand ()%6+1;
        cout << "Tvoj broj je " << endl;
        cout << a << endl;
        cout << "Red je na racunalu " << endl;
        cin >> x;
        b = rand()%6+1;
        cout << "Racunalo baca i dobiva broj " << endl;
        cout << b << endl;
        cout << "Druga runda " << endl;
        cin >> x;
        c = rand()%6+1;
        cout << "Tvoj broj je " << endl;
        cout << c << endl;
        cout << "Racunalo dobiva broj: " << endl;
        cin >> x;
        d = rand()%6+1;
        cout << d << endl;

        if (a+c > b+d){
            cout << "Cestitam pobijedio si " << endl;
        } else if (a+c < b+d) {
            cout << "Izgubio si " << endl;
        } else {
            cout << "Nerijeseno " << endl;
        }

}


}*/
