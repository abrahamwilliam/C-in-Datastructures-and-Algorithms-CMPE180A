	#include <iostream>
	#include <fstream>
	#include <cstdlib>
	/***** Complete this program. *****/
	#include <iostream>
	using namespace std;
	typedef int Door;
	
	const Door SIMULATION_COUNT = 100;
	
	void simulate(Door);
	
	Door hideCar();
	
	Door openDoor(Door, Door, Door doors[3], Door);
	
	Door makeFirstChoice();
	
	Door makeSecondChoice(Door, Door, Door, Door doors[3]);
	
	int main()
	{
	    simulate(SIMULATION_COUNT);
	}
	
	
	//monty hides the car in this door
	Door hideCar()
	{
	    Door carHiddenDoor = rand() % 3;    
	    return carHiddenDoor;
	}
	
	
	//the door that has been selected by the contestant -first
	Door makeFirstChoice()
	{
	    Door myFirstChoice = rand() % 3;
	    return myFirstChoice;
	}
	
	
	//Monty opens the door to us after the first choice
	Door openDoor(Door hiddenDoor, Door firstChoosenDoor, Door doors[3], Door numberOfDoors)
	{
	
	    Door wrongDoorByMonty = 0;
	    for (Door i = 0; i < numberOfDoors; i++) {
	
	        //If your first door choice was correct, the other two doors each hides a
	        //goat. Monty randomly chooses one of the two doors to open.
	        if (hiddenDoor == firstChoosenDoor && firstChoosenDoor != doors[i]) {
	
	            wrongDoorByMonty = doors[i];
	
	            return wrongDoorByMonty;
	            break;
	        }
	
	        //	If your first door choice was incorrect (your door hides a goat), Monty
	        //opens the other door that hides a goat.
	
	        if (hiddenDoor != firstChoosenDoor && hiddenDoor != doors[i] && firstChoosenDoor != doors[i]) {
	
	            wrongDoorByMonty = doors[i];
	            // cout << "Monty opens the doors  2 = " << doors[i] << endl;
	            //	i+=i++;
	
	            return wrongDoorByMonty;
	            break;
	        }
	    }
	}
	
	//	SIMULATION_COUNT, hiddenDoor, firstChoosenDoor,secondChoosendoor,numberOfDoors-simulates for 100 times to find the win count
	void simulate(Door SIMULATION_COUNT)
	{
	    Door win1 = 0, win2 = 0, numberOfDoors, hiddenDoor, firstChoosenDoor, wrongDoorByMonty, secondChoosendoor;
	    int NofIter = 0;
	    Door doors[3] = { 0, 1, 2 };
	    numberOfDoors = sizeof(doors) / sizeof(doors[0]);
	
	    cout << "  #   "
	         << "  Car  "
	         << "   First      "
	         << "  Opened   "
	         << "      Second    "
	         << "    Win      "
	         << "     Win    " << endl;
	    cout << "      "
	         << " here  "
	         << "  Choice      "
	         << "   Door    "
	         << "      choice    "
	         << "   First     "
	         << "    Second   " << endl;
	
	    cout << "   "
	         << "  "
	         << "       "
	         << "      "
	         << "       "
	         << "          "
	         << "  " << endl;
	
	    for (Door i = 0; i < SIMULATION_COUNT; i++) {
	        hiddenDoor = hideCar();
	        firstChoosenDoor = makeFirstChoice();
	        //Monty chooses to open the other two doors that has goats
	        wrongDoorByMonty = openDoor(hiddenDoor, firstChoosenDoor, doors, numberOfDoors);
	        secondChoosendoor = makeSecondChoice(firstChoosenDoor, wrongDoorByMonty, numberOfDoors, doors);
	
	        if (firstChoosenDoor == hiddenDoor) {
	            win1++;
	            if (i >= 10) {
	                cout << i << "   "
	                     << "    " << hiddenDoor << "    "
	                     << "    " << firstChoosenDoor << "    "
	                     << "         " << wrongDoorByMonty << "     "
	                     << "        " << secondChoosendoor << "    "
	                     << "       "
	                     << " Yes"
	                     << "    "
	                     << "    "
	                     << "    "
	                     << "  " << endl;
	            }
	            else {
	                cout << " " << i << "   "
	                     << "    " << hiddenDoor << "    "
	                     << "    " << firstChoosenDoor << "    "
	                     << "         " << wrongDoorByMonty << "     "
	                     << "        " << secondChoosendoor << "    "
	                     << "       "
	                     << " Yes"
	                     << "    "
	                     << "    "
	                     << "    "
	                     << "  " << endl;
	            }
	        }
	
	        if (secondChoosendoor == hiddenDoor) {
	            win2++;
	            if (i >= 10) {
	                cout << i << "   "
	                     << "    " << hiddenDoor << "    "
	                     << "    " << firstChoosenDoor << "    "
	                     << "         " << wrongDoorByMonty << "    "
	                     << "    "
	                     << "     " << secondChoosendoor << "      "
	                     << "     "
	                     << "    "
	                     << "        "
	                     << "   Yes"
	                     << "       " << endl;
	            }
	            else {
	                cout << " " << i << "   "
	                     << "    " << hiddenDoor << "    "
	                     << "    " << firstChoosenDoor << "    "
	                     << "         " << wrongDoorByMonty << "    "
	                     << "    "
	                     << "     " << secondChoosendoor << "      "
	                     << "     "
	                     << "    "
	                     << "        "
	                     << "   Yes"
	                     << "       " << endl;
	            }
	        }
	    }
	
	    cout << win1 << " if he stays in the first " << endl;
	    cout << win2 << " if he stays in the second " << endl;
	
	    cout << "Ratio of wins by second choice to first choice i.e.  Win2/Win1 = " << win2 / win1 << endl;
	}
	
	
	//contestant second choice , returns the door choosen by the contestent in second choice.
	Door makeSecondChoice(Door firstChoosenDoor, Door wrongDoorByMonty, Door numberOfDoors, Door doors[3])
	{
	
	    for (Door i = 0; i < numberOfDoors; i++) {
	
	        if (doors[i] != firstChoosenDoor && doors[i] != wrongDoorByMonty) {
	
	            return doors[i];
	        }
	    }
	}

