#include <iostream>
using namespace std;

int main() {
	
//=========== if-else =============
//	int a;
//	a = cin.get();
//	cout<<a<<endl;
//	
//	
//---------------------------------
//	int b = 2;
//	int c = b+1;
//	
//	if((b=3)==c) {
//		cout<<b<<endl;		//this one will print
//	}
//	else {
//		cout<<b+1<<endl;
//	}
//	
//	
//---------------------------------
//	int d = 24;
//	
//	if (d>20)
//		cout<<"Love"<<endl;
//	else if (d == 24)
//		cout<<"Lovely"<<endl;
//	else
//		cout<<"Babbar"<<endl;
//	cout<<d<<endl;
//	
//	
//---------------HomeWork---------------
//	
	char ch;
	cin>>ch;
	
	if(ch>='a' && ch<='z')
		cout<<"Lower Case"<<endl;
	else if(ch>='A' && ch<='Z')
		cout<<"Upper Case"<<endl;
	else if(ch>='0' && ch<='9')
		cout<<"Numeric"<<endl;
	else
		cout<<"Special Char"<<endl;


//============== While Loop ===============

//---------------HomeWork---------------

//------Q1----------
//int n, i=2, sum=0;
//cin>>n;
//
//while(i<=n){
//	sum += i;
//	i = i + 2;
//}
//cout<<"Sum of even no.: "<<sum<<endl;

//--------Q2---------
// F to C
//int f, i=1;
//float c=0;
//cin>>f;
//
//while(i<=f){
//	c += (-17.222);
//	i++;
//}
//cout<<c<<endl;


//int n, i=2;
//cin>>n;
//
//while(i<n){
//	if(n%i==0)
//		cout<<"Not Prime for "<<i<<endl;
//	else
//		cout<<"Prime for "<<i<<endl;
//	i++;
//}

//=========== Pattern ==============
int i=1;

//----P1
//while(i<=5){
//	
//	int j = 1;
//	while(j<=3){
//		cout<<"$";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//-----P2
//while(i<=5){
//	int j=1;
//	while(j<=3){
//		cout<<j;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//------P3
while(i<=5){
	int j=1;
	while(j<=3){
		cout<<i;
		j++;
	}
	cout<<endl;
	i++;
}




}