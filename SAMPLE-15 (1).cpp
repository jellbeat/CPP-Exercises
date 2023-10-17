#include<iostream>
using namespace std;

int main (){
	
	char choice;
	int num1, num2;
	
	cout<<"_______________";
	cout<<"\n CALCULATOR";
	cout<<"\n _______________";
	cout<<"\n Enter 'A' for Addition";
	cout<<"\n Enter 'S' for Subtraction";
	cout<<"\n Enter 'D' for Division";
	cout<<"\n Enter 'M' for Multiplacation";
	cout<<"\n _______________";
	
	cout<< "\nEnter Operator: ";
	cin>>choice;
	
	cout<< "Enter First Number: ";
	cin>>num1;
	
	cout<< "Enter Second Number: ";
	cin>>num2;
		
   switch(choice){
   
   case 'M':
      cout<<"RESULT IS: "<<num1*num2;
  break;
	
   case 'D':
	 cout<<"RESULT IS: "<<num1/num2;
  break;
  
  case 'A':
  cout<<"RESULT IS: "<<num1+num2;
  break;
 
 case 'S':
  cout<<"RESULT IS: "<<num1-num2;
  break; 
  
  default:
  	cout<<"INVALID OPERATOR!";


}
return 0;
}