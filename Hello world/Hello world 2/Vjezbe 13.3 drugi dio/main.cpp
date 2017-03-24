#include <iostream>

using namespace std;

void zamjena();
void boca ();
void zbrajanje ();
void password ();
void tablicaMnozenja();
void izbornik();
void kalkulator();
int main(){

int a=1;
int b=2;



return 0;

}

void kalkulator (){

float a,b;
    char o;

    cin >> a >> o >> b;

    if (o== '+'){
    cout << a+b << endl;
    }else if (o== '-'){
    cout << a-b << endl;
    }else if (o== '*'){
    cout << a*b << endl;
    }else {
    cout << a/b << endl;
    }

void izbornik(){
int izbor;
cout << " 1. Boca "<< endl;
cout << " 2. Zbrajanje " << endl;
cout << " 3. Password "<< endl;
cout << " 4. Tablica Mnozenja " << endl;

cin >> izbor;

if (izbor == 1){
 boca();
}
else if (izbor == 2){
zbrajanje() ;
}else if (izbor == 3){
password() ;
}else {
tablicaMnozenja();
}
}
void tablicaMnozenja(){
for (int i=1; i<= 10; i++)
  {
  for (int j=1; j<=10; j++){
  cout << i*j << "\t";
  }
  cout << endl;}
  }
void password (){
    int pass, tries = 0;

    while (tries<=2)
    {
    cout << "Enter password:";
    cin >> pass;
    if (pass == 8888){
    cout <<"Correct Password"<< endl;
    break;
    }
    else {
    tries +=1;
    cout <<"Wrong password - try again"<< endl;
    cout << "Reamining "<< 3 - tries << " entires"<<endl;
    }
    cout << endl;

}
}
void zbrajanje (){
int x=1;
    int suma = 0;
    while (x!=0)
    {
    cout << "Enter Number to add;";
    cin >> x;
    suma += x;
    cout << suma << endl;
    }
}
void boca (){
cout << 1 << " Bottles on the wall "<< endl;
for (int i =2; i<100;i++){
cout << i << " Bottles on the wall"<< endl;
}
}
