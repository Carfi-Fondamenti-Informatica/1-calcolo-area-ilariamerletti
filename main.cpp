#include <iostream>
using namespace std;
int main(){
float a= 5, b= 3, c= 4;
  float triangolo= 0, rettangolo= 0, quadrato= 0, trapezio=0;
  triangolo= (a*b)/2;
  rettangolo= (a*b);
  quadrato= (a*a);
  trapezio= (a+b)*c/2;
  cin >>a>>b>>c;
  cout<< (triangolo)<< endl;
  cout<<(rettangolo)<< endl;
  cout<<(quadrato)<<endl;
  cout<< (trapezio);
  return 0;
}
