#include<iostream>
using namespace std;

int main() {
	
	char choice;
	int num1, num2;
	
	cout<<"\n***************************************************";
	cout<<"\n*                                                 *";
	cout<<"\n*                                                 *";
	cout<<"\n*                 CALCULATOR                      *";
	cout<<"\n***************************************************";
	cout<<"\n***************************************************";
	cout<<"\n*           ENTER 1 FOR ADDITION                  *";
	cout<<"\n*           ENTER 2 FOR SUBTRACTION               *";
	cout<<"\n*           ENTER 3 FOR DIVISION                  *";
	cout<<"\n*           ENTER 4 FOR MULTIPLICATION            *";
	cout<<"\n***************************************************";
	
	cout<<"\n SELECT AN OPERATOR: ";
	cin>>choice;
	
	cout<<"\nEnter a Number: ";
	cin>>num1;
	
	cout<<"\n Enter a Number: ";
	cin>>num2;
	
		if (choice == '1'){
			
			cout<<"\n \n RESULT IS: "<<num1 + num2;
		}
		else if (choice == '2' ) {
	
			cout<<"\n \n RESULT IS: "<<num1 - num2;
		}
		else if (choice == '3') {
			
			cout<<"\n \n RESULT IS: "<<num1 / num2;
		}
	
		
			else if (choice == '4' ) {
	
		cout<<"\n \n RESULT IS: "<<num1 * num2;
			
		}
		
	
		
	
	
	
	
	
	
	return 0;
}
	

	
		
	
		
	
