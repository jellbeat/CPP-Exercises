#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>
using namespace std;


	void loading(){
		for(int x=0; x < 10; x++){
	    
	   		cout<<".";
 			this_thread::sleep_for(chrono::milliseconds(300));
	    }
	}
	void clear(){
		system("cls");
	}
	
	void scorer(int score) {
   		cout << "\nQuiz Completed!\n";
    	cout << "Your Score: " << score << " out of 5\n";
}




int main (){
	system("color 4");
	int score;
	int s1,s2,s3,choice;
	char again;
	char q1,q2,q3;
	string expectedUsername;
	string expectedPassword;
	string username,password;

	
	
		
		
		cout<<"\nCreate username: ";
		cin>>expectedUsername;
		
			cout<<"\n\nCreate Password: ";
			cin>>expectedPassword;
		
			clear();
		
				cout<<"\nCreating account please wait";
			   	   loading();
			    	clear();
							
				 cout<<"\nAccount Created";
					loading();
	            	clear();
		
	
	
	
	
	do{
					
			cout<< "\nEnter Your Username: ";
				cin>>username;
		
				cout<<"\n\nEnter Your Password: ";
					cin>>password;
					
					clear();
					
						cout<<"\n\nVerifying please wait";
	  		  			loading();
			            clear();
			
		
		
		if(expectedUsername == username && expectedPassword == password ){
		
			cout<< "\nLogin successful Welcome! " <<username;
			cout<<"\n__________________________________";
			
					cout<<"\n\nLogging in";
	  		  				loading();
							clear();
			
				cout<<"\n\nRedirecting to your Quiz";
	  		  				loading();
			                clear();
			break;
		
			
		}else {
			
				cout<< "\nLogin failed. Incorrect password or username. Try again "<<endl;
				
			}
			
	}while (true);

	
	
			
			
			 
	 
	 do{
	 
	 
	  
	  
	  
	   
	    cout<<"\n _______________________________________ ";
		cout<<"\n|                                       |";
		cout<<"\n|      Choose your Desired Quiz         |";
		cout<<"\n|_______________________________________|";
		cout<<"\n|    Enter 1 Mobile Legends             |";
		cout<<"\n|    Enter 2 League of Legends          |";
		cout<<"\n|    Enter 3 Call of Duty Mobile        |";
		cout<<"\n|                                       |";
		cout<<"\n|_______________________________________|";
		
		cout<<"\n\nEnter your choice:";
		cin>>choice;
		
		clear();
		
	
		cout<<"\nPlease Wait";
	    	loading();
		    clear();
		
	    
	    	cout<<"\nAnalyzing";
	    	loading();
            clear();
	    
	    switch (choice) {
	    
	    	case 1:
	    		cout<<"\nWELCOME TO MOBILE LEGENDS QUIZ";
	    	
	    		cout<<"\n______________________________";
	    		
	    		 	cout<<"\nPREPARING YOUR QUIZ";
	    		loading();
				clear();
	    		
	    		cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|1.Who is Zilong Little siter?              |";
				cout<<"\n|A.Lesley                                   |";
				cout<<"\n|B.Chang e                                  |";
				cout<<"\n|C.Balmond                                  |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q1 == 'B' || q1== 'b') {
			 score++;
			}
			clear();  
			
			
			
				cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|2.What hero is the highest in durability?  |";
				cout<<"\n|A.Gatotcaka                                |";
				cout<<"\n|B.Tigreal                                  |";
				cout<<"\n|C.Grock                                    |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q1 == 'A' || q1== 'a') {
				score++;
			}
			clear();
			
			
				cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|3.What hero has a skill of undying for 3s  |";
				cout<<"\n|A.Martis                                   |";
				cout<<"\n|B.Argus                                    |";
				cout<<"\n|C.Layla                                    |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q1 == 'B' || q1== 'b') {
				score++;
			}
			clear();
				cout<<"\n ________________________________________________________";
	    		cout<<"\n|                                                        |";
	    		cout<<"\n|4.What's the maximum number of players can a Squad hold |";
				cout<<"\n|A.4                                                     |";
				cout<<"\n|B.2                                                     |";
				cout<<"\n|C.5                                                     |";
				cout<<"\n|________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q1 == 'C' || q1== 'c') {
				score++;
			}
			clear();
			
		
			
			
				cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|5.How a Noob/AFK players be punished       |";
				cout<<"\n|A.They will lose a Star                    |";
				cout<<"\n|B.Their Credit score will go down          |";
				cout<<"\n|C.Their Account will be banned             |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q1 == 'B' || q1== 'b') {
				score++;
			}
			clear();
			
			
		
			cout<<"Computing Your Total score";
	   			loading();
	    		clear();
	    
	    scorer(score);
			
		cout<<"\n\n\nAuto Continue";
	    	loading();
	        clear();
		

			cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	 	
		 	cin>>again;
	  		clear();
	  	
		break;	
			
				
			
	
		
		
		
			case 2:
	    		cout<<"\nWELCOME TO LEAGUE OF LEGENDS QUIZ";
	    	
	    		cout<<"\n_________________________________";
	    		
	    		 	cout<<"\nPREPARING YOUR QUIZ";
	   			loading();
				clear();
	    		
	    		cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|1.who is Yasuo's Brother                   |";
				cout<<"\n|A.Ashe                                     |";
				cout<<"\n|B.Yone                                     |";
				cout<<"\n|C.Zed                                      |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q2;
				
			if(q2 == 'B' || q2== 'b') {
				score++;
			}
			clear();  
			
				cout<<"\n _________________________________________________________________________";
	    		cout<<"\n|                                                                         |";
	    		cout<<"\n|2.Which champion's waeapon of choice is a rocket luncher?                |";
				cout<<"\n|A.Garen                                                                  |";
				cout<<"\n|B.Teemo                                                                  |";
				cout<<"\n|C.Jinx                                                                   |";
				cout<<"\n|_________________________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q2;
				
			if(q2 == 'C' || q2== 'c') {
				score++;
			}
			clear();
			
				cout<<"\n ____________________________________________________________";
	    		cout<<"\n|                                                            |";
	    		cout<<"\n|3.Which champion yells DEMACIA!! as he charge  into battle  |";
				cout<<"\n|A.Jarvan                                                    |";
				cout<<"\n|B.Lux                                                       |";
				cout<<"\n|C.Garen                                                     |";
				cout<<"\n|____________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q1;
				
			if(q2 == 'C' || q2== 'c') {
				score++;
			}
			clear();
			
				cout<<"\n _________________________________________________________";
	    		cout<<"\n|                                                         |";
	    		cout<<"\n|4.Which Champion has the power to manipulate time?       |";
				cout<<"\n|A.Warwick                                                |";
				cout<<"\n|B.Ekko                                                   |";
				cout<<"\n|C.Jayce                                                  |";
				cout<<"\n|_________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q2;
				
			if(q2 == 'B' || q2== 'b') {
				score++;
			}
			clear();
			
				cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|5.Who is Jinx older sister?                |";
				cout<<"\n|A.VI                                       |";
				cout<<"\n|B.Morgana                                  |";
				cout<<"\n|C.Lux                                      |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q2;
				
			if(q2 == 'A' || q2== 'a') {
				score++;
			}
			clear();
			
		
			
	   	 cout<<"Computing Your Total score";
	   			loading();
	    		clear();
	    
	    scorer(score);
			
		cout<<"\n\n\nAuto Continue";
	    	loading();
	    	clear();
		

		cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	 	
		 cin>>again;
	 	 clear();	
	 	 
	 	 break;
			
						
		
    
    
    
    
    
		
			case 3:
	    		cout<<"\nWELCOME TO CALL OF DUTY QUIZ";
	    	
	    		cout<<"\n_____________________________";
	    		
	    		 	cout<<"\nPREPARING YOUR QUIZ";
	   		 			loading();
							clear();
				
				
				cout<<"\n ___________________________________________";
	    		cout<<"\n|                                           |";
	    		cout<<"\n|1.What company invented CODM               |";
				cout<<"\n|A.TiMi Studio                              |";
				cout<<"\n|B.Moonton                                  |";
				cout<<"\n|C.Tsunami corp                             |";
				cout<<"\n|___________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q3;
				
			if(q3 == 'A' || q3== 'a') {
				score++;
			}
			clear();  
			
				cout<<"\n ____________________________________________________";
	    		cout<<"\n|                                                    |";
	    		cout<<"\n|2.What season did CODM add the AGR                  |";
				cout<<"\n|A.Season 12                                         |";
				cout<<"\n|B.Season 3                                          |";
				cout<<"\n|C.Season 9                                          |";
				cout<<"\n|____________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q3;
				
			if(q3 == 'A' || q3== 'a') {
				score++;
			}
			clear();
			
				cout<<"\n ____________________________________________________________";
	    		cout<<"\n|                                                            |";
	    		cout<<"\n|3.How many points do you need to reach Legendary in MP      |";
				cout<<"\n|A.3001 points                                               |";
				cout<<"\n|B.8001 points                                               |";
				cout<<"\n|C.7001 points                                               |";
				cout<<"\n|____________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q3;
				
			if(q3 == 'B' || q3== 'b') {
				score++;
			}
			clear();
			
				cout<<"\n _________________________________________________________";
	    		cout<<"\n|                                                         |";
	    		cout<<"\n|4.When was CODM released in the Philippines              |";
				cout<<"\n|A.Febuary 12, 2019                                       |";
				cout<<"\n|B.July 24, 2019                                          |";
				cout<<"\n|C.September 29, 2019                                     |";
				cout<<"\n|_________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q3;
				
			if(q3 == 'C' || q3== 'c') {
				score++;
			}
			clear();
			
				
				cout<<"\n _____________________________________________________________";
	    		cout<<"\n|                                                        	   |";
	    		cout<<"\n|5.Who is the famous character in COD who always wears a hat. |";
				cout<<"\n|A.Soap                                                       |";
				cout<<"\n|B.Price                                                      |";
				cout<<"\n|C.Ghost                                                      |";
				cout<<"\n|_____________________________________________________________|";
				cout<<"\nEnter Your Answer:";
				cin>>q3;
				
		
			if(q3 == 'b' || q3== 'B') {
				score++;
				default:
					cout<<"INVALID OPERATOR TRY AGAIN!";
			
				break;
				
			}
			
			clear();
			
			cout<<"Computing Your Total score";
	   			loading();
	    		clear();
	    
	    scorer(score);
		
		cout<<"\n\n\nAuto Continue";
	    	loading();
	    	clear();
		
		

		cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	 	
		 cin>>again;
	 	 clear();	
}
						
		

}
		while(again == 'y' || again == 'Y');
		
		
	return 0;		
}
		
		
				