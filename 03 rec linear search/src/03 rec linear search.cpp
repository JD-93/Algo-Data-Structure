//  RECURSIVE LINEAR SEARCH

#include <iostream>
using namespace std;

//bool rec_linear_search(int arr[], int key,int index);
bool rec_linear_search (int arr[], int key, int l , int r ) ;


int comparisons = 0 ;
const int SIZE = 10 ;

int main() {

	int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};

	int key ;
	cout<<"Enter no to be found : " ;
	cin>>key ;

//	if (rec_linear_search(arr,key,0))
	if (rec_linear_search(arr,key,0,9))
	{
		cout<<"Element found in array :)" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}
	else
	{
		cout<<"Element not found in array :(" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}



	return 0;
}
/*

bool rec_linear_search ( int arr[] , int key,int index )
{
	comparisons++ ;
	if (index == SIZE-1 )
		return false ;
	if (arr[index] == key  ) {
		return true ;
	}
	else {
		rec_linear_search(arr,key,++index) ;
	}
}
*/

bool rec_linear_search(int arr[], int key, int l, int r )
{
	comparisons++ ;
	if (l>r)
		return false ;
	if (arr[l] == key)
		return true ;
	if (arr[r] == key )
		return true ;
	rec_linear_search(arr,key,l+1,r-1) ;
}
