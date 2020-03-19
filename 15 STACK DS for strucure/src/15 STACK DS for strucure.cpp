// STACK


#include <iostream>
using namespace std;
#include <iomanip>
//======================================================


typedef struct
{
	int roll_no ;
	int marks ;
}ELEMENT ;				//  typedef int to ELEMENT
								   //   b/c in future we can modify int to structure of any user defined data type
								//    LOOK to the future ironman :)

const int size = 5 ;
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
	cout<<"\nPOPed ELEMENT is  : " << endl  ;			// display ELEMENT
	cout<<endl ;
	cout<<"roll_no : " <<s.ele[s.top].roll_no <<endl;
	cout<<"marks  : " << s.ele[s.top].marks <<endl ;
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
//	s.ele[s.top] = 0 ;
	s.ele[s.top].roll_no = 0 ;
	s.ele[s.top].marks = 0 ;
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
	s.ele[s.top].marks = num.marks ;
	s.ele[s.top].roll_no = num.roll_no ;
}
//---------------------------------------------------------
void accept_ELEMENT(ELEMENT & item)
{
	cout<<"Enter ELEMENT : "<<endl  ;
	cout<<"roll number : " ;  					// accept ELEMENT type
	cin>>item.roll_no ;
	cout<<"marks : " ;
	cin>>item.marks ;
}
//----------------------------------------------------
void disply_stack(STACK &s)
{
	cout<<setw(10)<<"roll no" ;
	cout<<setw(10)<<"marks" <<endl;
	for (int i=s.top ; i>=0 ; i--)					// ----- modified to show values which are present only
	{
		cout<<setw(10)<<s.ele[i].roll_no ;
		cout<<setw(10)<<s.ele[i].marks <<endl ;
	}
}
//--------------------------------------------------------------
