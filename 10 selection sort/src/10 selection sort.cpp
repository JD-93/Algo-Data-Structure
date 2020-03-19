// selection sort

#include <iostream>
using namespace std;
#include <iomanip>


void display(int arr[] ) ;
void selection_sort( int arr[] ) ;
void swap(int &a, int &b) ;

int iteration = 0 ;
int comparision = 0 ;
const int size = 10 ;
int main() {

	int arr[size] = {10,30,100,70,60,50,40,80,90,20} ;
	display(arr) ;

	selection_sort(arr) ;

	display(arr) ;

	cout<<endl ;
	cout<<"Iterations : "<<iteration <<endl ;
	cout<<"comparisons : "<<comparision<<endl ;

	return 0;
}

void selection_sort (int arr[] )
{
	for (int i=0 ; i<size-1 ; i++){
		iteration++ ;
		for (int j=i ; j<size ; j++){
			comparision++ ;
			if (arr[i] > arr[j] )
				swap(arr[i],arr[j]) ;
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
void display(int arr[] )
{
	cout<<"\nHere is array :"<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
