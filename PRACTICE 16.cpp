#include<iostream>
using namespace std;

int main() {
	
	int choice;
	int num1, num2;
	char again;
	
	
	do{
	
	
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
	
	 
	 	switch (choice) {
			case 1:
				cout<<"The Result is: "<<num1 + num2;
			break;
				
				case 2:
				cout<<"The Result is: "<<num1 - num2;
			break;
					case 3:
				cout<<"The Result is: "<<num1 / num2;
			break;
						case 4:
				cout<<"The Result is: "<<num1 * num2;
			break;
			
			default: 
			cout<<"Invalid Operator!";
		}
	  
	  cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	  cin>>again;
	  system("cls");
	  
}
	while(again == 'y' || again == 'Y');
	 
	
	
		return 0;
}
	

	
		
	
		
	
