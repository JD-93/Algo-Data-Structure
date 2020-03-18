// BUBBLE SORT


#include <iostream>
using namespace std;
#include <iomanip>

void bubble_sort ( int arr[] ) ;
void display ( int arr[] ) ;
void swap(int &a, int &b) ;

const int size = 10 ;
int comparisions = 0 ;

int main() {

	int arr[size] = {10,20,50,60,40,30,40,70,100,90} ;
//	int arr[size] = {10,10,40,30,50,60,70,80,90,100} ; 			//-- already sorted array

	bubble_sort(arr);
	display(arr) ;

	cout<<"\n\nno of comparisons are : "<<comparisions <<endl ;
	return 0;


	return 0;
}


void bubble_sort( int arr[] )
{
	for ( int i=0 ; i<size-1 ; i++){
		for (int j=0 ; j<size-1-i ; j++){
			if (arr[j] > arr[j+1] ){
				swap(arr[j],arr[j+1]) ;
			display(arr) ;
			}

		}
	}
}
void swap(int &a, int &b)
{
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
}
void display( int arr[] )
{
//	cout<<"\nHere is array: "<<endl ;
	cout<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
