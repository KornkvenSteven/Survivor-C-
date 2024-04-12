#include <iostream>
#include <string>
#include <ctime>
#include <fstream>


using namespace std;

class Survivor 
{
private:
    string first_name;
    string tribe;
    int strength;
    int vote_ID;
    int trust;
    int challenge_wins;
    int allies_made;
    int trust_made;
    int immune;
    bool eliminated;
    int allied;

public:
    Survivor(string first_name, string tribe, int strength, int vote_ID, int allied, int trust, int immune,int challenge_wins, int allies_made,int trust_made) 
    {
        this->first_name = first_name;
        this->tribe = tribe;
        this->strength = strength;
        this->vote_ID = vote_ID;
        this->eliminated = false;
        this->allied=allied;
        this-> trust=trust;
        this-> immune=immune;
        this-> challenge_wins= challenge_wins;
        this-> allies_made=allies_made;
        this-> trust_made=trust_made;
    }

void print()
{
   cout << first_name << " from " << tribe << " tribe" << endl;
}

bool isEliminated() 
{
   return eliminated;
}

void eliminate() 
{
    eliminated = true;
}

string getTribe() 
{
	return tribe;
}
    
int getAllied()
{
	return allied;
}

int getStrength()
{
       return strength;
}
string getFirstName()
{
return first_name;
}

int getVoteID() 
{
return vote_ID;
}
void set_allied(int new_allied)
{
	allied= new_allied;
}

//This runs the challeges for the tribe phase
//The strenght of each survior is added together for each team, then a random number is selected
//Higher the strenght is the more higher numbers they will get, so in theory a better chance to win 
static void tribeChallenge(Survivor* heroes[], int numHeroes, Survivor* villains[], int numVillains)
    {	
		
        int totalStrengthHeroes = 0, totalStrengthVillains = 0;
        int StrenghtHeroes=0, StrengthVillains=0;
        int tempy1=0; int tempy2=0;

   do
   {// Calculate total strength for Heroes tribe
        for (int i = 0; i < numHeroes; ++i) {
            if (!heroes[i]->isEliminated()) {
                StrenghtHeroes += heroes[i]->getStrength();
                
                if(i==numHeroes-1)
                {
					if(i==numVillains-1)
					{
						if(numVillains>numHeroes)
						{
						 tempy1 = numVillains-numHeroes;
						
						for(int i=0; i<=tempy1; i++)
							{
							StrengthVillains -= villains[i]->getStrength();
							}
						}
					}
                    totalStrengthHeroes=rand() % StrenghtHeroes;
                }
                
            }
        }
	
        // Calculate total strength for Villains tribe
        for (int i = 0; i < numVillains; ++i) 
        {
            if (!villains[i]->isEliminated())
             {
                StrengthVillains += villains[i]->getStrength();
					
						
                if(i==numVillains-1)
                {
					if(numVillains>numHeroes)
					{
						tempy2 = numVillains-numHeroes;
					
					for(int i=0; i<=tempy2; i++)
						{
							StrengthVillains -= villains[i]->getStrength();
						}
					}
				}
                    totalStrengthVillains=rand() % StrengthVillains;
                }
            }
        }while(totalStrengthVillains==totalStrengthHeroes);
         
         //Displays total tribe strenght, then how the tribe performed in the challenge 
            cout << "Heros Challenge Strenght: " << StrenghtHeroes << " Performed: " << totalStrengthHeroes << endl;
            cout << "Villians Challenge Strenght: " << StrengthVillains << " Performed: " << totalStrengthVillains <<endl;
            
        // Determine the winner based on total strengths
        if (totalStrengthHeroes > totalStrengthVillains)
         {
            cout << "Heroes Win Immunity! Sending the Villains Tribe to Tribal Council" << endl;
           
        } 
        else if (totalStrengthVillains > totalStrengthHeroes)
         {
            cout << "Villains Win Immunity! Sending the Heroes Tribe to Tribal Council" << endl;
            
        } 
     
    }
//This allows the user to select the survivor that they want to play as
//First given the option to pick their tribe, then select from 10 different characters
int selectSurvivor(Survivor* heroes[], int numSurvivors)
    {
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout << i << ": " << heroes[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        cin >> choice;
        if (choice<=9 && choice>=0) 
        {
            cout << " " << endl;
            cout << "You have chosen " << heroes[choice]->getFirstName() << endl;
            cout << " " << endl;
            return choice;
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            return selectSurvivor(heroes, numSurvivors);
        }
    }

int selectSurvivorVillain(Survivor* villain[], int numSurvivors)
    {
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout << i << ": " << villain[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        cin >> choice;
        if (choice>=10 && choice<=19) 
        {
            cout << " " << endl;
            cout << "You have chosen " << villain[choice-10]->getFirstName() << endl;
            cout << " " << endl;
            return choice;
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            return selectSurvivorVillain(villain, numSurvivors);
        }
    }

//This is the day simulator
//The player will be give three actions per day, with 4 options to use them
//Each option has the chance to give the player an advantage
//1)build alliance 2)Find immunity Idol 3)Build trust 4)Do nothing (Gain Strenght)
int day_actions_hero(Survivor* heroes[], int number_survivors_per_tribe, int choice)
{
	int D_actions=0;
	while (D_actions<3)
	{
		
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing" << endl;
		int Day_Choice;
		cin >> Day_Choice;
		
		if(Day_Choice==1)
		{
			//This will give the player a chance to make an alliance with another player 
			cout << "Who do you want to attempt to make an alliance with?" << endl;
			cout << " " << endl;
			int al_attempt;
			
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
				int alliance_check= heroes[choice]->vote_ID;
				
				if(alliance_check!=heroes[i]->vote_ID)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << heroes[i]->getFirstName() << endl;
				}
			}
				cin >> al_attempt;
					cout << " " << endl;
					cout << "You talk to " << heroes[al_attempt]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				if(al_result>74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+10; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have successfuly created and alliance with " << heroes[al_attempt]->getFirstName() << "." << endl;
					heroes[al_attempt]->allied=true;
					D_actions++;
				}
				if(al_result<74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have failed to create an alliance with " << heroes[al_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
				cout << " " << endl;
			
			
		}
		if(Day_Choice==2)
		{
			//Player will have a chance to find a hidden immiunity idol 
			cout << "This will attempt to find an immunity idol" << endl;
			D_actions++;
		}
		if(Day_Choice==3)
		{
			//This will have the chance to increase anther player's trust 
			//Trust al_attempt +20
			//Trust al_attempt +10
			cout << "This will atttempt to build trust eventually" << endl;
			int trust_attempt;
			
			
			cout << "Who do you want to build trust with? " << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
				int trust_check= heroes[choice]->vote_ID;
				
				if(trust_check!=heroes[i]->vote_ID) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << heroes[i]->getFirstName() << endl;
				}
			}
			cin >> trust_attempt;
			
					cout << " " << endl;
					cout << "You started a conversation with " << heroes[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				if(trust_result>74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+30; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have successfuly build trust with " << heroes[trust_attempt]->getFirstName() << "." << endl;
					
					D_actions++;
					}
					if(trust_result<74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+20; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have failed to build trust with " << heroes[trust_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
		}
		if(Day_Choice==4)
		{
			//This will have the chance to increase a character's strenght 
			cout << "You have decided to do nothing" << endl;
			D_actions++;
		}
		
		
	}
	
}  
int day_actions_villain(Survivor* villains[], int number_survivors_per_tribe, int choice)
{
	int D_actions=0;
	while (D_actions<3)
	{
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing" << endl;
		int Day_Choice;
		cin >> Day_Choice;
		
		if(Day_Choice==1)
		{
			cout << "Who do you want to attempt to make an alliance with?" << endl;
			cout << " " << endl;
			int al_attempt;
				
				
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
				int alliance_check= villains[choice]->getVoteID();
				
				
				if(alliance_check+10 !=villains[i]->vote_ID)
				{
				cout << villains[i]->getFirstName() << endl;
				}
			}
				cin >> al_attempt;
				cout << " " << endl;
				cout << "You talk to " << villains[al_attempt-10]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				if(al_result>=74)
				{
						
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									cout << " test: " << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have successfuly created and alliance with " << villains[al_attempt-10]->getFirstName() << "." << endl;
					villains[al_attempt-10]->allied=true;
			 
					D_actions++;
				}
				
				if(al_result<74)
				{	
					
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt-10; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									cout << " test: " << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have failed to create an alliance with " << villains[al_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
				}
			
		}
		
		if(Day_Choice==2)
		{
			cout << "This will attempt to find an immunity idol eventually" << endl;
			D_actions++;
		}
		if(Day_Choice==3)
		{
			//trust Successful al_attempt+20
			//trust failed al_attempt+10
				//This will have the chance to increase anther player's trust 
			//Trust al_attempt +20
			//Trust al_attempt +10
			
			int trust_attempt;
			
			
			cout << "Who do you want to build trust with? " << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
				int trust_check= villains[choice]->vote_ID;
				
				if(trust_check!=villains[i+10]->vote_ID) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << villains[i]->getFirstName() << endl;
				}
			}
			cin >> trust_attempt;
			
					cout << " " << endl;
					cout << "You started a conversation with " << villains[trust_attempt-10]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				if(trust_result>74)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+20; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have successfuly built trust with " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					
					D_actions++;
					}
					if(trust_result<74)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+10; // Change this to the line number you want to read
						string line;
								
						int line_count=0;
					// Read the desired line
								while(getline(inputFile, line)) 
								{
									
									
									if(line_count==targetLine)
									{
									cout << line << endl;
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have failed to build trust with " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
				}
		}
		if(Day_Choice==4)
		{
			cout << "You have decided to do nothing" << endl;
			D_actions++;
		}
		
		
		}
	}

};  

int main() 
{
    srand(time(0));
    const int number_survivors_per_tribe = 10;
    //choice is how we will track the User's character
    int choice;
    
    // Initialize Survivor objects
    Survivor* heroes[number_survivors_per_tribe] = 
    {
						//name           tribe         strength  vote_id  allied  trust immune  challenge wins  allies made         trust built
        new Survivor("#0 Sugar Kiper",  "Heroes",        3,        0,        0,    5,    0,           0,            0,                  0),
        new Survivor("#1 Stephenie LaGrossa",  "Heroes", 5,        1,        0,	   5,    0,           0,            0,                  0),
        new Survivor("#2 Cercie Fields",  "Heroes",      1,        2,        0,    5,    0,           0 ,           0,                  0),
        new Survivor("#3 Tom Westman",  "Heroes",        6,        3,        0,    5,    0,           0,            0,                  0),
        new Survivor("#4 James Clement",  "Heroes",      5,        4,        0,    5,    0,           0,            0,                  0),
        new Survivor("#5 J.T Thomas",  "Heroes",         6,        5,        0,    5,    0,           0,            0,                  0),
        new Survivor("#6 Amanda Kimmel",  "Heroes",      5,        6,        0,    5,    0,           0,            0,                  0),
        new Survivor("#7 Candice Woodcock",  "Heroes",   4,        7,        0,    5,    0,           0,            0,                  0),
        new Survivor("#8 Rupert Boneham",  "Heroes",     7,        8,        0,    5,    0,           0,            0,                  0),
        new Survivor("#9 Colby Donaldson",  "Heroes",    5,        9,        0,    5,    0,           0,            0,                  0)
    };
    
    //It might be easier to make the allied and immune into bools. Theyre already just working as true or false basically
    //But I don't know which would be easier 
    
    //Strength will be a factor for challenges
    //vote_ID just corresponds with their place in the array, 
    //The vote_ID for the villians is a little weird, sometimes you have do -10
    //The ID's need to be different from the ones for the heros, this will be important during merge phase 
    
    
    Survivor* villains[number_survivors_per_tribe] = 
    {
							//name           tribe        strength  vote_id  allied  trust immune    challenge wins  allies made         trust built
        new Survivor("#10 Courtney Yates",  "Villains",    2,         10,      0,     5,     0,      0,                0,                 0),
        new Survivor("#11 Russell Hantz",  "Villains",     5,         11,      0,     5,     0,      0,                0,                 0),
        new Survivor("#12 Randy Bailey",  "Villains",      3,         12,      0,     5,     0,      0,                0,                 0),
        new Survivor("#13 Tyson Apostol",  "Villains",     7,         13,      0,     5,     0,      0,                0,                 0),
        new Survivor("#14 Boston Rob",  "Villains",        8,         14,      0,     5,     0,      0,                0,                 0),
        new Survivor("#15 Coach Wade",  "Villains",        4,         15,      0,     5,     0,      0,                0,                 0),
        new Survivor("#16 Jerri Manthey",  "Villains",     5,         16,      0,     5,     0,      0,                0,                 0),
        new Survivor("#17 Sandra Diaz-Twine ",  "Villains",1,         17,      0,     5,     0,      0,                0,                 0),
        new Survivor("#18 Parviti Shallow ",  "Villains",  6,         18,      0,     5,     0,      0,                0,                 0),
        new Survivor("#19 Danielle DiLorenzo", "Villains", 6,         19,      0,     5,     0,      0,                0,                 0)
    };
    
    cout << "Welcome to C++ Survivor!" << endl;

	cout << "Would you like to play as a Hero or Villain? " << endl;
	cout <<"Press 1 for Hero. " << " " << "Press 2 for Villain" << endl;
	int character_choice;
	cin >> character_choice;
	
	if(character_choice == 1)
	{
	    choice = heroes[0]->selectSurvivor(heroes, number_survivors_per_tribe);
	}
	if (character_choice == 2)
	{
	    choice = villains[0]->selectSurvivorVillain(villains, number_survivors_per_tribe);
	}
    

	int days=1;
	//while(days<36)
	//{
 
    cout << " " << endl;
    cout << "It is day: " << days << "." << endl;
    cout << "The remaining survivors are: " << endl;
    cout << "HEROES: " << endl;
    for (int i = 0; i < number_survivors_per_tribe; ++i)
     {
        heroes[i]->print();
     }
     cout << "VILLAINS: " << endl;
    for(int i=0; i<number_survivors_per_tribe; i++)
     {
      villains[i]->print();
	 }
    cout << endl;
	
	if(character_choice==1)
	{
	heroes[0]->day_actions_hero(heroes, number_survivors_per_tribe, choice);
	}
	if(character_choice==2)
	{
	villains[0]->day_actions_villain(villains, number_survivors_per_tribe, choice);
	}
	
	cout << villains[3]->getAllied() << endl;
	
    // Perform tribe challenge
    Survivor::tribeChallenge(heroes, number_survivors_per_tribe, villains, number_survivors_per_tribe);
    
    
    //NEED TO ADD TRIBAL COUNCLE FOR TRIBES 
    //day=day+2
	//}

    return 0;
}


