#include<iostream>
using namespace std;

int main() {
	
	
	int grade;
	
	cout<<"Enter Your Grade: ";
	cin>>grade;
	
	if (grade == 100){
		
		cout<<"Class S\n";
	}
	else if (grade > 90){
		
		cout<<"Class A\n";
	}
	else if (grade > 80){
		
		cout<<"Class B\n";
	}
	else if (grade > 70){
		
		cout<<"Class C\n";
	}
	else if (grade > 60){
		
		cout<<"Class D\n ";
		
	}else{
		
		cout<<"Class E\n ";
	}
	
	
	return 0;	
}

	
		
	
		
	
