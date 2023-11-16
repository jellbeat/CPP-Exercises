#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main (){
	
		
		string myname;
		cout<<"Enter Your Name: ";
		getline(cin, myname);
		system("cls");
		cout<<"Your name in vertical order is\n";
		
		int size = myname.size();
		
		
		
	
	
		
		for(int x=0;  x < size; x++){
			
			cout<<myname[x] <<"\n";
			
				this_thread::sleep_for(chrono::milliseconds(250));
		}

		 

		 
		
		
		
	return 0;	
	
}