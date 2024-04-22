#include <iostream>
#include <string>
#include <ctime>
#include <fstream>


using namespace std;

class Survivor 
{
protected:
    string first_name;
    string tribe;
    int strength;
    int player;
    int vote_ID;
    int tricks;
    int elim;
    int trust;
    int challenge_wins;
    int allies_made;
    int trust_made;
    int immune;
    int enemies;
    int tribe_immune;
    bool eliminated;
    int allied;
    int sit_out;
    int votes_against;

public:
Survivor(string first_name, string tribe, int strength, int vote_ID,int player, int tricks, int votes_against, int elim, int allied,int sit_out, int trust,int enemies, int immune,int tribe_immune, int challenge_wins, int allies_made,int trust_made) 
{
        this->first_name = first_name;
        this->tribe = tribe;
        this->strength = strength;
        this->player=player;
        this->vote_ID = vote_ID;
        this->elim=elim;
        this->eliminated = false;
        this->allied=allied;
        this-> trust=trust;
        this-> immune=immune;
        this-> tribe_immune=tribe_immune;
        this-> challenge_wins= challenge_wins;
        this-> allies_made=allies_made;
        this-> trust_made=trust_made;
        this-> enemies=enemies;
        this->votes_against=votes_against;
        this->sit_out=sit_out;
    }
static void Winner()
{
	cout << "      $   $$   "<< endl;
	cout <<"       $ $$$     "<< endl;
	cout <<"    $$$$$$"<< endl;
	cout <<"   $$  $      "<< endl;
	cout <<"   $$  $      "<<endl;
	cout <<"    $$ $      " << endl;
	cout <<"      $$      " << endl;
	cout << "      $$$    " << endl;
	cout << "      $ $$    " << endl;
	cout << "      $  $$ " << endl;
	cout << "      $   $$" << endl;
	cout << "      $  $$   " << endl;
	cout << "      $ $$    " << endl;
	cout << "      $$$    " << endl;
	cout << " $    $$$     " << endl;
	cout << " $$ $$$$       " << endl;
	cout << "  $$$$$        " << endl;
	cout << "      $        " << endl;
	cout << "      $       " << endl;
	cout << " " << endl;
	cout << "You are the ULTIMATE SURVIVOR! YOU WIN 1 MILLION DOLLARS!" << endl;
	cout << " " << endl;


}

static void Loser()
{
for (int s=0; s<20;s++)//columns
		{
			cout << " ";
			if (s>=10 && s<=16)
			{
				cout <<"*";
			}
		}
			cout << endl;

		for (int s=0; s<22;s++)//columns
		{
			cout << " ";

			if(s==6 || s==20)
			{
				cout <<"* *";
			}

		}
			cout << endl;

		for (int i=0; i<2; i++)
		{
		for (int s=0; s<30;s++)//columns
		{
			cout << " ";

			if(s==5 || s==25)
			{
				cout <<"*";
			}

		}
			cout << endl;
		}

		for (int i=0; i<2; i++)
		{
		for (int s=0; s<30;s++)//columns
		{
			cout << " ";

			if(s==3 || s==27)
			{
				cout <<"*";
			}

		}
			cout << endl;
		}



		for (int i=0; i<3; i++)
		{
		for (int s=0; s<33;s++)//columns
		{
			cout << " ";

			if(s==1 || s==20)
			{
				cout <<"*";
			}
			if(s==8 || s==13)
			{
				cout << "****";
			}

		}
			cout << endl;
		}


		for (int s=0; s<33;s++)//columns
		{
			cout << " ";

			if(s==3 || s==26)
			{
				cout <<"*";
			}
		}
			cout << endl;


		for (int s=0; s<33;s++)//columns
		{
			cout << " ";

			if(s==4 || s==24)
			{
				cout <<"*";
			}
		}
			cout << endl;


		for (int s=0; s<33;s++)//columns
		{
			cout << " ";

			if(s==6 || s==19)
			{
				cout <<"*";
			}
			if(s==13)
			{
				cout <<"***";
			}
		}
			cout << endl;


		for (int i=0; i<2; i++)
		{
		for (int s=0; s<30;s++)//columns
		{
			cout << " ";

			if(s==7 || s==20 )
			{
				cout <<"*";
			}

		}
			cout << endl;
		}

		for (int i=0;i<2;i++)
		{
		for (int s=0; s<30; s++)
		{
			cout <<" ";

			if (s==7 || s==14 || s==12|| s==18)
			{
				cout <<"*";
			}
		}
		cout << endl;
		}

		for (int s=0; s<30; s++)
		{
			cout <<" ";
			if(s>7 && s<15)
			{
				cout << "*";
			}
		}
		cout << " " << endl;
		cout << "YOU LOSE!" << endl;
		cout << " " << endl;
	}
void print()
{
   cout << first_name << " from " << tribe << " tribe" << endl;
}

int getEliminated() 
{
   return elim;
}

void setEliminate(int new_elim) 
{
    elim= new_elim;
}

string getTribe() 
{
	return tribe;
}

int getAllied()
{
	return allied;
}
int getPlayerCharacter ()
{
	return player;
}
void setPlayerCharacter(int newPlayer)
{
	player=newPlayer;
}
	
void setAllied(int newAllied) {
	allied = newAllied;
}

int getStrength()
{
       return strength;
}
int getTricks()
{
	return tricks;
}
int getAlliedMade()
{
	return allies_made;
}
void setTricks(int newTricks)
{
	tricks=newTricks;
}

void setStrength(int newStrength) {
	strength = newStrength;
}

void setImmune(int new_immune)
{
	immune = new_immune;
}

int getImmune()
{
	return immune;
}

int getTribeImmune()
{
	return tribe_immune;
}

int getVotesAgainst()
{
	return votes_against;
}
void setVotesAgainst(int NewVotesAgainst)
{
	votes_against=NewVotesAgainst;
}
void setTribeImmune(int newTribeImmune) {
	tribe_immune = newTribeImmune;
}

string getFirstName()
{
	return first_name;
}

int getVoteID() 
{
	return vote_ID;
}
int getTrust()
{
	return trust;
}
void setTrust(int new_trust)
{
	trust=new_trust;
}
void setVoteID(int newVoteID) {
	vote_ID = newVoteID;
}

int getSittingOut()
{
	return sit_out;
}

void setSittingOut(int newSitOut) {
	sit_out = newSitOut;
}

void set_allied(int new_allied)
{
	allied= new_allied;
}

void set_allied_made(int new_allied_made)
{
	allies_made=new_allied_made;
}
int getEnemies()
{
	return enemies;
}
void setEnemies(int newEnemies)
{
	enemies= newEnemies;
}

};
class Samoa: public Survivor
{
public: 
Samoa(string first_name, string tribe, int strength, int vote_ID, int player, int tricks , int votes_against, int elim, int allied,int sit_out, int trust, int immune,int enemies, int tribe_immune, int challenge_wins, int allies_made,int trust_made): Survivor (first_name, tribe, strength, vote_ID,player, tricks, votes_against, elim, allied, sit_out, trust, immune, enemies, tribe_immune, challenge_wins, allies_made, trust_made)
{
}


int selectSurvivorS(Samoa* galu[], int numSurvivors)
{
        int choice;
        cout << "Choose your Survivor:" << endl;
			for (int i = 0; i < numSurvivors; ++i) 
			{
				cout << galu[i]->getFirstName() << endl;
			}
        
			cout << "Enter the number of your choice: ";
			cin >> choice;
				if (choice<=9 && choice>=0) 
				{
					cout << " " << endl;
					cout << "You have chosen " << galu[choice]->getFirstName() << endl;
					cout << " " << endl;
						return choice;
				} 
				else 
				{
					cout << "Invalid choice. Please try again." << endl;
						return selectSurvivorS(galu, numSurvivors);
				}
}
int selectSurvivorVillainS(Samoa* foa[], int numSurvivors)
{
        int choice;
		cout << "Choose your Survivor:" << endl;
			for (int i = 0; i < numSurvivors; ++i) 
			{
				cout << foa[i]->getFirstName() << endl;
			}
        
			cout << "Enter the number of your choice: ";
			do{
				cin >> choice;
			}while(choice<10 && choice>19);
			if (choice>=10 && choice<=19) 
			{
				cout << " " << endl;
				cout << "You have chosen " << foa[choice-10]->getFirstName() << endl;
				cout << " " << endl;
					return choice;
			} 
			else 
			{
				cout << "Invalid choice. Please try again." << endl;
				return selectSurvivorVillainS(foa, numSurvivors);
			}
}
static void tribeChallengeS(Samoa* galu[], Samoa* foa[], int number_survivor_per_tribe, int choice)
{	
    int numHeroes = 0;
    int numVillains = 0;

    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (galu[i]->getEliminated() ==0 )
        {
            numHeroes++;
        }
        if (foa[i]->getEliminated() ==0)
        {
            numVillains++;
        }
    }
	
    // Determine if any tribe needs to sit out members
    if (numHeroes > numVillains)
    {
        cout << "Galu you has " << numHeroes - numVillains << " extra members. You need to sit out " << numHeroes - numVillains << " people of the challenge" << endl;
        // Code for heroes sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			cout << galu[i]->getFirstName() << endl;
		}
        for(int i=0; i<=numHeroes-numVillains; i++)
				{
					int sitting;
					cin >> sitting;
					galu[sitting]->sit_out=galu[sitting]->sit_out+1;
				}
						
    }
    if (numHeroes < numVillains)
    {
       cout << "Foa-Foa you have " << numVillains - numHeroes << " extra members. You need to sit out " << numVillains - numHeroes << " people out of the challenge" << endl;
        // Code for villains sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			cout << foa[i]->getFirstName()<< endl;
		}
        for(int i=0; i<numVillains-numHeroes; i++)
        {
				int sitting=0;
				cin >> sitting;
				foa[sitting-10]->sit_out=foa[sitting-10]->sit_out+1;
			
		}
						
    }
		
    int totalStrengthHeroes = 0, totalStrengthVillains = 0;
	int HeroP=0; int VillainP=0;
    // Calculate total strength for Heroes tribe
    for (int i = 0; i < number_survivor_per_tribe; ++i)
    {
		cout<< foa[i]->first_name  << foa[i]->getSittingOut() << endl;
        if (galu[i]->getEliminated()==0 && galu[i]->getSittingOut()==0)
        {
            totalStrengthHeroes += galu[i]->getStrength();
        }
    }
		HeroP=rand() % totalStrengthHeroes;

    // Calculate total strength for Villains tribe
    for (int i = 0; i < number_survivor_per_tribe; ++i)
    {
        if (!foa[i]->getEliminated()==0 && foa[i]->getSittingOut() ==0)
        {
            totalStrengthVillains += foa[i]->getStrength();
        }
    }
		VillainP=rand() % totalStrengthVillains;
    // Display total tribe strength and challenge performance
    cout << "Galu Challenge Strength: " << totalStrengthHeroes << " Performed: " << HeroP << endl;
    cout << "Foa-Foa Challenge Strength: " << totalStrengthVillains << " Performed: " << VillainP << endl;

    // Determine the winner based on total strengths
    if (HeroP > VillainP)
    {
        cout << "Galu Win Immunity! Sending the Foa-Foa Tribe to Tribal Council" << endl;
    
       	Samoa:: Villains_Tribal_CouncilS( foa, number_survivor_per_tribe, choice);
    }
    else if (VillainP > HeroP)
    {
        cout << "Foa-Foa Win Immunity! Sending the Galu Tribe to Tribal Council" << endl;
        // Code for updating villains' immunity status
       	Samoa:: Heroes_Tribal_CouncilS( galu, number_survivor_per_tribe, choice);
    
    
    }
}
int day_actions_heroS(Samoa* galu[], int number_survivors_per_tribe, int choice)
{
	int D_actions=0;

	while (D_actions<3)
	{
		
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(galu[choice]->enemies>0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5)Mend Relationships" << endl;
		
		cin >> Day_Choice;
		}
		if(galu[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing" << endl;
		
		cin >> Day_Choice;
		}
		
			if(Day_Choice==1)
			{
			//This will give the player a chance to make an alliance with another player 
			cout << "Who do you want to attempt to make an alliance with?" << endl;
			cout << " " << endl;
			int al_attempt;
			
				for (int i=0;i<number_survivors_per_tribe; i++)
				{
			
				
					if(i != choice && galu[i]->allied==0 && galu[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
					{
					cout << galu[i]->getFirstName() << endl;
					}
				}
				cin >> al_attempt;
					cout << " " << endl;
					cout << "You talk to " << galu[al_attempt]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				//SUCCESS
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
						int targetLine = al_attempt+60; // Change this to the line number you want to read
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
					cout << "You have successfuly created and alliance with " << galu[al_attempt]->getFirstName() << "." << endl;
					galu[al_attempt]->allied=galu[al_attempt]->allied+1;
					galu[choice]->allies_made=galu[choice]->allies_made+5;
					D_actions++;
				}
				//NETURAL RESULT
				if(al_result<=74 && al_result>15)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+70; // Change this to the line number you want to read
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
					cout << "You have failed to create an alliance with " << galu[al_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
				//NEGATIVE RESULT +40
				if(al_result<=15)
				{
						ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+80; // Change this to the line number you want to read
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
								D_actions++;
					cout <<"You have become enemies with " << galu[al_attempt]->getFirstName() << "." << endl;
					galu[al_attempt-10]->allied=galu[al_attempt-10]->allied+2;
					galu[choice-10]->enemies=galu[choice-10]->enemies+1;
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
				
				if(i != choice && galu[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << galu[i]->getFirstName() << endl;
				}
			}
			cin >> trust_attempt;
			
					cout << " " << endl;
					cout << "You started a conversation with " << galu[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
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
						int targetLine = trust_attempt+90; // Change this to the line number you want to read
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
					cout << "You have successfuly build trust with " << galu[trust_attempt]->getFirstName() << "." << endl;
					galu[trust_attempt]->trust=galu[trust_attempt]->trust+5;
					galu[choice]->trust_made=galu[choice]->trust_made+5;
					D_actions++;
					}
					//NEUTRAL RESULT
				if(trust_result<=74 && trust_result>15)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+100; // Change this to the line number you want to read
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
					cout << "You have failed to build trust with " << galu[trust_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
									//NEGATVIE RESULT trust_attempt 
					if(trust_result>15)
					{
							ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+110; // Change this to the line number you want to read
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
								D_actions++;
					
						cout <<"You have lost trust with " << galu[trust_attempt]->getFirstName() << "." << endl;
						if(galu[trust_attempt]->trust!=0)
						{
						galu[trust_attempt]->trust=galu[trust_attempt]->trust-5;
						}
					
					}
		}
		if(Day_Choice==4)
		{
			//This will have the chance to increase a character's strenght 
			int do_nothing_result=0;
			cout << "You have decided to do nothing" << endl;
			do_nothing_result= rand() % 100;
			//SUCCESS
			if (do_nothing_result>75)
			{
				
			}
			//NEUTRAL
			if(do_nothing_result<=75 && do_nothing_result>15)
			{
				
			}
			//NEGATIVE
			if(do_nothing_result<=15)
			{
				
			}
			D_actions++;
		}
		if(Day_Choice==5)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && galu[i]->allied==2)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << galu[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			cin>>mend_choice;
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << galu[mend_choice]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  galu[mend_choice]->getFirstName() << endl;
			}
			if(fix_friend>=50)
			{
				cout << galu[mend_choice-10]->getFirstName() << " accepts your apology" << endl;
				cout <<galu[mend_choice-10]->getFirstName() << " is no longer you enemy" << endl;
				
				galu[choice]->enemies=galu[choice]->enemies-1;
				galu[mend_choice]->allied=galu[mend_choice]->allied-2;
				
			}
		}
	}
};  
int day_actions_villainS(Samoa* foa[], int number_survivors_per_tribe, int choice)
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
			
				
				
				if(i != choice&& foa[i]->allied==0 && foa[i]->getEliminated()==0)
				{
				cout << foa[i]->getFirstName() << endl;
				}
			}
				cin >> al_attempt;
				cout << " " << endl;
				cout << "You talk to " << foa[al_attempt-10]->getFirstName() << " about a potential alliance" << endl;
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
						int targetLine = al_attempt+50; // Change this to the line number you want to read
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
					cout << "You have successfuly created and alliance with " << foa[al_attempt-10]->getFirstName() << "." << endl;
					foa[al_attempt-10]->allied=foa[al_attempt-10]->allied+1;
					foa[choice-10]->allies_made=foa[choice-10]->allies_made+5;
			 
					D_actions++;
				}
				//Neutral
				if(al_result<74 && al_result>15)
				{	
					
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+60; // Change this to the line number you want to read
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
					cout << "You have failed to create an alliance with " << foa[al_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
				}
				//NEGATIVE RESULT
				if(al_result<=15)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+70; // Change this to the line number you want to read
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
					D_actions++;
					cout <<"You have become enemies with " << foa[al_attempt-10]->getFirstName() << "." << endl;
				}
				cout << " " << endl;
			
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
			
				
				if(i != choice && foa[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << foa[i]->getFirstName() << endl;
				}
			}
			cin >> trust_attempt;
			
					cout << " " << endl;
					cout << "You started a conversation with " << foa[trust_attempt-10]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESS
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
						int targetLine = trust_attempt+80; // Change this to the line number you want to read
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
					cout << "You have successfuly built trust with " << foa[trust_attempt-10]->getFirstName() << "." << endl;
					foa[trust_attempt-10]->trust=foa[trust_attempt-10]->trust+5;
					foa[choice-10]->trust_made=foa[choice-10]->trust_made+5;
					cout << " " << endl;
					D_actions++;
					}
					//NEUTRAL
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
						int targetLine = trust_attempt+100; // Change this to the line number you want to read
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
					cout << "You have failed to build trust with " << foa[trust_attempt-10]->getFirstName() << "." << endl;
					cout << " " << endl;
					D_actions++;
				}
				//NEGATIVE RESULT
				if(trust_result<=15)
				{
					
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							return 1;
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+90; // Change this to the line number you want to read
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
					D_actions++;
					cout <<"You have lost trust with " << foa[trust_attempt-10]->getFirstName() << "." << endl;\
						if(foa[trust_attempt-10]->trust!=0)
						{
						foa[trust_attempt-10]->trust=foa[trust_attempt-10]->trust-5;
						cout << " " << endl;
						}
				}
		}
		if(Day_Choice==4)
		{
			
			int do_nothing_result=0;
			cout << "You have decided to do nothing" << endl;
			do_nothing_result= rand() % 100;
			//SUCCESS
			if (do_nothing_result>75)
			{
				D_actions++;
			}
			//NEUTRAL
			if(do_nothing_result<75 && do_nothing_result>15)
			{
				D_actions++;
			}
			//NEGATIVE
			if(do_nothing_result<15)
			{
				D_actions++;
			}
			
			
		}
		
		
		}
	};
static void IndvidualChallengeS(Samoa* galu[],  Samoa* foa[], int number_survivors_per_tribe )
{	
		
        int PerformanceStrengthHeroes = 0, PerformanceStrengthVillains = 0;
        int BestStrenghtHeroes=0, BestStrengthVillains=0;
        int tempy1=0; int tempy2=0;
        int VillainStrength;
		int HeroStrength;
        string BestHero; string BestVillain;
		string HeroName; string VillainName;
   do
   {// Calculate total strength for Heroes tribe
        for (int i = 0; i < number_survivors_per_tribe; ++i) 
        {
            if (galu[i]->getEliminated()==0) 
            {
         do
            {
				HeroStrength=galu[i]->strength;
                 HeroName=galu[i]->getFirstName();
                PerformanceStrengthHeroes=rand() % HeroStrength;
               
		   }while(tempy1==PerformanceStrengthHeroes);
			
				if(PerformanceStrengthHeroes>BestStrenghtHeroes)
				{
					BestStrenghtHeroes=PerformanceStrengthHeroes;
					tempy1=BestStrenghtHeroes;
					BestHero=galu[i]->getFirstName();
				}
		}
             
                cout << HeroName << " Strength is: " << HeroStrength << " Performed: " << PerformanceStrengthHeroes << endl;
           }
         for (int i = 0; i <number_survivors_per_tribe; ++i) 
        {
            if (foa[i]->getEliminated()==0) 
            {
				do
				{
				VillainStrength=foa[i]->strength;
                 VillainName=foa[i]->getFirstName();
                PerformanceStrengthVillains=rand() % VillainStrength;
				}while(tempy2==PerformanceStrengthVillains);
             
				if(PerformanceStrengthVillains>BestStrengthVillains)
				{
					BestStrengthVillains=PerformanceStrengthVillains;
					tempy2=BestStrengthVillains;
					BestVillain=foa[i]->getFirstName();
				}
			}
                
              cout << VillainName << " Strength is: " << VillainStrength << " Performed: " << PerformanceStrengthVillains << endl;
           }
	   }while(tempy1==tempy2);
	   
	if (BestStrenghtHeroes > BestStrengthVillains)
	{
        cout << BestHero << " Wins Immunity!" << endl;
        // Set immunity for the winning hero
        for (int i = 0; i < number_survivors_per_tribe; ++i)
        {
            if (!galu[i]->getEliminated()==0 && galu[i]->getFirstName() == BestHero)
            {
                galu[i]->immune=1;
                galu[i]->challenge_wins+=1;
                break;
            }
        }
    }
    else
    {
        cout << BestVillain << " Wins Immunity!" << endl;
        // Set immunity for the winning villain
        for (int i = 0; i < number_survivors_per_tribe; ++i)
        {
            if (foa[i]->getEliminated()==0 && foa[i]->getFirstName() == BestVillain)
            {
                foa[i]->immune=1;
                foa[i]->challenge_wins+=1;
                break;
            }
		}
	}

	  
	}
void random_eventS()
{
int random_number = 0;
			switch (random_number)
			{
			case 1:
				cout << "Whoops! You've tripped and fell. You're a little shaken up, but thankfully have no injuries." << endl;
				break;
			case 2:
				cout << "Whoops! You've tripped and fell. Unfortunately, you twisted your ankle and have suffered the consequences." << endl;
				cout << "-1 Strength" << endl;
				// NEED TO FIGURE OUT HOW TO SUBTRACT FROM PLAYERS STRENGTH LEVEL
				break;
			case 3:
				cout << "Night time roles around..." << endl;
				cout << "You wake up in the middle of the night. Someone is snoring extremely loud. You are frustrated and have trouble falling back asleep." << endl;
				cout << "As a result, you've lost strength due to lack of sleep." << endl;
				cout << "-1 Strength" << endl;
				// NEED TO FIGURE OUT HOW TO SUBTRACT FROM PLAYERS STRENGTH LEVEL
				break;
			case 4:
				cout << "You're feeling overwhelmed from today's events, but the weather cheers you up. Hopefully tomorrow is a better day." << endl;
				break;
			case 5:
				cout << "After dinner, you're feeling full and nourished." << endl;
				cout << "+1 Strength" << endl;
				// NEED TO FIGURE OUT HOW TO SUBTRACT FROM PLAYERS STRENGTH LEVEL
				break;
			case 6:
				cout << "You found a little bit of extra food in the forest." << endl;
				cout << "+1 Strength" << endl;
				break;
			case 7:
				cout << "You're wondering through the forest when you find a snake! Thankfully, it quickly slithers away in fear." << endl;
				break;
			case 8:
				cout << "" << endl;
				break;
			case 9:
				break;
			case 10:
				break;
			}
	}
static void Villains_Tribal_CouncilS(Samoa* foa[], int number_survivor_per_tribe, int choice)
{
	int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;
	 int numVillains = 0;
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (foa[i]->getEliminated() ==0 )
        {
            numVillains++;
        }
        

    }

if(choice>9)
{
	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( foa[i]->getEliminated()==0&& foa[i]->getPlayerCharacter()==0)
		{
		cout << foa[i]->getFirstName() << endl;
		}
	}
	int user_vote;
	cin >> user_vote;
	user_vote=user_vote-10;
	foa[user_vote]->setVotesAgainst(1);
}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(foa[i]->getEliminated()==0 && foa[i]->getPlayerCharacter()==0)
		{
			if(foa[i]->getAllied()==2)
			{
				cpu_vote=choice-10;
			}
			int total_votes=0;
			if(foa[i]->getAllied()!=2)
			{
				do
				{
					cpu_vote=rand() % numVillains;
				}while(cpu_vote==i && foa[cpu_vote]->getEliminated()==0 && foa[i]->getAllied()==0);
			}
			
			cout <<foa[i]->getFirstName() << " Voted: " <<  foa[cpu_vote]->getFirstName() << endl;
			total_votes=foa[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			foa[cpu_vote]->setVotesAgainst(total_votes);
			
		}
		
	}


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(foa[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=foa[i]->getVotesAgainst();
				MostVotedSurvivor=foa[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(foa[i]->getVotesAgainst()> SecondMost && foa[i]->getVotesAgainst()<=MostVotes && foa[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=foa[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		rocks=rand()%numVillains;
		
		cout << foa[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << foa[rocks]->getFirstName() << " the tribe has spoken" << endl;
		foa[rocks]->setEliminate(1);
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << foa[MostVotedSurvivor-10]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << foa[MostVotedSurvivor-10]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	foa[MostVotedSurvivor-10]->setEliminate(1);
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	foa[i]->setVotesAgainst(0) ;
	}


}
static void Heroes_Tribal_CouncilS(Samoa* galu[], int number_survivor_per_tribe, int choice)
{
	int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;
	 int numHeroes = 0;
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (galu[i]->getEliminated() ==0 )
        {
            numHeroes++;
        }
        

    }
	if(choice<10)
	{
	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( galu[i]->getEliminated()==0 && galu[i]->getPlayerCharacter()==0)
		{
		cout << galu[i]->getFirstName() << endl;
		}
	}
	int user_vote;
	cin >> user_vote;
	galu[user_vote]->setVotesAgainst(1);
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(galu[i]->getEliminated()==0 && galu[i]->getPlayerCharacter()==0)
		{
			if(galu[i]->getAllied()==2)
			{
				cpu_vote=choice;
			}
			int total_votes=0;
			if(galu[i]->getAllied()!=2)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i && galu[cpu_vote]->getEliminated()==0 && galu[i]->getAllied()==0);
			}
			
			cout <<galu[i]->getFirstName() << " Voted: " <<  galu[cpu_vote]->getFirstName() << endl;
			total_votes=galu[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			galu[cpu_vote]->setVotesAgainst(total_votes);
			
		}
		
	}


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(galu[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=galu[i]->getVotesAgainst();
				MostVotedSurvivor=galu[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(galu[i]->getVotesAgainst()> SecondMost && galu[i]->getVotesAgainst()<=MostVotes && galu[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=galu[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		rocks=rand()%numHeroes;
		
		cout << galu[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << galu[rocks]->getFirstName() << " the tribe has spoken" << endl;
		galu[rocks]->setEliminate(1);
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << galu[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << galu[MostVotedSurvivor]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	galu[MostVotedSurvivor]->setEliminate(1);
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	galu[i]->setVotesAgainst(0) ;
	}


}
};

class HvV: public Survivor
{
	protected:
	int Idol;
	public:
	HvV(string first_name, string tribe, int strength, int vote_ID, int player, int tricks, int votes_against, int elim, int allied, int sit_out, int trust, int immune,int enemies ,int tribe_immune, int challenge_wins, int allies_made,int trust_made, int Idol): Survivor (first_name, tribe, strength, vote_ID,player,tricks,votes_against, elim, allied, sit_out,  trust, immune,enemies, tribe_immune, challenge_wins, allies_made, trust_made)
		{
			this->Idol=Idol;
		}
//This runs the challeges for the tribe phase
//The strenght of each survior is added together for each team, then a random number is selected
//Higher the strenght is the more higher numbers they will get, so in theory a better chance to win 
static void tribeChallenge(HvV* heroes[], HvV* villains[], int number_survivor_per_tribe, int choice, int blindside_result)
{	
    int numHeroes = 0;
    int numVillains = 0;
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (heroes[i]->getEliminated() ==0 )
        {
            numHeroes++;
            
        }
        if (villains[i]->getEliminated() ==0)
        {
            numVillains++;
            
        }
    }
	
    // Determine if any tribe needs to sit out members
    if (numHeroes > numVillains)
    {
        cout << "Heroes you have " << numHeroes - numVillains << " extra members. You need to sit out " << numHeroes - numVillains << " people of the challenge" << endl;
        // Code for heroes sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			if(heroes[i]->getEliminated()==0)
			{
			cout << heroes[i]->getFirstName() << endl;
			}
		}
        for(int i=0; i<=numHeroes-numVillains; i++)
				{
					int sitting;
					do{
					cin >> sitting;
					}while(sitting<0 && heroes[sitting]->getEliminated()==1);
					heroes[sitting]->sit_out=heroes[sitting]->sit_out+1;
				}
						
    }
    if (numHeroes < numVillains)
    {
       cout << "Villains you have " << numVillains - numHeroes << " extra members. You need to sit out " << numVillains - numHeroes << " people out of the challenge" << endl;
        // Code for villains sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			if(villains[i]->getEliminated()==0)
			{
			cout << villains[i]->getFirstName()<< endl;
			}
		}
        for(int i=0; i<=numVillains-numHeroes; i++)
        {
				int sitting=0;
				do{
				cin >> sitting;
				}while(sitting<0 && villains[sitting]->getEliminated()==1);
				villains[sitting-10]->sit_out=villains[sitting-10]->sit_out+1;
			
		}
						
    }
		
    int totalStrengthHeroes = 0, totalStrengthVillains = 0;
	int HeroP=0; int VillainP=0;
    // Calculate total strength for Heroes tribe
    for (int i = 0; i < number_survivor_per_tribe; ++i)
    {
	
        if (heroes[i]->getEliminated()==0 && heroes[i]->getSittingOut()==0)
        {
            totalStrengthHeroes += heroes[i]->getStrength();
        }
    }
		HeroP=rand() % totalStrengthHeroes;

    // Calculate total strength for Villains tribe
    for (int i = 0; i < number_survivor_per_tribe; ++i)
    {
        if (villains[i]->getEliminated()==0 && villains[i]->getSittingOut() ==0)
        {
            totalStrengthVillains += villains[i]->getStrength();
        }
    }
		VillainP=rand() % totalStrengthVillains;
		
    // Display total tribe strength and challenge performance
   
    cout << "Heroes Challenge Strength: " << totalStrengthHeroes << " Performed: " << HeroP << endl;
    cout << "Villains Challenge Strength: " << totalStrengthVillains << " Performed: " << VillainP << endl;

    // Determine the winner based on total strengths
    if (HeroP > VillainP)
    {
        cout << "Heroes Win Immunity! Sending the Villains Tribe to Tribal Council" << endl;
        // Code for updating heroes' immunity status
        cout << " " << endl;
        HvV:: Villains_Tribal_Council( villains, number_survivor_per_tribe, choice, blindside_result);
    }
    else if (VillainP > HeroP)
    {
		cout<< " " << endl;
        cout << "Villains Win Immunity! Sending the Heroes Tribe to Tribal Council" << endl;
        // Code for updating villains' immunity status
        cout << " " << endl;
			HvV:: Heroes_Tribal_Council( heroes, number_survivor_per_tribe, choice, blindside_result);
    
    }
}
//This allows the user to select the survivor that they want to play as
//First given the option to pick their tribe, then select from 10 different characters
int selectSurvivor(HvV* heroes[], int numSurvivors)
{
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout << heroes[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        do{
        cin >> choice;
        }while(choice<0 && choice>9);
        if (choice<=9 && choice>=0) 
        {
            cout << " " << endl;
            cout << "You have chosen " << heroes[choice]->getFirstName() << endl;
            cout << " " << endl;
           heroes[choice]->setPlayerCharacter(1);
            return choice;
            
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            return selectSurvivor(heroes, numSurvivors);
        }
    }

int selectSurvivorVillain(HvV* villain[], int numSurvivors)
{
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout << villain[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        do{
			cin >> choice;
		}while(choice<10 && choice>19);
        if (choice>=10 && choice<=19) 
        {
            cout << " " << endl;
            cout << "You have chosen " << villain[choice-10]->getFirstName() << endl;
            cout << " " << endl;
             villain[choice-10]->setPlayerCharacter(1);
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
 void day_actions_hero(HvV* heroes[], int number_survivors_per_tribe, int choice)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		cout << " " << endl;
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(heroes[choice]->enemies>0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5)Mend Relationships" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(heroes[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>4);
		}
		
		if(Day_Choice==1)
		{
			//This will give the player a chance to make an alliance with another player 
			cout << "Who do you want to attempt to make an alliance with?" << endl;
			cout << " " << endl;
			int al_attempt;
			
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && heroes[i]->allied==0 && heroes[i]->allied!=2 && heroes[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << heroes[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(heroes[al_attempt]->getEliminated()==1);
					cout << " " << endl;
					cout << "You talk to " << heroes[al_attempt]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				//SUCCESS
				if(al_result>74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;

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
					heroes[al_attempt]->setAllied(1);
					heroes[choice]->allies_made=heroes[choice]->allies_made+5;
					
					D_actions++;
				}
				//NETURAL RESULT
				if(al_result<=74 && al_result>15)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
				//NEGATIVE RESULT +40
				if(al_result<=15)
				{
						ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+40; // Change this to the line number you want to read
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
								
					cout <<"You have become enemies with " << heroes[al_attempt]->getFirstName() << "." << endl;
					heroes[al_attempt]->setAllied(2);
					heroes[choice]->enemies=heroes[choice]->enemies+1;
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
		
			int trust_attempt;
			
			
			cout << "Who do you want to build trust with? " << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
				
				if(i != choice && heroes[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << heroes[i]->getFirstName() << endl;
				}
			}
			do{
			cin >> trust_attempt;
			}while(heroes[trust_attempt]->getEliminated()==1);
			
					cout << " " << endl;
					cout << "You started a conversation with " << heroes[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
				if(trust_result>74)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
					int new_trust=heroes[trust_attempt]->getTrust()+5;
					heroes[trust_attempt]->setTrust(new_trust);
					cout <<"You now have " << heroes[trust_attempt]->getTrust()<< " with  " << heroes[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					
					D_actions++;
					}
					//NEUTRAL RESULT
				if(trust_result<=74 && trust_result>15)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+50; // Change this to the line number you want to read
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
					cout <<"You now have " << heroes[trust_attempt]->getTrust()<< " with  " << heroes[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					D_actions++;
				}
									//NEGATVIE RESULT trust_attempt 
					if(trust_result<=15)
					{
							ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
						
						
						cout <<"You have lost trust with " << heroes[trust_attempt]->getFirstName() << "." << endl;
						if(heroes[trust_attempt]->trust!=0)
						{
						heroes[trust_attempt]->trust=heroes[trust_attempt]->trust-5;
						}
						cout <<"You now have " << heroes[trust_attempt]->getTrust()<< " with  " << heroes[trust_attempt]->getFirstName() << "." << endl;
						cout << " "<< endl;
						
						D_actions++;
					}
		}
		if(Day_Choice==4)
		{
			//This will have the chance to increase a character's strenght 
			
			int do_nothing_result=0;
			cout << "You have decided to do nothing" << endl;
			do_nothing_result= rand() % 100;
			//SUCCESS
			if (do_nothing_result>75)
			{
				cout << " " << endl;
				cout << "You manage to get some good rest in the shelter" << endl;
				cout << "You gain +1 strenght!" << endl;
				cout << " " << endl;
				int upgrade =heroes[choice]->getStrength() +1;
				heroes[choice]->setStrength(upgrade);
				cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<=75 && do_nothing_result>15)
			{
				cout << " " << endl;
				cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<=15)
			{
				int jugement=0;
				
				 jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << heroes[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(heroes[jugement]->getTrust()>0)
					{
					int new_trust =heroes[jugement]->getTrust()-5;
					heroes[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << heroes[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << heroes[jugement]->getFirstName() <<" is now " << heroes[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			D_actions++;
		cout << heroes[choice]->strength<< " is current strength for you" << endl;
		}
		if(Day_Choice==5)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && heroes[i]->allied==2 && heroes[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << heroes[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
		}while(heroes[mend_choice]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << heroes[mend_choice]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  heroes[mend_choice]->getFirstName() << endl;
			D_actions++;
			}
			if(fix_friend>=50)
			{
				cout << heroes[mend_choice]->getFirstName() << " accepts your apology" << endl;
				cout <<heroes[mend_choice]->getFirstName() << " is no longer you enemy" << endl;
				int new_E;
				new_E=heroes[choice]->getEnemies();
				heroes[choice]->setEnemies(new_E);
				heroes[mend_choice]->setAllied(0);
				D_actions++;
			}
			
		}
		
		
	}
	
} ;
 void day_actions_villain(HvV* villains[], int number_survivors_per_tribe, int choice)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		
		cout << " " << endl;
		int Day_Choice;
		if(villains[choice-10]->enemies>0)
		{
			
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do Nothing 5)Mend Relationships" << endl;
			do{
			cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(villains[choice-10]->enemies==0)
		{
		
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do Nothing" << endl;
			do{
			cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>4);
		}
		
	
		
		if(Day_Choice==1)
		{
			cout << "Who do you want to attempt to make an alliance with?" << endl;
			cout << " " << endl;
			
			int al_attempt;
			
				
				
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
			
				
				if(i != choice-10 && villains[i]->allied==0 && villains[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << villains[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(villains[al_attempt-10]->getEliminated()==1);
					cout << " " << endl;
					cout << "You talk to " << villains[al_attempt-10]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				//SUCCESS
				if(al_result>74)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
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
					cout << "You have successfuly created and alliance with " << villains[al_attempt-10]->getFirstName() << "." << endl;
					villains[al_attempt-10]->setAllied(1);
					villains[choice-10]->allies_made=villains[choice-10]->allies_made+5;
					
					
				}
				//Neutral
				if(al_result<=74 && al_result>15)
				{	
					
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
								
									}
									line_count++;
								}
								 

								// Close the file
								inputFile.close();
					cout << " " << endl;
					cout << "You have failed to create an alliance with " << villains[al_attempt-10]->getFirstName() << "." << endl;
					
				
				}
				//NEGATIVE RESULT
				if(al_result<=15)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = al_attempt+30; // Change this to the line number you want to read
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
					cout <<"You have become enemies with " << villains[al_attempt-10]->getFirstName() << "." << endl;
					villains[al_attempt-10]->setAllied(2);
					villains[choice-10]->enemies=villains[choice-10]->enemies+1;
				}
				cout << " " << endl;
			D_actions++;
					
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

				if(i+10 != choice && villains[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
				cout << villains[i]->getFirstName() << endl;
				}
			}
			do{
			cin >> trust_attempt;
			}while(villains[trust_attempt-10]->getEliminated()==1);
					cout << " " << endl;
					cout << "You started a conversation with " << villains[trust_attempt-10]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESS
				if(trust_result>74)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
					int new_trust=0;
					new_trust=villains[trust_attempt-10]->getTrust()+5;
					villains[trust_attempt-10]->setTrust(new_trust);
					
					villains[choice-10]->trust_made=villains[choice-10]->trust_made+5;
							
								if(villains[5]->getTrust()>25)
								{
									cout << "Would you like to kiss Coach Wade?'" <<endl;
									cout << "1) Of Course 2) No Way Jose" << endl;
									int kiss_coach;
									cin >> kiss_coach;
									cout << "You give Coach a kiss under the sun set" << endl;
									cout << "Coach 'You know it can be like this forever" << endl;
									cout << "You nuzzle yourself against Coach Wade " << endl;
								}
					cout <<"You now have " << villains[trust_attempt-10]->getTrust()<< " with  " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
					}
					//NEUTRAL
					if(trust_result<74)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = trust_attempt+40; // Change this to the line number you want to read
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
					cout << "You have neither gained or lost  trust with " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
				}
				//NEGATIVE RESULT
				if(trust_result<=15)
				{
					
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
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
					D_actions++;
					cout <<"You have lost trust with " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					if(villains[trust_attempt]->trust!=0)
					{
					villains[trust_attempt-10]->trust=villains[trust_attempt-10]->trust-5;
					}
					cout <<"You now have " << villains[trust_attempt-10]->getTrust()<< " with  " << villains[trust_attempt-10]->getFirstName() << "." << endl;
					
				}
		}
		if(Day_Choice==4)
		{
			
			int do_nothing_result=0;
			cout << "You have decided to do nothing" << endl;
			do_nothing_result= rand() % 100;
			//SUCCESS
			if (do_nothing_result>=75)
			{
				cout << " " << endl;
				cout << "You manage to get some good rest in the shelter" << endl;
				cout << "You gain +1 strength!" << endl;
				int upgrade =villains[choice-10]->getStrength() +1;
				villains[choice-10]->setStrength(upgrade);
				cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<75 && do_nothing_result>=25)
			{
				cout << " " << endl;
					cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<25)
			{
				int jugement=0;
				
				jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << villains[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(villains[jugement]->getTrust()>0)
					{
					int new_trust =villains[jugement]->getTrust()-5;
					villains[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << villains[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << villains[jugement]->getFirstName() <<" is now " << villains[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
				cout << " " << endl;
			}
			
			D_actions++;
		}
		if(Day_Choice==5)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && villains[i]->allied==2 && villains[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout << villains[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
			}while(villains[mend_choice-10]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << villains[mend_choice-10]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  villains[mend_choice-10]->getFirstName() << endl;
			}
			if(fix_friend>=50)
			{
				cout << villains[mend_choice-10]->getFirstName() << " accepts your apology" << endl;
				cout <<villains[mend_choice-10]->getFirstName() << " is no longer you enemy" << endl;
				
					int new_E;
				new_E=villains[choice-10]->getEnemies();
				villains[choice-10]->setEnemies(new_E);
				villains[mend_choice-10]->setAllied(0);
				D_actions++;
			}
			D_actions++;
		}
		
		
		}
	};
static void IndvidualChallenge(HvV* heroes[],  HvV* villains[], int number_survivors_per_tribe)
{	
		
        int PerformanceStrengthHeroes = 0, PerformanceStrengthVillains = 0;
        int BestStrenghtHeroes=0, BestStrengthVillains=0;
        int tempy1=0; int tempy2=0;
        int VillainStrength;
		int HeroStrength;
        string BestHero; string BestVillain;
		string HeroName; string VillainName;
   do
   {// Calculate total strength for Heroes tribe
        for (int i = 0; i < number_survivors_per_tribe; ++i) 
        {
            if (heroes[i]->getEliminated()==0) 
            {
         do
            {
				HeroStrength=heroes[i]->strength;
                 HeroName=heroes[i]->getFirstName();
                PerformanceStrengthHeroes=rand() % HeroStrength;
               
		   }while(tempy1==PerformanceStrengthHeroes);
			
				if(PerformanceStrengthHeroes>BestStrenghtHeroes)
				{
					BestStrenghtHeroes=PerformanceStrengthHeroes;
					tempy1=BestStrenghtHeroes;
					BestHero=heroes[i]->getFirstName();
				}
		}
                
                cout << HeroName << " Strength is: " << HeroStrength << " Performed: " << PerformanceStrengthHeroes << endl;
           }
         for (int i = 0; i <number_survivors_per_tribe; ++i) 
        {
            if (villains[i]->getEliminated()==0) 
            {
				do
				{
				VillainStrength=villains[i]->strength;
                 VillainName=villains[i]->getFirstName();
                PerformanceStrengthVillains=rand() % VillainStrength;
				}while(tempy2==PerformanceStrengthVillains);
               
			
				if(PerformanceStrengthVillains>BestStrengthVillains)
				{
					BestStrengthVillains=PerformanceStrengthVillains;
					tempy2=BestStrengthVillains;
					BestVillain=villains[i]->getFirstName();
				}
			}
                
              cout << VillainName << " Strength is: " << VillainStrength << " Performed: " << PerformanceStrengthVillains << endl;
           
           
           
           }
       
          
	   }while(tempy1==tempy2);
	   
	if (BestStrenghtHeroes > BestStrengthVillains)
	{
        cout << BestHero << " Wins Immunity!" << endl;
        // Set immunity for the winning hero
        for (int i = 0; i < number_survivors_per_tribe; ++i)
        {
            if (heroes[i]->getEliminated()==0 && heroes[i]->getFirstName() == BestHero)
            {
                heroes[i]->immune=1;
                heroes[i]->challenge_wins+=1;
                break;
            }
        }
    }
    else
    {
        cout << BestVillain << " Wins Immunity!" << endl;
        // Set immunity for the winning villain
        for (int i = 0; i < number_survivors_per_tribe; ++i)
        {
            if (villains[i]->getEliminated()==0 && villains[i]->getFirstName() == BestVillain)
            {
                villains[i]->immune=1;
                villains[i]->challenge_wins+=1;
                break;
            }
		}
	}

	  
	}
static void Heroes_Tribal_Council(HvV* heroes[], int number_survivor_per_tribe, int choice, int blindside_result)
{
	int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;
	 int numHeroes = 0;
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (heroes[i]->getEliminated() ==0 )
        {
            numHeroes++;
        }
        

    }
	if(choice<10)
	{
	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( heroes[i]->getEliminated()==0 && heroes[i]->getPlayerCharacter()==0)
		{
		cout << heroes[i]->getFirstName() << endl;
		}
	}
	int user_vote;
	do{
	cin >> user_vote;
	}while(heroes[user_vote]->getEliminated()==1);
	heroes[user_vote]->setVotesAgainst(1);
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(heroes[i]->getEliminated()==0 && heroes[i]->getPlayerCharacter()==0)
		{
			if(heroes[i]->getAllied()==2)
			{
				cpu_vote=choice;
			}
			int total_votes=0;
			if(heroes[i]->getAllied()==0)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i && heroes[cpu_vote]->getEliminated()==0 && heroes[i]->getAllied()==0);
			}
			
			if(heroes[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<1)
				{
					do
					{
						cpu_vote=rand() % numHeroes;
					}while(cpu_vote==i || heroes[cpu_vote]->getEliminated()==1 ||(heroes[i]->getAllied()==1 && heroes[cpu_vote]->getPlayerCharacter()==1));
				}
				if(blindside_result>1)
				{
					cout << "BLINDSIDE" << endl;
					cpu_vote =choice-10;
				}
				
			}
			
			cout <<heroes[i]->getFirstName() << " Voted: " <<  heroes[cpu_vote]->getFirstName() << endl;
			total_votes=heroes[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			heroes[cpu_vote]->setVotesAgainst(total_votes);
			
		}
		
	}


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(heroes[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=heroes[i]->getVotesAgainst();
				MostVotedSurvivor=heroes[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(heroes[i]->getVotesAgainst()> SecondMost && heroes[i]->getVotesAgainst()<=MostVotes && heroes[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=heroes[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		rocks=rand()%numHeroes;
		
		cout << heroes[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << heroes[rocks]->getFirstName() << " the tribe has spoken" << endl;
		heroes[rocks]->setEliminate(1);
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << heroes[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << heroes[MostVotedSurvivor]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	heroes[MostVotedSurvivor]->setEliminate(1);
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	heroes[i]->setVotesAgainst(0) ;
	}


}

static void Villains_Tribal_Council(HvV* villains[], int number_survivor_per_tribe, int choice, int blindside_result)
{
	
	 int numVillains = 0;
	 
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (villains[i]->getEliminated() ==0 )
        {
            numVillains++;
        }
        

    }

if(choice>9)
{

	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( villains[i]->getEliminated()==0&& villains[i]->getPlayerCharacter()==0)
		{
		cout << villains[i]->getFirstName() << endl;
		}
	}
	int user_vote;
	do{
	cin >> user_vote;
	}while(villains[user_vote]->getEliminated()==1);
	user_vote=user_vote-10;
	villains[user_vote]->setVotesAgainst(1);
}
	
		for(int i=0; i<number_survivor_per_tribe; i++)
		{
		
				
		//ENEMY VOTE
		if(villains[i]->getEliminated()==0 && villains[i]->getPlayerCharacter()==0)
		{
			
			if(villains[i]->getAllied()==2)
			{
				
				cpu_vote=choice-10;
			}
			
			int total_votes=0;
		//NEUTRAL TOWARD PLAYER VOTE	
		if(villains[i]->getAllied()==0)
			{
				
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i && villains[cpu_vote]->getEliminated()==1&& (villains[i]->getAllied()==1 && i==choice-10));
			}
		//ALLIES VOTE
		if(villains[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<1)
				{
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i || villains[cpu_vote]->getEliminated()==1 ||(villains[i]->getAllied()==1 && villains[cpu_vote]->getPlayerCharacter()==1));
				}
				if(blindside_result>1)
				{
					cout << "BLINDSIDE" << endl;
					cpu_vote =choice-10;
				}
				
			}
		
			cout <<villains[i]->getFirstName() << " Voted: " <<  villains[cpu_vote]->getFirstName() << endl;
			total_votes=villains[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			villains[cpu_vote]->setVotesAgainst(total_votes);
			
		}
	}
	int MostVotes=0;
			int SecondMost=0;
			int MostVotedSurvivor=0;
		


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(villains[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=villains[i]->getVotesAgainst();
				MostVotedSurvivor=villains[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(villains[i]->getVotesAgainst()> SecondMost && villains[i]->getVotesAgainst()<=MostVotes && villains[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=villains[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		rocks=rand()%numVillains;
		
		cout << villains[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << villains[rocks]->getFirstName() << " the tribe has spoken" << endl;
		villains[rocks]->setEliminate(1);
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << villains[MostVotedSurvivor-10]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << villains[MostVotedSurvivor-10]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	villains[MostVotedSurvivor-10]->setEliminate(1);
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	villains[i]->setVotesAgainst(0) ;
	}


}

void random_event_villian(HvV* villains[], int choice)
{
	int random_Number_event = rand() % 10 + 1;
	int upgrade1 = villains[choice-10]->getStrength() - 1;
	int upgrade2 = villains[choice-10]->getStrength() + 1;
			switch (random_Number_event)
			{
			case 1:
				cout << "Whoops! You've tripped and fell. You're a little shaken up, but thankfully have no injuries." << endl;
				cout << "Your strength is unaffected." << endl;
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 2:
				cout << "Whoops! You've tripped and fell. Unfortunately, you twisted your ankle and have suffered the consequences." << endl;
				cout << "-1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade1);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 3:
				cout << "Night time roles around..." << endl;
				cout << "You wake up in the middle of the night. Someone is snoring extremely loud. You are frustrated and have trouble falling back asleep." << endl;
				cout << "As a result, you've lost strength due to lack of sleep." << endl;
				cout << "-1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade1);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 4:
				cout << "You're feeling overwhelmed from today's events, but the weather cheers you up. Hopefully tomorrow is a better day." << endl;
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 5:
				cout << "After eating, you're feeling full and nourished." << endl;
				cout << "+1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade2);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 6:
				cout << "You found a little bit of extra food in the forest." << endl;
				cout << "+1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade2);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 7:
				cout << "You're wondering through the forest when you find a snake! Thankfully, it quickly slithers away in fear." << endl;
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 8:
				cout << "Wow, the lack of food is starting to get to you. You're craving a nice, juicy steak." << endl;
				cout << "-1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade1);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 9:
				cout << "You start feeling sick. Hopefully you can recover quickly in time for the next challenge." << endl;
				cout << "-1 Strength" << endl;
				villains[choice-10]->setStrength(upgrade1);
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 10:
				cout << "You're starting to miss your family. Next time you see them, hopefully you'll be $1 million richer!" << endl;
					cout << "You now have " << villains[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			default:
				break;
			}
};

void random_event_hero(HvV* heroes[], int choice)
{
	int random_Number_event1 = rand() % 10 + 1;
	int upgrade3 = heroes[choice]->getStrength() - 1;
	int upgrade4 = heroes[choice]->getStrength() + 1;
	switch (random_Number_event1)
	{
	case 1:
		cout << "Whoops! You've tripped and fell. You're a little shaken up, but thankfully have no injuries." << endl;
		cout << "Your strength is unaffected." << endl;
				cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 2:
		cout << "Whoops! You've tripped and fell. Unfortunately, you twisted your ankle and have suffered the consequences." << endl;
		cout << "-1 Strength" << endl;
		heroes[choice]->setStrength(upgrade3);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 3:
		cout << "Night time roles around..." << endl;
		cout << "You wake up in the middle of the night. Someone is snoring extremely loud. You are frustrated and have trouble falling back asleep." << endl;
		cout << "As a result, you've lost strength due to lack of sleep." << endl;
		cout << "-1 Strength" << endl;
		heroes[choice]->setStrength(upgrade3);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 4:
		cout << "You're feeling overwhelmed from today's events, but the weather cheers you up. Hopefully tomorrow is a better day." << endl;
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 5:
		cout << "After eating, you're feeling full and nourished." << endl;
		cout << "+1 Strength" << endl;
		heroes[choice]->setStrength(upgrade4);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 6:
		cout << "You found a little bit of extra food in the forest." << endl;
		cout << "+1 Strength" << endl;
		heroes[choice]->setStrength(upgrade4);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 7:
		cout << "You're wondering through the forest when you find a snake! Thankfully, it quickly slithers away in fear." << endl;
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 8:
		cout << "Wow, the lack of food is starting to get to you. You're craving a nice, juicy steak." << endl;
		cout << "-1 Strength" << endl;
		heroes[choice]->setStrength(upgrade3);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 9:
		cout << "You start feeling sick. Hopefully you can recover quickly in time for the next challenge." << endl;
		cout << "-1 Strength" << endl;
		heroes[choice]->setStrength(upgrade3);
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 10:
		cout << "You're starting to miss your family. Next time you see them, hopefully you'll be $1 million richer!" << endl;
			cout << "You now have " << heroes[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	default:
		break;
	}
};
};
        

int main() 
{
	int days=0;
	int replay=1;
	 srand(time(0));
    const int number_survivors_per_tribe = 10;
    //choice is how we will track the User's character
    int choice;
    
    
	cout << "Welcome to C++ Survivor!" << endl;
	cout << "What season would you like to play?" << endl;
	cout << "1)Heroes VS Villains 2)Samoa" << endl;
	int season;
	cin >> season;
	
	
	
switch(season)
	{
		case 1:
		
		
		
			
			while (replay==1)
				{
				// Initialize Survivor objects
				HvV* heroes[number_survivors_per_tribe] = 
				{
						//name           tribe         strength, vote_id, elim allied, trust, immune, enemies, tribe_I, challenge wins, allies made, trust built, Idol
        new HvV("#0 Sugar Kiper",  "Heroes",             13,        0, 0,0,        0,0,0,    0,    0,   0,        0, 0,           0,                  0,      0,        0),
        new HvV("#1 Stephenie LaGrossa",  "Heroes",      15,        1, 0, 0,      0, 0, 0,  0,    0,   0,        0,   0,         0,                  0,      0,        0),
        new HvV("#2 Cercie Fields",  "Heroes",           11,        2,  0, 0,     0, 0, 0,  0,    0,   0,        0 ,    0,       0,                  0,      0,        0),
        new HvV("#3 Tom Westman",  "Heroes",             16,        3, 0,   0,    0, 0, 0,  0,    0,   0,        0,       0,     0,                  0,      0,        0),
        new HvV("#4 James Clement",  "Heroes",           15,        4,  0,   0,   0, 0, 0,  0,   0,   0,        0,  0,          0,                  0,      0,        0),
        new HvV("#5 J.T Thomas",  "Heroes",              16,        5,  0, 0,     0, 0, 0,  0,    0,   0,        0,   0,         0,                  0,      0,        0),
        new HvV("#6 Amanda Kimmel",  "Heroes",           15,        6,  0, 0,     0, 0, 0,  9,    0,   0,        0,    0,        0,                  0,      0,        0),
        new HvV("#7 Candice Woodcock",  "Heroes",        14,        7,  0, 0,     0, 0, 0,  0,    0,   0,        0,     0,       0,                  0,      0,        0),
        new HvV("#8 Rupert Boneham",  "Heroes",          17,        8,  0, 0,     0, 0, 0,  0,    0,   0,        0,      0,      0,                  0,      0,        0),
        new HvV("#9 Colby Donaldson",  "Heroes",         15,        9,  0, 0,     0,  0, 0, 0,    0,   0,        0,       0,     0,                  0,      0,        0)
				};
    
    //It might be easier to make the allied and immune into bools. Theyre already just working as true or false basically
    //But I don't know which would be easier 
    
    //Strength will be a factor for challenges
    //vote_ID just corresponds with their place in the array, w
    //The vote_ID for the villians is a little weird, sometimes you have do -10
    //The ID's need to be different from the ones for the heros, this will be important during merge phase 
    
    
				HvV* villains[number_survivors_per_tribe] = 
				{
							//name           tribe    strength, vote_id, elim, allied, trust, immune, enemies, tribe_I, challenge wins, allies made, trust built, Idol
        new HvV("#10 Courtney Yates",  "Villains",    12,         10, 0,  0,   0,0, 0,    0,     0,   0,        0,      0,  0,              0,                0,         0),
        new HvV("#11 Russell Hantz",  "Villains",     15,         11, 0,   90,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0),
        new HvV("#12 Randy Bailey",  "Villains",      13,         12, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,      0,          0,                0,         0),
        new HvV("#13 Tyson Apostol",  "Villains",     17,         13, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,   0,             0,                0,         0),
        new HvV("#14 Boston Rob",  "Villains",        18,         14, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,   0,             0,                0,         0),
        new HvV("#15 Coach Wade",  "Villains",        14,         15, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0),
        new HvV("#16 Jerri Manthey",  "Villains",     15,         16, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,     0,           0,                0,         0),
        new HvV("#17 Sandra Diaz-Twine ",  "Villains",11,         17, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,          0),
        new HvV("#18 Parviti Shallow ",  "Villains",  16,         18, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0),
        new HvV("#19 Danielle DiLorenzo", "Villains", 16,         19, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,     0,           0,                0,         0)
				};
					
					//villains[0]->set_allied_made(50);
						for(int i=0; i<number_survivors_per_tribe; i++)
						{
							int newTricks=rand () % 100;
						villains[i]->setTricks(newTricks);
						//villains[i]->setAllied(1);
					
						}
							for(int i=0; i<number_survivors_per_tribe; i++)
						{
							int newTricks=rand () % 100;
						heroes[i]->setTricks(newTricks);
						}
					
				cout << "Would you like to play as a Hero or Villain? " << endl;
				cout <<"Press 1 for Hero. " << " " << "Press 2 for Villain" << endl;
						int character_choice;
						cin >> character_choice;
						//TEST
						for(int i=0; i<number_survivors_per_tribe; i++)
						{
						cout << villains[i]->getTricks() << endl;
						}
					if(character_choice == 1)
					{
					choice = heroes[0]->selectSurvivor(heroes, number_survivors_per_tribe);
					}
				if (character_choice == 2)
					{
					choice = villains[0]->selectSurvivorVillain(villains, number_survivors_per_tribe);

					}
	
	//TRIBAL STAGE 
    while(days<20)
    {
			int blindside_result=0;
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(villains[choice-10]->getAlliedMade()>15 && villains[choice-10]->getPlayerCharacter()==1)
				{
				
					int NewTricks= villains[i]->getTricks();
				
					int newTrust=villains[i]->getTrust();
				
					int blindside_chance=NewTricks-newTrust;
					
					 blindside_result=( rand() % blindside_chance);

					
				 }
			 }
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(heroes[choice-10]->getAlliedMade()>15 && heroes[choice-10]->getPlayerCharacter()==1)
				{
				
					int NewTricks= heroes[i]->getTricks();
				
					int newTrust=heroes[i]->getTrust();
				
					int blindside_chance=NewTricks-newTrust;
					
					 blindside_result=( rand() % blindside_chance);

					
				 }
			 }
					
				
			
	
		cout << "The remaining survivors are: " << endl;
		
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			if(heroes[i]->getEliminated()==0)
			{
			heroes[i]->print();
			}
		}
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			if(villains[i]->getEliminated()==0)
			{
			villains[i]->print();
			}
		}
		
		cout << " " << endl;
		cout << "It is day " << days << "!" << endl;
		cout << " " << endl;
		
				if(character_choice==1)
					{
					heroes[0]->day_actions_hero(heroes, number_survivors_per_tribe, choice);


					}
				if(character_choice==2)
					{
					villains[0]->day_actions_villain(villains, number_survivors_per_tribe, choice);
					}
	days=days+2;
	
	
				if(character_choice == 1)
					{
				
					int RNE = rand() % 100 + 1;
					if (RNE>50)
					{
						heroes[choice]->random_event_hero(heroes, choice);
					}
					}
				if (character_choice == 2)
					{
		
					int RNE = rand() % 100 + 1;
					if (RNE > 50)
					{
						villains[choice-10]->random_event_villian(villains, choice);
					}
					}
	
	cout << " " <<  endl;
	
	HvV::tribeChallenge(heroes , villains, number_survivors_per_tribe, choice, blindside_result);
	cout << " " << endl;
	}
	
	
	
	
	
	/*while (days>20 && days<35)
	{
HvV::IndvidualChallenge(heroes,villains,number_survivors_per_tribe);
    //NEED TO ADD TRIBAL COUNCLE FOR TRIBES 
    //day=day+2
	//}
	cout << " " << endl;
	days=days+2;
	}*/
	
	//MERGE BELOW
	//This needs work ASHLEY!!!!!!!!!!!!!!!!
	
	cout << " " << endl;
	cout << " " << endl;
	cout <<"Survivors you can drop your buffs, you are no longer two tribes" << endl;
	cout << "Welcome to the merge!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	
	if (days>20)
	{
		const int number_survivors_per_tribe = 9;

		HvV* combined[number_survivors_per_tribe];
		int index = 0;
	
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (heroes[i]->getEliminated() == 0) {
			combined[index++] = heroes[i];
		}
		}
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (villains[i]->getEliminated() == 0) {
			combined[index++] = villains[i];
		}
		}
		
		for (int i = 0; i < index; i++) {
			cout<<combined[i]->getFirstName() <<endl;
}
		int new_count = 0;
		//FINAL TRIBAL & JURY STAGE
		// IF WORKED, SHOULD DISPLAY THE 3 SURVIVORS
		// WHERE ASHLEY STOPPED
		cout << " SPACE " << endl;
		for (int i = 0; i < number_survivors_per_tribe * 2; i++)
		{
			if (combined[i] != nullptr)
			{
				cout << combined[i]->getFirstName() << endl;
				new_count++;
				if (new_count == 3)
				{
					break;
				}
			}
		}
	}
}


//Survivor::Loser();
	
//Survivor:: Winner();
	 //This is the end of the merge loop

	
break;
	
	/*			case 2:
	
						while(replay==1)
						{
						// Initialize Survivor objects
						Samoa* galu[number_survivors_per_tribe] = 
						{
						//name           tribe         strength, vote_id,elim, allied,sitout, trust, immune, enemies, tribe_I, challenge wins, allies made, trust built
        new Samoa("#0 Yasmin Giles",  "Galu",             13,        0,0,   0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#1 Russell Swan",  "Galu",             15,        1, 0,  0,  0,   0,0,	   5,    0, 0,     0,         0,       0,            0,                  0),
        new Samoa("#2 Erik Cardona",  "Galu",             11,        2, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0 ,           0,                  0),
        new Samoa("#3 Kelly Sharbaugh",  "Galu",          16,        3, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#4 John Fincher",  "Galu",             15,        4, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#5 Dave Ball",  "Galu",                16,        5, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#6 Monica Padilla",  "Galu",           15,        6, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#7 Shambo Waters",  "Galu",            14,        7, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#8 Brett Clouser",  "Galu",            17,        8, 0,  0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0),
        new Samoa("#9 Laura Morett",  "Galu",             15,        9, 0,  0,  0,   0,0 ,   5,    0,    0,  0,         0,       0,            0,                  0)
						};
    
    //It might be easier to make the allied and immune into bools. Theyre already just working as true or false basically
    //But I don't know which would be easier 
    
    //Strength will be a factor for challenges
    //vote_ID just corresponds with their place in the array, 
    //The vote_ID for the villians is a little weird, sometimes you have do -10
    //The ID's need to be different from the ones for the heros, this will be important during merge phase 
    
    
						Samoa* foa[number_survivors_per_tribe] = 
						{
							//name           tribe        strength, vote_id,elim, allied,sitout trust, immune enemies, tribe_I, challenge wins, allies made, trust built
        new Samoa("#10 Marisa Cailhan",  "Foa Foa",        12,         10,0,  0,    0,0,  0,   5,     0,     0, 0,     0,          0,               0,           0),
        new Samoa("#11 Mike Borassi",  "Foa Foa",          15,         11,0,   0,   0,0,  0, 5,     0,     0,   0,   0,          0,               0,           0),
        new Samoa("#12 Betsy Bolan",  "Foa Foa",           13,         12,0,  0,    0,0,  0,   5,     0,     0, 0,     0,          0,               0,           0),
        new Samoa("#13 Ashley Trainer",  "Foa Foa",        17,         13,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0),
        new Samoa("#14 Liz Kim",  "Foa Foa",               18,         14,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0),
        new Samoa("#15 Jaison Robinson",  "Foa Foa",       14,         15,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0),
        new Samoa("#16 Mick Trimming",  "Foa Foa",         15,         16,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0),
        new Samoa("#17 Ben Browning",  "Foa Foa",          11,         17,0,   0,   0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0),
        new Samoa("#18 Russell Hantz ",  "Foa Foa",        16,         18,0,  0,   0,0,   0,  5,     0,     0,   0,   0,          0,               0,           0),
        new Samoa("#19 Natalie White", "Foa Foa",          16,         19,0,   0,   0,0,   0,  5,     0,     0,  0,    0,          0,               0,           0)
						};


   

						cout << "Would you like to play as a Galu or Foa Foa? " << endl;
						cout <<"Press 1 for Galu. " << " " << "Press 2 for Foa Foa" << endl;
						int character_choice;
						cin >> character_choice;
	
						if(character_choice == 1)
						{
							choice = galu[0]->selectSurvivorS(galu, number_survivors_per_tribe);
						}
						if (character_choice == 2)
						{
							choice = foa[0]->selectSurvivorVillainS(foa, number_survivors_per_tribe);
						}
		//TRIBAL STAGE 
		while (days <20)
		{
			cout << "The remaining survivors are: " << endl;
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			galu[i]->print();
		}
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			foa[i]->print();
		}
		cout << " " << endl; 
		cout << "It is day " << days << "!" << endl;
		cout << " " << endl;
					cout << " " << endl;
		
						if(character_choice==1)
						{
							galu[0]->day_actions_heroS(galu, number_survivors_per_tribe, choice);
						}
						if(character_choice==2)
						{
						foa[0]->day_actions_villainS(foa, number_survivors_per_tribe, choice);
						}
	
					cout << " " << endl;
Samoa::tribeChallengeS(galu,foa, number_survivors_per_tribe, choice);
	days=days+2;
	cout << " " << endl;
		}
		
		//MERGE STAGE
		while(days>20 && days<34)
		{
Samoa::IndvidualChallengeS(galu,foa,number_survivors_per_tribe);
	
	cout << " " << endl;
	days=days+2;
		}
	
		//FINAL TRIBE & JURY STAGE
		while (days>34)
		{
Survivor::Loser();
	
	cout << " " << endl;
	
Survivor:: Winner();
		}
	}
break;

	}
	

	cout << "Would you like to play again? " << endl;
	cout <<"1) Yes! 2) No!" << endl;
	cin >> replay;
	
*/
}


    return 0;
}

