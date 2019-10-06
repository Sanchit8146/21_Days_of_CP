#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,x=4;
	double b,d=4.0;
	string c="",e="Hacktoberfest ";
	cin>>a;
	cin>>b;
	cin.ignore();
	getline(cin,c);
	cout<<a+x<<endl;
	cout<<fixed;
	cout<<setprecision(1)<<b+d<<endl;
	e=e+c;
	cout<<e<<endl;
	return 0;
}
