#include <iostream>
using namespace std;
int main(){
float a= 5, b= 3, c= 4;
  float triangolo= 0, rettangolo= 0, quadrato= 0, trapezio=0;
  triangolo= (a*b)/2;
  rettangolo= (a*b);
  quadrato= (a*a);
  trapezio= (a+b)*c/2;
  cout<< "inserire base triangolo";
  cin >> a;
  cout << "inserire altezza triangolo";
  cin >> b;
  cout << "area del triangolo = ";
  cout << (triangolo)<< endl;
  cout<< "inserire base del rettangolo";
  cin >> a;
  cout << "inserire altezza del rettangolo";
  cin>> b;
  cout << "area del rettangolo = ";
  cout<< (rettangolo)<< endl;
  cout << "inserire lato quadrato";
  cin >> a;
  cout << "area quadrato = ";
  cout << (quadrato)<< endl;
  cout << "inserire base maggiore";
  cin >> a;
  cout << "inserire base minore" ;
  cin >> b;
  cout << "inserire altezza";
  cin >> c;
  cout << "area del trapezio = ";
  cout << (trapezio);
  return 0;
}
