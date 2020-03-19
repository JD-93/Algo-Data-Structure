// STACK


#include <iostream>
using namespace std;
#include <iomanip>
//======================================================

const int size = 5 ;

typedef int ELEMENT ;				//  typedef int to ELEMENT
								   //   b/c in future we can modify int to structure of any user defined data type
								  //    LOOK to the future ironman :)
typedef struct
{							  // 	THIS IS ACTUAL DABBA people call it STACK
	ELEMENT	ele[size] ;
	int top ;				// 		STACK contain array of ELEMENT of size anf one index variable call top
}STACK;
//========================================================
typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT}MENUOPERATIONS;
int menulist()
{
	cout<<"\n\nEnter choice"<<endl ;
	cout<<"0. EIXT " <<endl ;
	cout<<"1. PUSHELEMENT " <<endl ;
	cout<<"2. POPELEMENT " <<endl ;
	cout<<"3. PEEKELEMENT " <<endl ;
	cout<<"choice is   : " ;
	MENUOPERATIONS choice ;
	scanf("%d",&choice) ;
	return choice ;
}
//=====================================================
void init_stack (STACK &s) ;
void pushelement(STACK &s , ELEMENT num  ) ;
void popelement(STACK &s) ;
void peekelement(STACK &s) ;

bool is_empti(STACK &s) ;
bool is_full(STACK &s) ;
void accept_ELEMENT(ELEMENT & item) ;
void disply_stack(STACK &s) ;
//======================================================
int main() {

	STACK s ;				// stack is created for ELEMENT which is int
	init_stack(s) ;				// stack is initialized
	int choice ;

	while ( (choice = menulist()) != EXIT )
	{
		switch (choice) {

		case EXIT :
			break;

		case PUSHELEMENT :
			if (is_full(s))							// check if stack is already full
			{											// if full show error message
				cout<<"\nSTACK is already full  "
						"---- kuth thrvaycha ELEMENT"<<endl ;
			}
			else										// if not full accept ELEMENT and add
			{
			/*	cout<<"Enter element to enter : " ;
				ELEMENT num ;							// type is ELEMENT
				cin>>num ;								// accept
			*/
				ELEMENT item ;
				accept_ELEMENT(item) ;

				pushelement(s ,item ) ;					// PUSH mona PUSH
				disply_stack(s) ;
			}
			break ;

		case POPELEMENT :
			if ( is_empti(s) )					// check if STACK is already empty
			{										// if empty show error message
				cout<<"\nSTACK is already empty "
						"--- kuthun kadhyacha ELEMENT"<<endl ;
			}
			else										// if not empty show element and POP
			{
				peekelement(s) ;						//	display ELEMENT
				popelement(s) ;								// POP ELEMENT
				disply_stack(s) ;
			}
			break ;

		case PEEKELEMENT :
			if (is_empti(s) ) 							// check if STACK is empty or not
			{											// if empty show error message
				cout<<"\nSTACK is already empty"
						"--- kasa dakhwaycha ELEMENT" <<endl ;
			}
			else
			{												// if not empty show ELEMENT
				peekelement(s) ;
			}
			break ;

		default:
			cout<<"\nEnter valid choice"<<endl ;		// YEdA user
			break;
		}
	}

	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================="<<endl ;
	return 0;

}
//===============================================================
		// ALL functions are written here


void peekelement(STACK &s)
{
	cout<<"\nPOPed value is  : "<<s.ele[s.top] << endl  ;			// display ELEMENT
	cout<<endl ;
}
//------------------------------------------------------------
bool is_empti(STACK &s)
{
	if (s.top == -1 )
		return true ;
	else
		return false ;
}
//-------------------------------------------------------------
void popelement(STACK &s)
{
	s.ele[s.top] = 0 ;
	s.top-- ;
}
//-------------------------------------------------------------
bool is_full(STACK &s)
{
	if (s.top == size-1 )
		return true ;
	else
		return false ;
}
//----------------------------------------------------------------
void init_stack (STACK &s )
{
	cout<<"STACK is initialized"<<endl ;
	s.top = -1 ;
}
//-------------------------------------------------------------
void pushelement(STACK & s , ELEMENT num  )
{
	s.top++ ;
	s.ele[s.top] = num ;
}
//---------------------------------------------------------
void accept_ELEMENT(ELEMENT & item)
{
	cout<<"Enter element to enter : " ;
	cin>>item ;										// accept ELEMENT type
}
//----------------------------------------------------
void disply_stack(STACK &s)
{
	for (int i=size-1 ; i>=0 ; i--)
		cout<<setw(3)<<s.ele[i]<<endl ;
}
//--------------------------------------------------------------
