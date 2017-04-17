#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

int n1;
int n2;
int num1,num2,num3,num4;

cout << "\nDigite um valor:";
cin >> n1;
cout <<"\nDigite outro valor:";
cin >> n2;

num1=n1/n2;
num2=n1*n2;
num3=n1-n2;
num4=n1+n2;

cout <<"\nDivisao:" << num1;
cout <<"\nMultiplicacao:" << num2;
cout <<"\nSubtracao:" << num3;
cout <<"\nAdicao:" << num4;

system("pause");


 return 0;


}
