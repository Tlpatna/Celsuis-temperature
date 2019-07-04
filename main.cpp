#include <iostream>
using namespace std;
void main(){
double c,f;
cout<<"Enter Celsuis temperature :";
cin>>c;
f = (1.8 * c) +32;
	cout<<"Fahrenheit ="<<f<<endl;
	cout<<"Now Weather in Thailand is " << (f >= 70 ? "Hot":"Cool")<<endl ;
}