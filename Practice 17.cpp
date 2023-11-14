#include <iostream>
#include <chrono>
#include <thread>
using namespace std;




int main (){
	
	
	for(int i = 100; i >= 1; i--){
		
		cout<<"\nJasper " <<i;
		this_thread::sleep_for(chrono::milliseconds(100));
	}	
	
	return 0;
}