#include<iostream>
#include<conio.h>
using namespace std;

int main(void)

{
	char a[8] ,n[8]= {'m', 'u', 'h', 'a', 'm', 'm', 'a', 'd'} ; 
	int i , j ;
	
	cout<<"Enter password: ";
	for( i = 0 ; i < 8 ; i++ ){
		
		cin>>a[i];
	}
	 ;
	for ( i = 0 ; i < 8 ; i++ ) {

	if ( a[i] == n[i] ) {
		cout<<"Access granted.\n";
	}
	else{
		cout<<"Access denied. Try again\n";
	}
	getch();
	}
}