#include <iostream>
using namespace std;

    void mpv(int i) {
    cout << "Broj je " << i << endl;
    i++;
    if(i<20+1) {
    mpv(i);
  }
}



    int main() {

    int i = 0;
    mpv(i);

    return 0;
}
