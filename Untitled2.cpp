#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	float a;
	float out;
	float b;
	float m;
	float s;
	cout<<"Bitte tragen Sie ihr Einkommen ein : "<<endl;
	cin>>a;
	
	b = ( 10 * a ) / 100;
	m = ( 5  *  a ) / 100;
	s = b + m;
	out = a - s;
	
	cout<<"Dein Einkommen ist : "<<a<<endl;
	cout<<"Brutto ist : "<<out;
}
