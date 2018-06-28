		#include <iostream>
		#include <fstream>
		#include<cstdlib>
		/***** Complete this program. *****/
		#include<iostream>
		using namespace std;
		typedef int Door;
		
		const int SIMULATION_COUNT = 100;
		
		void simulate(int);
		
		Door hideCar();
		
		Door openDoor(int, int ,int doors[3], int );
		
		Door makeFirstChoice();
		
		Door makeSecondChoice(int, int, int ,int doors[3]);
		
		int main()
		{
		   // int win1 = 0, win2 = 0;
		  /*  
		    int doors[] = {1,2,3};
		    int numberOfDoors=sizeof(doors)/sizeof(doors[0]);
		    
		   int hiddenDoor=hideCar();
		   
		   int firstChoosenDoor=makeFirstChoice();
		   
		   //Monty chooses to open the other two doors that has goats
		   int wrongDoorByMonty=openDoor(hiddenDoor,firstChoosenDoor,doors,numberOfDoors);
		   
		   
		  int secondChoosendoor= makeSecondChoice(firstChoosenDoor,wrongDoorByMonty,numberOfDoors);
		   
		   if(firstChoosenDoor==hiddenDoor){
		   	win1++
		   }
		   
		   if(secondChoosendoor==hiddenDoor){
		   	win2++
		   }
		   */
		   
		   simulate(SIMULATION_COUNT);
		  
		  //  int openFirstDoor=openDoor()
		    
		    // Run the simulations.
		    
		}
		   
		
		Door hideCar(){
			
			//door number in which the car has been hidden
			int a=rand() %3;
			cout<<"the car has been hidden in the door"<<a<<endl;
		
		return a;	
		}
		
		
		Door makeFirstChoice(){
			
			//door that has been choosen as my first choice
			int b=rand() %3;
			cout<<"the door that has been choosen by me"<<b<<endl;
			
			return b;
			
		}
		
		
		Door openDoor(Door hiddenDoor,Door firstChoosenDoor,int doors[3],int numberOfDoors){
			
			int wrongDoorByMonty=0;
			for(int i=0;i<numberOfDoors;i++){
			
			//If your first door choice was correct, the other two doors each hides a
		//goat. Monty randomly chooses one of the two doors to open.
			if(hiddenDoor==firstChoosenDoor && firstChoosenDoor!=doors[i] )	{
			
			    
			    wrongDoorByMonty=doors[i];
				cout<<"Monty opens the doors  = "<<doors[i]<<endl;
			
				
			return wrongDoorByMonty;
			break;
			}
			
			
			
		//	If your first door choice was incorrect (your door hides a goat), Monty
		//opens the other door that hides a goat.
		
		if(hiddenDoor!=firstChoosenDoor && hiddenDoor!=doors[i] && firstChoosenDoor!=doors[i]){
			
			wrongDoorByMonty=doors[i];
			cout<<"Monty opens the doors  2 = "<<doors[i]<<endl;
		//	i+=i++;
			
			return wrongDoorByMonty;
			break;
		}
		
		
			
		}
		
	}
	  
		
		
	//	SIMULATION_COUNT, hiddenDoor, firstChoosenDoor,secondChoosendoor,numberOfDoors
		void simulate(int SIMULATION_COUNT ){
			int win1=0, win2=0,numberOfDoors,hiddenDoor,firstChoosenDoor,wrongDoorByMonty,secondChoosendoor;
			
			int doors[3] = {0,1,2};
			 numberOfDoors=sizeof(doors)/sizeof(doors[0]);
				for (int i=0; i<SIMULATION_COUNT ;i++){
				hiddenDoor=hideCar();
			  firstChoosenDoor=makeFirstChoice();
			   //Monty chooses to open the other two doors that has goats
			   wrongDoorByMonty=openDoor(hiddenDoor,firstChoosenDoor,doors,numberOfDoors);
			   secondChoosendoor= makeSecondChoice(firstChoosenDoor,wrongDoorByMonty,numberOfDoors,doors);
			   
			   if(firstChoosenDoor==hiddenDoor){
			   	win1++;
			   	cout<< "win1 count ="<<win1<<endl;
			   }
			   
			   if(secondChoosendoor==hiddenDoor){
			   	win2++;
			   	cout<< "win2 count ="<<win2<<endl;
			   }
			   		
				}
			cout<<"win1 count  ="<<win1<<endl;
				cout<<"win2 count ="<<win2<<endl;
			//cout<<"win2 ="<<win1<<endl;
		cout<<"SIMULATION_COUNT"<<SIMULATION_COUNT<<endl;
		}
		

		  Door makeSecondChoice(int firstChoosenDoor,int wrongDoorByMonty,int numberOfDoors, int doors[3])
		{
			
			for(int i=0;i<numberOfDoors;i++){
				
				if(doors[i]!=firstChoosenDoor && doors[i]!=wrongDoorByMonty){
					
					cout<<"the door i have coosen 2 is "<<doors[i]<<endl;
					return doors[i];
				}
				
			}
			
		}
		
		
		
		
		

