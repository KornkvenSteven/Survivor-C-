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
	int jury;
	int OGID;
    int immune;
    int enemies;
    int tribe_immune;
    bool eliminated;
    int allied;
    int sit_out;
    int votes_against;

public:
Survivor(string first_name, string tribe, int strength, int vote_ID,int player, int tricks, int votes_against, int elim, int allied,int sit_out, int trust,int enemies, int immune, int tribe_immune, int challenge_wins, int allies_made,int trust_made, int jury, int OGID) 
{
        this->first_name = first_name;
        this->tribe = tribe;
        this->strength = strength;
        this->player=player;
        this->vote_ID = vote_ID;
        this->elim=elim;
        this->eliminated = false;
        this->OGID=OGID;
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
		this->jury = jury;
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
void setOGID(int newOGID)
{
	OGID=newOGID;
}
int getOGID()
{
	return OGID;
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
int getJury()
{
	return jury;
}
void setJury(int newJury)
{
	jury = newJury;
}
void setTricks(int newTricks)
{
	tricks=newTricks;
}

void setStrength(int newStrength) {
	strength = newStrength;
}
void set_trust_built(int newT)
{
	 trust_made=newT;
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
int getTrustMade()
{
	return trust_made;
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
int get_allied_made()
{
	return allies_made;
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
Samoa(string first_name, string tribe, int strength, int vote_ID, int player, int tricks , int votes_against, int elim, int allied,int sit_out, int trust, int immune,int enemies, int tribe_immune, int challenge_wins, int allies_made,int trust_made, int jury, int OGID): Survivor (first_name, tribe, strength, vote_ID,player, tricks, votes_against, elim, allied, sit_out, trust, immune, enemies, tribe_immune, challenge_wins, allies_made, trust_made, jury, OGID)
{
}

static void tribeChallengeS(Samoa* galu[], Samoa* foa[], int number_survivor_per_tribe, int choice, int blindside_result)
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
        if (galu[i]->getEliminated() ==0)
        {
            numVillains++;
            
        }
    }
	
    // Determine if any tribe needs to sit out members
    if (numHeroes > numVillains)
    {
        cout << "Galu you have " << numHeroes - numVillains << " extra members. You need to sit out " << numHeroes - numVillains << " people of the challenge" << endl;
        // Code for heroes sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			if(galu[i]->getEliminated()==0)
			{
			cout <<"#" << galu[i]->getVoteID()<< " " << galu[i]->getFirstName() << endl;
			}
		}
        for(int i=0; i<numHeroes-numVillains; i++)
				{
					int sitting;
					
					cin >> sitting;
					
					galu[sitting]->sit_out=galu[sitting]->sit_out+1;
				}
						
    }
    if (numHeroes < numVillains)
    {
       cout << "Foa you have " << numVillains - numHeroes << " extra members. You need to sit out " << numVillains - numHeroes << " people out of the challenge" << endl;
        // Code for villains sitting out
        for(int i=0; i<number_survivor_per_tribe; i++)
        {
			if(galu[i]->getEliminated()==0)
			{
			cout <<"#" << galu[i]->getVoteID()<< " " <<  galu[i]->getFirstName()<< endl;
			}
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
	
        if (galu[i]->getEliminated()==0 && galu[i]->getSittingOut()==0)
        {
            totalStrengthHeroes += galu[i]->getStrength();
        }
    }
		HeroP=rand() % totalStrengthHeroes;

    // Calculate total strength for Villains tribe
    for (int i = 0; i < number_survivor_per_tribe; ++i)
    {
        if (foa[i]->getEliminated()==0 && foa[i]->getSittingOut() ==0)
        {
            totalStrengthVillains += foa[i]->getStrength();
        }
    }
		VillainP=rand() % totalStrengthVillains;
		
    // Display total tribe strength and challenge performance
    
   cout << "Welcome to your Tribal Immunity Challenge" << endl;
    cout << "Galu Challenge Strength: " << totalStrengthHeroes  << endl;
    cout << "Foa Challenge Strength: " << totalStrengthVillains  << endl;
    cout <<"PRESS 1 to compete in Immunity Challenge" << endl;
    int press_enter;
    cin>> press_enter;
    
	cout << "Galu Performed: " << HeroP << endl;
	cout<< "Foa Performed: " << VillainP << endl;
    // Determine the winner based on total strengths
    if (HeroP > VillainP)
    {
        cout << "Galu Win Immunity! Sending the Foa Tribe to Tribal Council" << endl;
        // Code for updating heroes' immunity status
        cout << " " << endl;
     
        Samoa:: Villains_Tribal_CouncilS( foa, number_survivor_per_tribe, choice, blindside_result);
              cout <<"PRESS 1" << endl;
    int press_enter;
    cin>> press_enter;
    }
    else if (VillainP > HeroP)
    {
		cout<< " " << endl;
        cout << "Foa Win Immunity! Sending the Heroes Tribe to Tribal Council" << endl;
        // Code for updating villains' immunity status
 
			Samoa:: Heroes_Tribal_CouncilS( galu, number_survivor_per_tribe, choice, blindside_result);
			      cout << " " << endl;
         cout <<"PRESS 1" << endl;
    int press_enter;
    cin>> press_enter;
    
    }
}
//This allows the user to select the survivor that they want to play as
//First given the option to pick their tribe, then select from 10 different characters
int selectSurvivorS(Samoa* galu[], int numSurvivors)
{
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout << "#" <<galu[i]->getVoteID() << " "<< galu[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        
        cin >> choice;
        
        if (choice<=9 && choice>=0) 
        {
            cout << " " << endl;
            cout << "You have chosen " << galu[choice]->getFirstName() << endl;
            cout << " " << endl;
           galu[choice]->setPlayerCharacter(1);
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
            cout <<"#"<< foa[i]->getVoteID() << " " << foa[i]->getFirstName() << endl;
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
             foa[choice-10]->setPlayerCharacter(1);
            return choice;
            
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            return selectSurvivorVillainS(foa, numSurvivors);
        }
    }

//This is the day simulator
//The player will be give three actions per day, with 4 options to use them
//Each option has the chance to give the player an advantage
//1)build alliance 2)Find immunity Idol 3)Build trust 4)Do nothing (Gain Strenght)
 void day_actions_heroS(Samoa* galu[], int number_survivors_per_tribe, int choice)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		cout << " " << endl;
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(galu[choice]->getEnemies()>0)
		{
		cout << "1) Attempt Aliance 2)Build Trust 3)Do nothing 4) Sus out other Survivors 5)Mend Relationships" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(galu[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2)Build Trust 3)Do nothing 4)Sus out other Survivors" << endl;
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
		
				
				if(i != choice && galu[i]->allied==0 && galu[i]->allied!=2 && galu[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<< galu[i]->getVoteID() << " " << galu[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(galu[al_attempt]->getEliminated()==1);
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
					galu[al_attempt]->setAllied(1);
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
								
					cout <<"You have become enemies with " << galu[al_attempt]->getFirstName() << "." << endl;
					galu[al_attempt]->setAllied(2);
					galu[choice]->enemies=galu[choice]->enemies+1;
					D_actions++;
				}
				cout << " " << endl;
			
			
		}
		
		if(Day_Choice==2)
		{
			//This will have the chance to increase anther player's trust 
			//Trust al_attempt +20
			//Trust al_attempt +10
		
			int trust_attempt;
			
			
			cout << "Who do you want to build trust with? " << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
				
				if(i != choice && galu[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
					if(galu[i]->getAllied()==1)
					{
						cout <<"#" <<galu[i]->getVoteID() << " " << galu[i]->getFirstName() << ", Current Trust:(" << galu[i]-getTrust() << ")------ALLIED" << endl;
					}
					if(galu[i]->getAllied()==0)
					{
					cout <<"#"<< galu[i]->getVoteID() << " " <<galu[i]->getFirstName() << ", Current Trust:(" << galu[i]-getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(galu[trust_attempt]->getEliminated()==1);
			
					cout << " " << endl;
					cout << "You started a conversation with " << galu[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
				if(trust_result>50)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
					int new_trust=galu[trust_attempt]->getTrust()+5;
					galu[trust_attempt]->setTrust(new_trust);
					cout <<"You now have " << galu[trust_attempt]->getTrust()<< " with  " << galu[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					
					D_actions++;
					}
					//NEUTRAL RESULT
				if(trust_result<=50 && trust_result>15)
				{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
					cout <<"You now have " << galu[trust_attempt]->getTrust()<< " with  " << galu[trust_attempt]->getFirstName() << "." << endl;
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
						
						
						cout <<"You have lost trust with " << galu[trust_attempt]->getFirstName() << "." << endl;
						if(galu[trust_attempt]->trust!=0)
						{
						galu[trust_attempt]->trust=galu[trust_attempt]->trust-5;
						}
						cout <<"You now have " << galu[trust_attempt]->getTrust()<< " with  " << galu[trust_attempt]->getFirstName() << "." << endl;
						cout << " "<< endl;
						
						D_actions++;
					}
		}
		if(Day_Choice==3)
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
				int upgrade =galu[choice]->getStrength() +1;
				galu[choice]->setStrength(upgrade);
				cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<=75 && do_nothing_result>15)
			{
				cout << " " << endl;
				cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<=15)
			{
				int jugement=0;
				
				 jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << galu[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(galu[jugement]->getTrust()>0)
					{
					int new_trust =galu[jugement]->getTrust()-5;
					galu[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << galu[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << galu[jugement]->getFirstName() <<" is now " << galu[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			D_actions++;
		cout << galu[choice]->strength<< " is current strength for you" << endl;
		}
		if(Day_Choice==5)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && galu[i]->allied==2 && galu[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#" << galu[i]->getVoteID() << " " << galu[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
		}while(galu[mend_choice]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << galu[mend_choice]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  galu[mend_choice]->getFirstName() << endl;
			D_actions++;
			}
			if(fix_friend>=50)
			{
				cout << galu[mend_choice]->getFirstName() << " accepts your apology" << endl;
				cout <<galu[mend_choice]->getFirstName() << " is no longer you enemy" << endl;
				int new_E;
				new_E=galu[choice]->getEnemies();
				galu[choice]->setEnemies(new_E);
				galu[mend_choice]->setAllied(0);
				D_actions++;
			}
			
		}
		if(Day_Choice==4)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(galu[i]->getPlayerCharacter()==0 && galu[i]->getEliminated()==0)
				{
				cout <<"#"<<galu[i]->getVoteID() << " " << galu[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(galu[sus]->getTricks()>80)
			{
				cout << galu[sus]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(galu[sus]->getTricks()>30 && galu[sus]->getTricks()<80)
			{
				cout << galu[sus]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(galu[sus]->getTricks()<30)
			{
				cout << galu[sus]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
			D_actions++;
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
	}
	
} ;
 void day_actions_villainAS(Samoa* foa[], int number_survivors_per_tribe, int choice)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		
		cout << " " << endl;
		int Day_Choice;
		if(foa[choice-10]->getEnemies()>0)
		{
			
		cout << "1) Attempt Aliance  2)Build Trust 3)Do Nothing 4) Sus out other Survivors 5)Mend Relationships" << endl;
			do{
			cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(foa[choice-10]->enemies==0)
		{
		
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		cout << "1) Attempt Aliance  2)Build Trust 3)Do Nothing 4)Sus out other Survivors" << endl;
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
			
				
				if(i != choice-10 && foa[i]->allied==0 && foa[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<< foa[i]->getVoteID() << " " <<foa[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(foa[al_attempt-10]->getEliminated()==1);
					cout << " " << endl;
					cout << "You talk to " << foa[al_attempt-10]->getFirstName() << " about a potential alliance" << endl;
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
					foa[al_attempt-10]->setAllied(1);
					foa[choice-10]->allies_made=foa[choice-10]->allies_made+5;
					
					
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
					cout <<"You have become enemies with " << foa[al_attempt-10]->getFirstName() << "." << endl;
					foa[al_attempt-10]->setAllied(2);
					foa[choice-10]->enemies=foa[choice-10]->enemies+1;
				}
				cout << " " << endl;
			D_actions++;
					
		}
		
		
		if(Day_Choice==2)
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

				if(i+10 != choice && foa[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
					if(foa[i]->getAllied()==1)
					{
						cout <<"#"<< foa[i]->getVoteID() << " " << foa[i]->getFirstName() << ", Current Trust:(" << foa[i]->getTrust() << ")-----ALLIED" << endl;
					}
					if(foa[i]->getAllied()==0)
					{
					cout <<"#"<<foa[i]->getVoteID() << " " <<  foa[i]->getFirstName() << ", Current Trust:(" << foa[i]->getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(foa[trust_attempt-10]->getEliminated()==1);
					cout << " " << endl;
					cout << "You started a conversation with " << foa[trust_attempt-10]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESS
				if(trust_result>50)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
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
					int new_trust=0;
					new_trust=foa[trust_attempt-10]->getTrust()+5;
					foa[trust_attempt-10]->setTrust(new_trust);
					
					foa[choice-10]->trust_made=foa[choice-10]->trust_made+5;
							
							
					cout <<"You now have " << foa[trust_attempt-10]->getTrust()<< " with  " << foa[trust_attempt-10]->getFirstName() << "." << endl;
					D_actions++;
					}
					//NEUTRAL
					if(trust_result<50 && trust_result>15)
				{
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
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
					cout << "You have neither gained or lost  trust with " << foa[trust_attempt-10]->getFirstName() << "." << endl;
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
					cout <<"You have lost trust with " << foa[trust_attempt-10]->getFirstName() << "." << endl;
					if(foa[trust_attempt-10]->trust!=0)
					{
					foa[trust_attempt-10]->trust=foa[trust_attempt-10]->trust-5;
					}
					cout <<"You now have " << foa[trust_attempt-10]->getTrust()<< " with  " << foa[trust_attempt-10]->getFirstName() << "." << endl;
					
				}
		}
		if(Day_Choice==3)
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
				int upgrade =foa[choice-10]->getStrength() +1;
				foa[choice-10]->setStrength(upgrade);
				cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<75 && do_nothing_result>=25)
			{
				cout << " " << endl;
					cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<25)
			{
				int jugement=0;
				
				jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << foa[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(foa[jugement]->getTrust()>0)
					{
					int new_trust =foa[jugement]->getTrust()-5;
					foa[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << foa[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << foa[jugement]->getFirstName() <<" is now " << foa[jugement]->getTrust()<< "." << endl;
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
		
				
				if(i != choice-10 && foa[i]->allied==2 && foa[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<<foa[i]->getVoteID() << " " << foa[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
			}while(foa[mend_choice-10]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << foa[mend_choice-10]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  foa[mend_choice-10]->getFirstName() << endl;
			}
			if(fix_friend>=50)
			{
				cout << foa[mend_choice-10]->getFirstName() << " accepts your apology" << endl;
				cout <<foa[mend_choice-10]->getFirstName() << " is no longer you enemy" << endl;
				
					int new_E;
				new_E=foa[choice-10]->getEnemies();
				foa[choice-10]->setEnemies(new_E);
				foa[mend_choice-10]->setAllied(0);
				D_actions++;
			}
			D_actions++;
		}
		if(Day_Choice==4)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(foa[i]->getPlayerCharacter()==0 && foa[i]->getEliminated()==0)
				{
				cout <<"#"<< foa[i]->getVoteID() << " " << foa[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(foa[sus-10]->getTricks()>80)
			{
				cout << foa[sus-10]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(foa[sus-10]->getTricks()>30 && foa[sus-10]->getTricks()<80)
			{
				cout << foa[sus-10]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(foa[sus-10]->getTricks()<30)
			{
				cout << foa[sus-10]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
		D_actions++;	
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
		}
	};
static void IndvidualChallengeS(Samoa* combined[], int number_survivors_per_tribe)
{	
		
        int PerformanceStrengthHeroes = 0;
        int BestStrenghtHeroes=0;
        int tempy1=0;
		int HeroStrength;
        string BestHero; 
		string HeroName;
   
   // Calculate total strength for Heroes tribe
        for (int i = 0; i < number_survivors_per_tribe; ++i) 
        {
            if (combined[i]->getEliminated()==0) 
            {
         do
            {
				HeroStrength=combined[i]->getStrength();
                 HeroName=combined[i]->getFirstName();
                PerformanceStrengthHeroes=rand() % HeroStrength;
               
		   }while(tempy1==PerformanceStrengthHeroes);
			
				if(PerformanceStrengthHeroes>BestStrenghtHeroes)
				{
					BestStrenghtHeroes=PerformanceStrengthHeroes;
					tempy1=BestStrenghtHeroes;
					BestHero=combined[i]->getFirstName();
				}
		}
                
                cout << HeroName << " Strength is: " << HeroStrength << " Performed: " << PerformanceStrengthHeroes << endl;
                
                
          }
          
          cout << BestHero << " Wins Immunity. Safe from the vote at tribal concil" << endl;
          for (int i=0; i<number_survivors_per_tribe; i++)
          {
			  if(BestHero==combined[i]->getFirstName())
			  {
				  combined[i]->setImmune(1);
			  }
		  }
         
	  
}	
static void Heroes_Tribal_CouncilS(Samoa* galu[], int number_survivor_per_tribe, int choice, int blindside_result)
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
			if(galu[i]->getAllied()==1)
			{
				cout <<"#"<<galu[i]->getVoteID() << " " << galu[i]->getFirstName() << " (ALLIED)" << endl;
			}
			if(galu[i]->getAllied()==2)
			{
				cout <<"#"<<galu[i]->getVoteID() << " " <<  galu[i]->getFirstName() << " (ENEMY)" << endl;
			}
			if(galu[i]->getAllied()==0)
			{
				cout <<"#"<< galu[i]->getVoteID() << " " << galu[i]->getFirstName() << " " << endl;
			}
		
		}
	}
	int user_vote;
	
	cin >> user_vote;
	
	galu[user_vote]->setVotesAgainst(1);
	
	

	
		cout << galu[choice]->getFirstName() << " Voted: " << galu[user_vote]->getFirstName() << endl;
	
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
			if(galu[i]->getAllied()==0)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i || galu[cpu_vote]->getEliminated()==1);
			}
			
			if(galu[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100)
				{
					do
					{
						cpu_vote=rand() % numHeroes;
					}while(cpu_vote==i || galu[cpu_vote]->getEliminated()==1 ||(galu[i]->getAllied()==1 && galu[cpu_vote]->getPlayerCharacter()==1));
				}
				else
				{
					cout << "BLINDSIDE" << endl;
					cpu_vote =choice-10;
				}
				
			}
			
			
		 if(galu[cpu_vote]->getPlayerCharacter()==1 && galu[i]->getAllied()==1 )
			{
				cout <<galu[i]->getFirstName() << " Voted: " <<  galu[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
			
			else 
			{
				cout <<galu[i]->getFirstName() << " Voted: " <<  galu[cpu_vote]->getFirstName()<< endl;
			}
		
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
		do{
		rocks=rand()%numHeroes;
		}while(galu[rocks]->getEliminated()==1);
		
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

static void Villains_Tribal_CouncilS(Samoa* foa[], int number_survivor_per_tribe, int choice, int blindside_result)
{
	
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
			if(foa[i]->getAllied()==1)
			{
				cout <<"#"<<foa[i]->getVoteID() <<" " << foa[i]->getFirstName() << " (ALLIED) "<< endl;
			}
			if(foa[i]->getAllied()==2)
			{
				cout <<"#"<<foa[i]->getVoteID() <<" " << foa[i]->getFirstName() << " (ENEMY)" << endl;
			}
			if(foa[i]->getAllied()==0)
			{
			cout <<"#"<< foa[i]->getVoteID() <<" " <<foa[i]->getFirstName() << endl;
			}
		}
	}
	int user_vote;

	cin >> user_vote;
	
	user_vote=user_vote-10;
	foa[user_vote]->setVotesAgainst(1);

	

		cout << foa[choice-10]->getFirstName() << " Voted: " << foa[user_vote]->getFirstName() << endl;


	
}
			

		
		for(int i=0; i<number_survivor_per_tribe; i++)
		{
		
				
		//ENEMY VOTE
		if(foa[i]->getEliminated()==0 && foa[i]->getPlayerCharacter()==0)
		{
			
			if(foa[i]->getAllied()==2)
			{
				
				cpu_vote=choice-10;
			}
			
			int total_votes=0;
		//NEUTRAL TOWARD PLAYER VOTE	
		if(foa[i]->getAllied()!=2 && foa[i]->getAllied()!=1)
			{
				
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i || foa[cpu_vote]->getEliminated()==1);
			}
		//ALLIES VOTE
		if(foa[i]->getAllied()!=0 && foa[i]->getAllied()!=2 )
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100)
				{
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i || foa[cpu_vote]->getEliminated()==1 ||(foa[i]->getAllied()==1 && foa[cpu_vote]->getPlayerCharacter()==1));
				}
				if(blindside_result>100)
				{
				
					
					cpu_vote =choice-10;
				}
				
				
			}
		
		 if(foa[cpu_vote]->getPlayerCharacter()==1 && foa[i]->getAllied()==1)
			{
				cout <<foa[i]->getFirstName() << " Voted: " <<  foa[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
		
			else
			{
			cout <<foa[i]->getFirstName() << " Voted: " <<  foa[cpu_vote]->getFirstName() <<endl;
			}
			
			
			
			total_votes=foa[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			foa[cpu_vote]->setVotesAgainst(total_votes);
		}
			
		}
	
	int MostVotes=0;
			int SecondMost=0;
			int MostVotedSurvivor=0;
		


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
		do
		{
		rocks=rand()%numVillains;
		}while(foa[rocks]->getEliminated()==1);
		
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

void random_event_villianS(Samoa* foa[], int choice)
{
	int random_Number_event = rand() % 10 + 1;
	int upgrade1 = foa[choice-10]->getStrength() - 1;
	int upgrade2 = foa[choice-10]->getStrength() + 1;
			switch (random_Number_event)
			{
			case 1:
				cout << "Whoops! You've tripped and fell. You're a little shaken up, but thankfully have no injuries." << endl;
				cout << "Your strength is unaffected." << endl;
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 2:
				cout << "Whoops! You've tripped and fell. Unfortunately, you twisted your ankle and have suffered the consequences." << endl;
				cout << "-1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade1);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 3:
				cout << "Night time roles around..." << endl;
				cout << "You wake up in the middle of the night. Someone is snoring extremely loud. You are frustrated and have trouble falling back asleep." << endl;
				cout << "As a result, you've lost strength due to lack of sleep." << endl;
				cout << "-1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade1);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 4:
				cout << "You're feeling overwhelmed from today's events, but the weather cheers you up. Hopefully tomorrow is a better day." << endl;
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 5:
				cout << "After eating, you're feeling full and nourished." << endl;
				cout << "+1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade2);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 6:
				cout << "You found a little bit of extra food in the forest." << endl;
				cout << "+1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade2);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 7:
				cout << "You're wondering through the forest when you find a snake! Thankfully, it quickly slithers away in fear." << endl;
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 8:
				cout << "Wow, the lack of food is starting to get to you. You're craving a nice, juicy steak." << endl;
				cout << "-1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade1);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 9:
				cout << "You start feeling sick. Hopefully you can recover quickly in time for the next challenge." << endl;
				cout << "-1 Strength" << endl;
				foa[choice-10]->setStrength(upgrade1);
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			case 10:
				cout << "You're starting to miss your family. Next time you see them, hopefully you'll be $1 million richer!" << endl;
					cout << "You now have " << foa[choice-10]->getStrength() << endl;
				cout << " " << endl;
				break;
			default:
				break;
			}
};

void random_event_heroS(Samoa* galu[], int choice)
{
	int random_Number_event1 = rand() % 10 + 1;
	int upgrade3 = galu[choice]->getStrength() - 1;
	int upgrade4 = galu[choice]->getStrength() + 1;
	switch (random_Number_event1)
	{
	case 1:
		cout << "Whoops! You've tripped and fell. You're a little shaken up, but thankfully have no injuries." << endl;
		cout << "Your strength is unaffected." << endl;
				cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 2:
		cout << "Whoops! You've tripped and fell. Unfortunately, you twisted your ankle and have suffered the consequences." << endl;
		cout << "-1 Strength" << endl;
		galu[choice]->setStrength(upgrade3);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 3:
		cout << "Night time roles around..." << endl;
		cout << "You wake up in the middle of the night. Someone is snoring extremely loud. You are frustrated and have trouble falling back asleep." << endl;
		cout << "As a result, you've lost strength due to lack of sleep." << endl;
		cout << "-1 Strength" << endl;
		galu[choice]->setStrength(upgrade3);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 4:
		cout << "You're feeling overwhelmed from today's events, but the weather cheers you up. Hopefully tomorrow is a better day." << endl;
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 5:
		cout << "After eating, you're feeling full and nourished." << endl;
		cout << "+1 Strength" << endl;
		galu[choice]->setStrength(upgrade4);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 6:
		cout << "You found a little bit of extra food in the forest." << endl;
		cout << "+1 Strength" << endl;
		galu[choice]->setStrength(upgrade4);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 7:
		cout << "You're wondering through the forest when you find a snake! Thankfully, it quickly slithers away in fear." << endl;
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 8:
		cout << "Wow, the lack of food is starting to get to you. You're craving a nice, juicy steak." << endl;
		cout << "-1 Strength" << endl;
		galu[choice]->setStrength(upgrade3);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 9:
		cout << "You start feeling sick. Hopefully you can recover quickly in time for the next challenge." << endl;
		cout << "-1 Strength" << endl;
		galu[choice]->setStrength(upgrade3);
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	case 10:
		cout << "You're starting to miss your family. Next time you see them, hopefully you'll be $1 million richer!" << endl;
			cout << "You now have " << galu[choice]->getStrength() << endl;
				cout << " " << endl;
		break;
	default:
		break;
	}
};
static void random_event_cpuHeroesS(Samoa* galu[], int choice, int number_survivors_per_tribe)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
	if(galu[i]->getEliminated()==0 && galu[i]->getPlayerCharacter()==0)
	{
	int random_Number_event1 = (rand() % 10 ) +1;
	int upgrade3 = galu[i]->getStrength() - 1;
	int upgrade4 = galu[i]->getStrength() + 1;
	int upgrade5 = galu[i]->get_allied_made() + 5;
	int upgrade6 = galu[i]->getTrustMade() + 5;
	int upgrade7 = galu[i]->getTricks() + 5;
	int upgrade8 = galu[i]->getStrength() - 2;
	
	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;
	
	
	
	if(event_chance>=25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			galu[i]->set_allied_made(upgrade5);
			cout << galu[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << galu[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			galu[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << galu[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			galu[i]->setStrength(upgrade4);
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << galu[i]->getFirstName() << " Cut themseleves with the machette. -3 Strength" << endl;
			galu[i]->setStrength(upgrade8);
				cout << galu[i]->getFirstName() << " Strenght is now: " << galu[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << galu[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			galu[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << galu[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			galu[i]->setStrength(upgrade3);
			cout << galu[i]->getFirstName() << " Strenght is now: " << galu[i]->getStrength() << endl;
		}
	
	}
}
}
	}
	

};
static void random_event_cpuVillainsS(Samoa* foa[], int choice, int number_survivors_per_tribe)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
		if(foa[i]->getEliminated()==0 && foa[i]->getPlayerCharacter()==0)
		{
	int random_Number_event1 = (rand() % 10 )+ 1;
	
	int upgrade3 = foa[i]->getStrength() - 1;
	int upgrade4 = foa[i]->getStrength() + 1;
	int upgrade5 = foa[i]->get_allied_made() + 5;
	int upgrade6 = foa[i]->getTrustMade() + 5;
	int upgrade7 = foa[i]->getTricks() + 5;
	int upgrade8 = foa[i]->getStrength() - 2;
	

	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;

	if(event_chance>=25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			foa[i]->set_allied_made(upgrade5);
			cout << foa[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << foa[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			foa[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << foa[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			foa[i]->setStrength(upgrade4);
			cout << foa[i]->getFirstName() << " Strenght is now: " << foa[i]->getStrength() << endl;
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << foa[i]->getFirstName() << " cut themselves with the machette, -3 Strenght" << endl;
			foa[i]->setStrength(upgrade8);
			cout << foa[i]->getFirstName() << " Strenght is now: " << foa[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << foa[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			foa[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << foa[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			foa[i]->setStrength(upgrade3);
			cout << foa[i]->getFirstName() << " Strenght is now: " << foa[i]->getStrength() << endl;
		}
	
	}
}

}
}

};
static void Merge_Tribal_CouncilS(Samoa* combined[], int number_survivor_per_tribe, int choice, int blindside_result,Samoa* galu[], Samoa* foa[])
{
	int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;
	 int numHeroes = 0;
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (combined[i]->getEliminated() ==0 )
        {
            numHeroes++;
        }
        

    }

	
	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
		{
			if(combined[i]->getAllied()==1&& combined[i]->getImmune()==0)
			{
				cout <<"#"<<combined[i]->getVoteID() << " "<< combined[i]->getFirstName() << "----(ALLIED)" << endl;
			}
			if(combined[i]->getAllied()==2&& combined[i]->getImmune()==0)
			{
				cout <<"#"<< combined[i]->getVoteID() << " "<<combined[i]->getFirstName() << "----(ENEMY)" << endl;
			}
			if(combined[i]->getAllied()==0&& combined[i]->getImmune()==0)
			{
				cout <<"#"<< combined[i]->getVoteID() << " "<<combined[i]->getFirstName() << " " << endl;
			}
		
		}
	}
	int user_vote;
	
	cin >> user_vote;
	
	combined[user_vote]->setVotesAgainst(1);
	
	


		cout << combined[choice]->getFirstName() << " Voted: " << combined[user_vote]->getFirstName() << endl;
	
	
	
	
	
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
		{
			if(combined[i]->getAllied()==2 )
			{
				cpu_vote=choice;
			}
			if(combined[i]->getAllied()==2 && combined[choice]->getImmune()==1)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1|| combined[cpu_vote]->getImmune()==1);
			}
			int total_votes=0;
			if(combined[i]->getAllied()==0)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1|| combined[cpu_vote]->getImmune()==1);
			}
			
			if(combined[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100)
				{
					do
					{
						cpu_vote=rand() % numHeroes;
					}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1 || combined[cpu_vote]->getImmune()==1 ||(combined[i]->getAllied()==1 && combined[cpu_vote]->getPlayerCharacter()==1));
				}
				else
				{
				
					cpu_vote =choice;
				}
				
			}
			
			
			if((combined[cpu_vote]->getPlayerCharacter()==1 && combined[i]->getAllied()==1))
			{
				cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
			
			
			else
			{
				cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName()<< endl;
			}
			
			
			total_votes=combined[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			combined[cpu_vote]->setVotesAgainst(total_votes);
			
			
		}
		
	}


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(combined[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=combined[i]->getVotesAgainst();
				MostVotedSurvivor=combined[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(combined[i]->getVotesAgainst()> SecondMost && combined[i]->getVotesAgainst()<=MostVotes && combined[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=combined[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		do{
		rocks=rand()%numHeroes;
		}while(combined[rocks]->getEliminated()==1 || combined[rocks]->getImmune()==1);
		
		cout << combined[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << combined[rocks]->getFirstName() << " the tribe has spoken" << endl;
		combined[rocks]->setEliminate(1);
		combined[rocks]->setJury(1);
			if(combined[rocks]->getOGID()<10)
			{
				galu[combined[rocks]->getOGID()]->setEliminate(1);
			}
			if(combined[rocks]->getOGID()>9)
			{
				foa[combined[rocks]->getOGID()-10]->setEliminate(1);
			}
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	combined[MostVotedSurvivor]->setEliminate(1);
	combined[MostVotedSurvivor]->setJury(1);
	if(combined[MostVotedSurvivor]->getOGID()<10)
			{
				galu[combined[MostVotedSurvivor]->getOGID()]->setEliminate(1);
			}
			if(combined[MostVotedSurvivor]->getOGID()>9)
			{
				foa[combined[MostVotedSurvivor]->getOGID()-10]->setEliminate(1);
			}
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	combined[i]->setVotesAgainst(0) ;
	
	combined[i]->setImmune(0);
	}


}
static void random_event_cpuMERGES(Samoa* combined[], int choice, int number_survivors_per_tribe)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
	if(combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
	{
	int random_Number_event1 = (rand() % 10 ) +1;
	int upgrade3 = combined[i]->getStrength() - 1;
	int upgrade4 = combined[i]->getStrength() + 1;
	int upgrade5 = combined[i]->get_allied_made() + 5;
	int upgrade6 = combined[i]->getTrustMade() + 5;
	int upgrade7 = combined[i]->getTricks() + 5;
	int upgrade8 = combined[i]->getStrength() - 2;
	
	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;
	
	

	if(event_chance>=25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			combined[i]->set_allied_made(upgrade5);
			cout << combined[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			combined[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			combined[i]->setStrength(upgrade4);
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Cut themseleves with the machette. -3 Strength" << endl;
			combined[i]->setStrength(upgrade8);
				cout << combined[i]->getFirstName() << " Strenght is now: " << combined[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			combined[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			combined[i]->setStrength(upgrade3);
			cout << combined[i]->getFirstName() << " Strenght is now: " << combined[i]->getStrength() << endl;
		}
	
	}
}
}
	}
	

};
static void day_actions_MERGES(Samoa* combined[], int number_survivors_per_tribe, int choice)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		cout << " " << endl;
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(combined[choice]->getEnemies()>0)
		{
		cout << "1) Attempt Aliance 2)Build Trust 3)Do nothing 4) Sus out other Survivors 6)Mend Relationships" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(combined[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2)Build Trust 3)Do nothing 4)Sus out other Survivors" << endl;
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
		
				
				if(i != choice && combined[i]->allied==0 && combined[i]->allied!=2 && combined[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<< combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(combined[al_attempt]->getEliminated()==1);
					cout << " " << endl;
					cout << "You talk to " << combined[al_attempt]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				//SUCCESS
				if(al_result>74)
				{
					if(combined[al_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;

								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+60; // Change this to the line number you want to read
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
							}
						if(combined[al_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+50; // Change this to the line number you want to read
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
								inputFile.close();
						}
						
						
							
					cout << " " << endl;
					cout << "You have successfuly created and alliance with " << combined[al_attempt]->getFirstName() << "." << endl;
					combined[al_attempt]->setAllied(1);
					combined[choice]->allies_made=combined[choice]->allies_made+5;
					
					D_actions++;
				}
				//NETURAL RESULT
				if(al_result<=74 && al_result>15)
				{
					
					if(combined[al_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+70; // Change this to the line number you want to read
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
							}
							
							if(combined[al_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine =combined[al_attempt]->getOGID()+60; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have failed to create an alliance with " << combined[al_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
				//NEGATIVE RESULT +40
				if(al_result<=15)
				{
					
					if(combined[al_attempt]->getOGID()<10)
					{
						ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+80; // Change this to the line number you want to read
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
							}
							
							if(combined[al_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+70; // Change this to the line number you want to read
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
						}
							
					cout <<"You have become enemies with " << combined[al_attempt]->getFirstName() << "." << endl;
					combined[al_attempt]->setAllied(2);
					combined[choice]->enemies=combined[choice]->enemies+1;
					D_actions++;
				}
				cout << " " << endl;
			
			
		}
		
		if(Day_Choice==2)
		{
			//This will have the chance to increase anther player's trust 
			//Trust al_attempt +20
			//Trust al_attempt +10
		
			int trust_attempt;
			
			
			cout << "Who do you want to build trust with? " << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
				
				if(i != choice && combined[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
					if(combined[i]->getAllied()==1)
					{
						cout <<"#" <<combined[i]->getVoteID() << " " << combined[i]->getFirstName() << ", Current Trust:(" << combined[i]->getTrust() << ")------ALLIED" << endl;
					}
					if(combined[i]->getAllied()==0)
					{
					cout <<"#"<< combined[i]->getVoteID() << " " <<combined[i]->getFirstName() << ", Current Trust:(" << combined[i]->getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(combined[trust_attempt]->getEliminated()==1);
			
					cout << " " << endl;
					cout << "You started a conversation with " << combined[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
				if(trust_result>50)
				{
					
					if(combined[trust_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+90; // Change this to the line number you want to read
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
							}
							
							
							if(combined[trust_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+80; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have successfuly build trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
					int new_trust=combined[trust_attempt]->getTrust()+5;
					combined[trust_attempt]->setTrust(new_trust);
					cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					
					D_actions++;
					}
					//NEUTRAL RESULT
				if(trust_result<=50 && trust_result>15)
				{
					
					if(combined[trust_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+100; // Change this to the line number you want to read
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
							}
							
							if(combined[trust_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+100; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have failed to build trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					D_actions++;
				}
									//NEGATVIE RESULT trust_attempt 
					if(trust_result<=15)
					{
						if(combined[trust_attempt]->getOGID()<10)
					{
							ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+110; // Change this to the line number you want to read
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
						}
						
						if(combined[trust_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+90; // Change this to the line number you want to read
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
						}
						
						cout <<"You have lost trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
						if(combined[trust_attempt]->trust!=0)
						{
						combined[trust_attempt]->trust=combined[trust_attempt]->trust-5;
						}
						cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
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
				int upgrade =combined[choice]->getStrength() +1;
				combined[choice]->setStrength(upgrade);
				cout << "You now have " << combined[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<=75 && do_nothing_result>15)
			{
				cout << " " << endl;
				cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << combined[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<=15)
			{
				int jugement=0;
				
				 jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << combined[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(combined[jugement]->getTrust()>0)
					{
					int new_trust =combined[jugement]->getTrust()-5;
					combined[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << combined[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << combined[jugement]->getFirstName() <<" is now " << combined[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			D_actions++;
		cout << combined[choice]->strength<< " is current strength for you" << endl;
		}
		if(Day_Choice==6)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && combined[i]->allied==2 && combined[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#" << combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
		}while(combined[mend_choice]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << combined[mend_choice]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  combined[mend_choice]->getFirstName() << endl;
			D_actions++;
			}
			if(fix_friend>=50)
			{
				cout << combined[mend_choice]->getFirstName() << " accepts your apology" << endl;
				cout <<combined[mend_choice]->getFirstName() << " is no longer you enemy" << endl;
				int new_E;
				new_E=combined[choice]->getEnemies();
				combined[choice]->setEnemies(new_E);
				combined[mend_choice]->setAllied(0);
				D_actions++;
			}
			
		}
		if(Day_Choice==5)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(combined[i]->getPlayerCharacter()==0 && combined[i]->getEliminated()==0)
				{
				cout <<"#"<<combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(combined[sus]->getTricks()>80)
			{
				cout << combined[sus]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(combined[sus]->getTricks()>30 && combined[sus]->getTricks()<80)
			{
				cout << combined[sus]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(combined[sus]->getTricks()<30)
			{
				cout << combined[sus]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
			D_actions++;
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
	}
	
} ;
	
};

class HvV: public Survivor
{
	protected:
	int Idol;
	 int idol_played;
	public:
	HvV(string first_name, string tribe, int strength, int vote_ID, int player, int tricks, int votes_against, int elim, int allied, int sit_out, int trust, int immune,int idol_played, int enemies ,int tribe_immune, int challenge_wins, int allies_made,int trust_made, int Idol, int jury, int OGID): Survivor (first_name, tribe, strength, vote_ID,player,tricks,votes_against, elim, allied, sit_out,  trust, immune,enemies, tribe_immune, challenge_wins, allies_made, trust_made, jury, OGID)
		{
			this->Idol=Idol;
			this->idol_played=idol_played;
		}
//This runs the challeges for the tribe phase
//The strenght of each survior is added together for each team, then a random number is selected
//Higher the strenght is the more higher numbers they will get, so in theory a better chance to win
int getIdol()
{
	return Idol;
}
void setIdol(int newIdol)
{
	Idol=newIdol;
}
int getIdolPlayed()
{
	return idol_played;
}
void setIdolPlayed(int new_idol_played)
{
	idol_played=new_idol_played;
}

 
static void tribeChallenge(HvV* heroes[], HvV* villains[], int number_survivor_per_tribe, int choice, int blindside_result, int IdolsFound)
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
			cout <<"#" << heroes[i]->getVoteID()<< " " << heroes[i]->getFirstName() << endl;
			}
		}
        for(int i=0; i<numHeroes-numVillains; i++)
				{
					int sitting;
					
					cin >> sitting;
					
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
			cout <<"#" << villains[i]->getVoteID()<< " " <<  villains[i]->getFirstName()<< endl;
			}
		}
        for(int i=0; i<numVillains-numHeroes; i++)
        {
				int sitting=0;
				
				cin >> sitting;
				
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
    
   cout << "Welcome to your Tribal Immunity Challenge" << endl;
    cout << "Heroes Challenge Strength: " << totalStrengthHeroes  << endl;
    cout << "Villains Challenge Strength: " << totalStrengthVillains  << endl;
    cout <<"PRESS 1 to compete in Immunity Challenge" << endl;
    int press_enter;
    cin>> press_enter;
    
	cout << "Heroes Performed: " << HeroP << endl;
	cout<< "Villains Performed: " << VillainP << endl;
    // Determine the winner based on total strengths
    if (HeroP > VillainP)
    {
        cout << "Heroes Win Immunity! Sending the Villains Tribe to Tribal Council" << endl;
        // Code for updating heroes' immunity status
        cout << " " << endl;
     
        HvV:: Villains_Tribal_Council( villains, number_survivor_per_tribe, choice, blindside_result, IdolsFound);
              cout <<"PRESS 1" << endl;
    int press_enter;
    cin>> press_enter;
    }
    else if (VillainP > HeroP)
    {
		cout<< " " << endl;
        cout << "Villains Win Immunity! Sending the Heroes Tribe to Tribal Council" << endl;
        // Code for updating villains' immunity status
 
			HvV:: Heroes_Tribal_Council( heroes, number_survivor_per_tribe, choice, blindside_result, IdolsFound);
			      cout << " " << endl;
         cout <<"PRESS 1" << endl;
    int press_enter;
    cin>> press_enter;
    
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
            cout << "#" <<heroes[i]->getVoteID() << " "<< heroes[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        
        cin >> choice;
        
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

int selectSurvivorVillain(HvV* villains[], int numSurvivors)
{
        int choice;
        cout << "Choose your Survivor:" << endl;
        for (int i = 0; i < numSurvivors; ++i) 
        {
            cout <<"#"<< villains[i]->getVoteID() << " " << villains[i]->getFirstName() << endl;
        }
        
        cout << "Enter the number of your choice: ";
        do{
			cin >> choice;
		}while(choice<10 && choice>19);
        if (choice>=10 && choice<=19) 
        {
            cout << " " << endl;
            cout << "You have chosen " << villains[choice-10]->getFirstName() << endl;
            cout << " " << endl;
             villains[choice-10]->setPlayerCharacter(1);
            return choice;
            
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
            return selectSurvivorVillain(villains, numSurvivors);
        }
    }

//This is the day simulator
//The player will be give three actions per day, with 4 options to use them
//Each option has the chance to give the player an advantage
//1)build alliance 2)Find immunity Idol 3)Build trust 4)Do nothing (Gain Strenght)
 void day_actions_hero(HvV* heroes[], int number_survivors_per_tribe, int choice, int IdolsFound)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		cout << " " << endl;
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(heroes[choice]->getEnemies()>0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5) Sus out other Survivors 6)Mend Relationships" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(heroes[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5)Sus out other Survivors" << endl;
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
				cout <<"#"<< heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << endl;
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
				int idol_hunt= rand()%100;
					if(heroes[choice]->getIdol()==1)
			{
				cout << "You search all day and find nothing" << endl;
				cout << "Maybe all the idols have been found?" << endl;
				
			}
				if(heroes[choice]->getIdol()==0)
				{
				
			if(idol_hunt>80)
			{
				cout << " " << endl;
				cout << "After searching for hour you finally spot something in a tree" << endl;
				cout << "You found the immunity idol, you hid it before your tribemates see "<< endl;
					int NIdol=heroes[choice]->getIdol()+1;
				heroes[choice]->setIdol(NIdol);
				IdolsFound++;
				cout << " " << endl;
			}
			if(idol_hunt<=80 &&idol_hunt>40)
			{
				cout << "You search for hours but find nothing" << endl;
				cout << "Time to get back to camp before people get sus"<< endl;
				cout << "You have not found the immunity idol" << endl;
				cout << " " << endl;
			}
			if(idol_hunt<=40 &&idol_hunt>20)
			{
				cout << "You decideto climb a tree to find the idol" << endl;
				cout << "You lose you grip a fall out of the tree. Strength -3 "<< endl;
				int upgrade =heroes[choice]->getStrength() -1;
				heroes[choice]->setStrength(upgrade);
				cout << "You now have " << heroes[choice-10]->getStrength() << endl;
				
				cout << " " << endl;
			}
			if(idol_hunt<=20)
			{
				int jugement=0;
				cout << " " << endl;
				do{
				jugement=rand () % number_survivors_per_tribe;
				}while(heroes[jugement]->getPlayerCharacter()==1);
					cout << "You notice " << heroes[jugement]->getFirstName() << " has been watching you look for the idol." << endl;
					cout << "This is not a good look for you" << endl;
					
					if(heroes[jugement]->getTrust()>0)
					{
					int new_trust =heroes[jugement]->getTrust()-5;
					heroes[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << heroes[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << heroes[jugement]->getFirstName() <<" is now " << heroes[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			}
		
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
					if(heroes[i]->getAllied()==1)
					{
						cout <<"#" <<heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << ", Current Trust:(" << heroes[i]-getTrust() << ")------ALLIED" << endl;
					}
					if(heroes[i]->getAllied()==0)
					{
					cout <<"#"<< heroes[i]->getVoteID() << " " <<heroes[i]->getFirstName() << ", Current Trust:(" << heroes[i]-getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(heroes[trust_attempt]->getEliminated()==1);
			
					cout << " " << endl;
					cout << "You started a conversation with " << heroes[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
				if(trust_result>50)
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
				if(trust_result<=50 && trust_result>15)
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
		if(Day_Choice==6)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && heroes[i]->allied==2 && heroes[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#" << heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << endl;
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
		if(Day_Choice==5)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(heroes[i]->getPlayerCharacter()==0 && heroes[i]->getEliminated()==0)
				{
				cout <<"#"<<heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(heroes[sus]->getTricks()>80)
			{
				cout << heroes[sus]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(heroes[sus]->getTricks()>30 && heroes[sus]->getTricks()<80)
			{
				cout << heroes[sus]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(heroes[sus]->getTricks()<30)
			{
				cout << heroes[sus]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
			D_actions++;
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
	}
	
} ;
 void day_actions_villain(HvV* villains[], int number_survivors_per_tribe, int choice, int IdolsFound)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		
		cout << " " << endl;
		int Day_Choice;
		if(villains[choice-10]->getEnemies()>0)
		{
			
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do Nothing 5) Sus out other Survivors 6)Mend Relationships" << endl;
			do{
			cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(villains[choice-10]->enemies==0)
		{
		
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do Nothing 5)Sus out other Survivors" << endl;
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
				cout <<"#"<< villains[i]->getVoteID() << " " <<villains[i]->getFirstName() << endl;
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
			int idol_hunt= rand()%100;
				if(villains[choice-10]->getIdol()==1)
			{
				cout << "You search all day and find nothing" << endl;
				cout << "Maybe all the idols have been found?" << endl;
				
			}
			if(villains[choice-10]->getIdol()<1)
			{
			if(idol_hunt>80)
			{
				cout << " " << endl;
				cout << "After searching for hour you finally spot something in a tree" << endl;
				cout << "You found the immunity idol, you hid it before your tribemates see "<< endl;
				int NIdol=villains[choice-10]->getIdol()+1;
				villains[choice-10]->setIdol(NIdol);
				IdolsFound++;
				cout << " " << endl;
			}
			if(idol_hunt<=80 &&idol_hunt>40)
			{
				cout << "You search for hours but find nothing" << endl;
				cout << "Time to get back to camp before people get sus"<< endl;
				cout << "You have not found the immunity idol" << endl;
				cout << " " << endl;
			}
			if(idol_hunt<=40 &&idol_hunt>20)
			{
				cout << "You decideto climb a tree to find the idol" << endl;
				cout << "You lose you grip a fall out of the tree. Strength -3 "<< endl;
				int upgrade =villains[choice-10]->getStrength() -1;
				villains[choice-10]->setStrength(upgrade);
				cout << "You now have " << villains[choice-10]->getStrength() << endl;
				
				cout << " " << endl;
			}
			if(idol_hunt<=20)
			{
				int jugement=0;
				do{
				cout << " " << endl;
				jugement=rand () % number_survivors_per_tribe;
			}while(villains[jugement]->getPlayerCharacter()==1);
					cout << "You notice " << villains[jugement]->getFirstName() << " has been watching you look for the idol." << endl;
					cout << "This is not a good look for you" << endl;
					
					if(villains[jugement]->getTrust()>0)
					{
					int new_trust =villains[jugement]->getTrust()-5;
					villains[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << villains[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << villains[jugement]->getFirstName() <<" is now " << villains[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			
			}
		
		
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
					if(villains[i]->getAllied()==1)
					{
						cout <<"#"<< villains[i]->getVoteID() << " " << villains[i]->getFirstName() << ", Current Trust:(" << villains[i]->getTrust() << ")-----ALLIED" << endl;
					}
					if(villains[i]->getAllied()==0)
					{
					cout <<"#"<<villains[i]->getVoteID() << " " <<  villains[i]->getFirstName() << ", Current Trust:(" << villains[i]->getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(villains[trust_attempt-10]->getEliminated()==1);
					cout << " " << endl;
					cout << "You started a conversation with " << villains[trust_attempt-10]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESS
				if(trust_result>50)
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
					if(trust_result<50 && trust_result>15)
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
					if(villains[trust_attempt-10]->trust!=0)
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
		if(Day_Choice==6)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice-10 && villains[i]->allied==2 && villains[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<<villains[i]->getVoteID() << " " << villains[i]->getFirstName() << endl;
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
		if(Day_Choice==5)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(villains[i]->getPlayerCharacter()==0 && villains[i]->getEliminated()==0)
				{
				cout <<"#"<< villains[i]->getVoteID() << " " << villains[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(villains[sus-10]->getTricks()>80)
			{
				cout << villains[sus-10]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(villains[sus-10]->getTricks()>30 && villains[sus-10]->getTricks()<80)
			{
				cout << villains[sus-10]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(villains[sus-10]->getTricks()<30)
			{
				cout << villains[sus-10]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
		D_actions++;	
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
		}
	};
static void IndvidualChallenge(HvV* combined[], int number_survivors_per_tribe)
{	
		
        int PerformanceStrengthHeroes = 0;
        int BestStrenghtHeroes=0;
        int tempy1=0;
		int HeroStrength;
        string BestHero; 
		string HeroName;
   
   // Calculate total strength for Heroes tribe
        for (int i = 0; i < number_survivors_per_tribe; ++i) 
        {
            if (combined[i]->getEliminated()==0) 
            {
         do
            {
				HeroStrength=combined[i]->getStrength();
                 HeroName=combined[i]->getFirstName();
                PerformanceStrengthHeroes=rand() % HeroStrength;
               
		   }while(tempy1==PerformanceStrengthHeroes);
			
				if(PerformanceStrengthHeroes>BestStrenghtHeroes)
				{
					BestStrenghtHeroes=PerformanceStrengthHeroes;
					tempy1=BestStrenghtHeroes;
					BestHero=combined[i]->getFirstName();
				}
		}
                
                cout << HeroName << " Strength is: " << HeroStrength << " Performed: " << PerformanceStrengthHeroes << endl;
                
                
          }
          
          cout << BestHero << " Wins Immunity. Safe from the vote at tribal concil" << endl;
          for (int i=0; i<number_survivors_per_tribe; i++)
          {
			  if(BestHero==combined[i]->getFirstName())
			  {
				  combined[i]->setImmune(1);
			  }
		  }
         
	  
}	
static void Heroes_Tribal_Council(HvV* heroes[], int number_survivor_per_tribe, int choice, int blindside_result, int IdolsFound)
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
			if(heroes[i]->getAllied()==1)
			{
				cout <<"#"<<heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << " (ALLIED)" << endl;
			}
			if(heroes[i]->getAllied()==2)
			{
				cout <<"#"<<heroes[i]->getVoteID() << " " <<  heroes[i]->getFirstName() << " (ENEMY)" << endl;
			}
			if(heroes[i]->getAllied()==0)
			{
				cout <<"#"<< heroes[i]->getVoteID() << " " << heroes[i]->getFirstName() << " " << endl;
			}
		
		}
	}
	int user_vote;
	
	cin >> user_vote;
	
	heroes[user_vote]->setVotesAgainst(1);
	
	cout << " " << endl;
	cout << "If anyone has a hidden immunity idol and they want to play it now would be the time to do so" << endl;
	if(heroes[choice]->getIdol()>0)
	{
		cout << "Would you like to play your idol and ensure safety for this tribal?" << endl;
		cout << "PRESS 1)YES or 2)NO" << endl;
		int save_self;
		cin >> save_self;
		if(save_self==1)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << heroes[choice]->getFirstName() << " will not count" << endl;
			heroes[choice]->setIdolPlayed(1);
			int get_one;
			cout << " " << endl;
			int newIdol=heroes[choice]->getIdol()-1;
			heroes[choice]->setIdol(newIdol);
			cout << "Press 1" << endl;
			IdolsFound=IdolsFound-1;
			cin>>get_one;
		}
		

	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(heroes[i]->getIdol()>0)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << heroes[i]->getFirstName() << " will not count" << endl;
			heroes[i]->setIdolPlayed(1);
			cout << " " << endl;
			int newIdol=heroes[i]->getIdol()-1;
			heroes[i]->setIdol(newIdol);
			
		}
	}
	if(heroes[user_vote]->getIdolPlayed()==1)
	{
			cout << heroes[choice]->getFirstName() << " Voted: " << heroes[user_vote]->getFirstName() << "----DOES NOT COUNT" << endl;
	}
	if(heroes[user_vote]->getIdolPlayed()==0)
	{
		cout << heroes[choice]->getFirstName() << " Voted: " << heroes[user_vote]->getFirstName() << endl;
	}
	}
	
	if(choice>10)
	{	
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(heroes[i]->getIdol()>0 && heroes[i]->getPlayerCharacter()==0)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << heroes[i]->getFirstName() << " will not count" << endl;
			cout << " " << endl;
			heroes[i]->setIdolPlayed(1);
			int newIdol=heroes[i]->getIdol()-1;
			heroes[i]->setIdol(newIdol);
			
		}
	}
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
				}while(cpu_vote==i || heroes[cpu_vote]->getEliminated()==1);
			}
			
			if(heroes[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100)
				{
					do
					{
						cpu_vote=rand() % numHeroes;
					}while(cpu_vote==i || heroes[cpu_vote]->getEliminated()==1 ||(heroes[i]->getAllied()==1 && heroes[cpu_vote]->getPlayerCharacter()==1));
				}
				else
				{
					cout << "BLINDSIDE" << endl;
					cpu_vote =choice-10;
				}
				
			}
			
			if(heroes[cpu_vote]->getIdolPlayed()==1 && heroes[i]->getAllied()==1 && heroes[cpu_vote]->getPlayerCharacter()==1)
			{
				cout <<heroes[i]->getFirstName() << " Voted: " <<  heroes[cpu_vote]->getFirstName()<< "---BLINDSIDE" << "-----DOES NOT COUNT" << endl;
			}
			else if(heroes[cpu_vote]->getPlayerCharacter()==1 && heroes[i]->getAllied()==1 && heroes[cpu_vote]->getIdolPlayed()==0)
			{
				cout <<heroes[i]->getFirstName() << " Voted: " <<  heroes[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
			
			else if(heroes[cpu_vote]->getIdolPlayed()==1 && heroes[cpu_vote]->getAllied()!=1)
			{
			cout <<heroes[i]->getFirstName() << " Voted: " <<  heroes[cpu_vote]->getFirstName() << "-----DOES NOT COUNT" << endl;
			}
			else if(heroes[cpu_vote]->getIdolPlayed()==0)
			{
				cout <<heroes[i]->getFirstName() << " Voted: " <<  heroes[cpu_vote]->getFirstName()<< endl;
			}
			
			if(heroes[cpu_vote]->getIdolPlayed()==0)
			{
			total_votes=heroes[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			heroes[cpu_vote]->setVotesAgainst(total_votes);
			}
			
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
		do{
		rocks=rand()%numHeroes;
		}while(heroes[rocks]->getEliminated()==1 || heroes[rocks]->getIdolPlayed()==1);
		
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
	heroes[i]->setIdolPlayed(0) ;
	}


}

static void Villains_Tribal_Council(HvV* villains[], int number_survivor_per_tribe, int choice, int blindside_result, int IdolsFound)
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
			if(villains[i]->getAllied()==1)
			{
				cout <<"#"<<villains[i]->getVoteID() <<" " << villains[i]->getFirstName() << " (ALLIED) "<< endl;
			}
			if(villains[i]->getAllied()==2)
			{
				cout <<"#"<<villains[i]->getVoteID() <<" " << villains[i]->getFirstName() << " (ENEMY)" << endl;
			}
			if(villains[i]->getAllied()==0)
			{
			cout <<"#"<< villains[i]->getVoteID() <<" " <<villains[i]->getFirstName() << endl;
			}
		}
	}
	int user_vote;

	cin >> user_vote;
	
	user_vote=user_vote-10;
	villains[user_vote]->setVotesAgainst(1);

	cout << " " << endl;
	cout << "If anyone has a hidden immunity idol and they want to play it now would be the time to do so" << endl;
	if(villains[choice-10]->getIdol()>0)
	{
		cout << "Would you like to play your idol and ensure safety for this tribal?" << endl;
		cout << "PRESS 1)YES or 2)NO" << endl;
		int save_self;
		cin >> save_self;
		if(save_self==1)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << villains[choice-10]->getFirstName() << " will not count" << endl;
			villains[choice-10]->setIdolPlayed(1);
			cout << " " << endl;
			int newIdol=villains[choice-10]->getIdol()-1;
			villains[choice-10]->setIdol(newIdol);
			int get_one;
			cout << "Press 1" << endl;
			IdolsFound=IdolsFound-1;
			cin>>get_one;
		}
		

	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(villains[i]->getIdol()>0 && villains[i]->getPlayerCharacter()==0)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << villains[i]->getFirstName() << " will not count" << endl;
			cout << " " << endl;
			villains[i]->setIdolPlayed(1);
			int newIdol=villains[i]->getIdol()-1;
			villains[i]->setIdol(newIdol);
			
		}
	}
	if(villains[user_vote]->getIdolPlayed()==1)
	{
			cout << villains[choice-10]->getFirstName() << " Voted: " << villains[user_vote]->getFirstName() << "----DOES NOT COUNT" << endl;
	}
	if(villains[user_vote]->getIdolPlayed()==0)
	{
		cout << villains[choice-10]->getFirstName() << " Voted: " << villains[user_vote]->getFirstName() << endl;
	}

	
}
			
	if(choice<=9)
	{	
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(villains[i]->getIdol()>0)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << villains[i]->getFirstName() << " will not count" << endl;
			cout << " " << endl;
			villains[i]->setIdolPlayed(1);
			int newIdol=villains[i]->getIdol()-1;
			villains[i]->setIdol(newIdol);
			
		}
	}
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
		if(villains[i]->getAllied()!=2 && villains[i]->getAllied()!=1)
			{
				
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i || villains[cpu_vote]->getEliminated()==1);
			}
		//ALLIES VOTE
		if(villains[i]->getAllied()!=0 && villains[i]->getAllied()!=2 )
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100)
				{
					do
					{
						cpu_vote=rand() % numVillains;
					}while(cpu_vote==i || villains[cpu_vote]->getEliminated()==1 ||(villains[i]->getAllied()==1 && villains[cpu_vote]->getPlayerCharacter()==1));
				}
				if(blindside_result>100)
				{
				
					
					cpu_vote =choice-10;
				}
				
				
			}
			if(villains[cpu_vote]->getIdolPlayed()==1 && villains[i]->getAllied()==1 && villains[cpu_vote]->getPlayerCharacter()==1)
			{
				cout <<villains[i]->getFirstName() << " Voted: " <<  villains[cpu_vote]->getFirstName()<< "---BLINDSIDE" << "-----DOES NOT COUNT" << endl;
			}
			else if(villains[cpu_vote]->getPlayerCharacter()==1 && villains[i]->getAllied()==1 && villains[choice-10]->getIdolPlayed()==0)
			{
				cout <<villains[i]->getFirstName() << " Voted: " <<  villains[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
			
			else if(villains[cpu_vote]->getIdolPlayed()==1 && villains[i]->getAllied()!=1)
			{
			cout <<villains[i]->getFirstName() << " Voted: " <<  villains[cpu_vote]->getFirstName() << "-----DOES NOT COUNT" << endl;
			}
			else if(villains[cpu_vote]->getIdolPlayed()==0)
			{
			cout <<villains[i]->getFirstName() << " Voted: " <<  villains[cpu_vote]->getFirstName() <<endl;
			}
			
			
			if(villains[cpu_vote]->getIdolPlayed()==0)
			{
			total_votes=villains[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			villains[cpu_vote]->setVotesAgainst(total_votes);
			}
			
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
		do
		{
		rocks=rand()%numVillains;
		}while(villains[rocks]->getEliminated()==1 || villains[rocks]->getIdolPlayed()==1);
		
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
	villains[i]->setIdolPlayed(0) ;
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
static void random_event_cpuHeroes(HvV* heroes[], int choice, int number_survivors_per_tribe, int IdolsFound)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
	if(heroes[i]->getEliminated()==0 && heroes[i]->getPlayerCharacter()==0)
	{
	int random_Number_event1 = (rand() % 10 ) +1;
	int upgrade3 = heroes[i]->getStrength() - 1;
	int upgrade4 = heroes[i]->getStrength() + 1;
	int upgrade5 = heroes[i]->get_allied_made() + 5;
	int upgrade6 = heroes[i]->getTrustMade() + 5;
	int upgrade7 = heroes[i]->getTricks() + 5;
	int upgrade8 = heroes[i]->getStrength() - 2;
	int upgrade9 = heroes[i]->getIdol() +1;
	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;
	
	
	if(event_chance>=90)
	{
		heroes[i]->setIdol(upgrade9);
		cout << "You see " << heroes[i]->getFirstName() << " with a big smile on there face after coming out o" << endl;
		IdolsFound=IdolsFound+1;
	}
	if(event_chance>=25 && event_chance<90)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			heroes[i]->set_allied_made(upgrade5);
			cout << heroes[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << heroes[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			heroes[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << heroes[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			heroes[i]->setStrength(upgrade4);
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << heroes[i]->getFirstName() << " Cut themseleves with the machette. -3 Strength" << endl;
			heroes[i]->setStrength(upgrade8);
				cout << heroes[i]->getFirstName() << " Strenght is now: " << heroes[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << heroes[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			heroes[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << heroes[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			heroes[i]->setStrength(upgrade3);
			cout << heroes[i]->getFirstName() << " Strenght is now: " << heroes[i]->getStrength() << endl;
		}
	
	}
}
}
	}
	

};
static void random_event_cpuVillains(HvV* villains[], int choice, int number_survivors_per_tribe,int IdolsFound)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
		if(villains[i]->getEliminated()==0 && villains[i]->getPlayerCharacter()==0)
		{
	int random_Number_event1 = (rand() % 10 )+ 1;
	
	int upgrade3 = villains[i]->getStrength() - 1;
	int upgrade4 = villains[i]->getStrength() + 1;
	int upgrade5 = villains[i]->get_allied_made() + 5;
	int upgrade6 = villains[i]->getTrustMade() + 5;
	int upgrade7 = villains[i]->getTricks() + 5;
	int upgrade8 = villains[i]->getStrength() - 2;
	int upgrade9 = villains[i]->getIdol() +1;

	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;
	
	if(event_chance>=90)
	{
		villains[i]->setIdol(upgrade9);
		cout << "You hear see " << villains[i]->getFirstName() << " with a big smile on there face" << endl;
		IdolsFound=IdolsFound+1;
	}
	
	if(event_chance>=25 && event_chance<90)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			villains[i]->set_allied_made(upgrade5);
			cout << villains[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << villains[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			villains[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << villains[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			villains[i]->setStrength(upgrade4);
			cout << villains[i]->getFirstName() << " Strenght is now: " << villains[i]->getStrength() << endl;
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << villains[i]->getFirstName() << " cut themselves with the machette, -3 Strenght" << endl;
			villains[i]->setStrength(upgrade8);
			cout << villains[i]->getFirstName() << " Strenght is now: " << villains[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << villains[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			villains[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << villains[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			villains[i]->setStrength(upgrade3);
			cout << villains[i]->getFirstName() << " Strenght is now: " << villains[i]->getStrength() << endl;
		}
	
	}
}

}
}

};
static void Merge_Tribal_Council(HvV* combined[], int number_survivor_per_tribe, int choice, int blindside_result, int IdolsFound, int days, HvV* heroes[], HvV* villains[])
{
	int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;
	 int numHeroes = 0;
		int cpu_vote;
		
	
    // Counting the number of active heroes and villains
    for (int i = 0; i < number_survivor_per_tribe; i++)
    {
		
        if (combined[i]->getEliminated() ==0 )
        {
            numHeroes++;
        }
        

    }

	
	cout << "Welcome to trbal council, please cast your vote for who you would like to go home tonight" << endl;
	
	
	
	for( int i=0; i<number_survivor_per_tribe; i++)
	{
		if( combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
		{
			if(combined[i]->getAllied()==1&& combined[i]->getImmune()==0)
			{
				cout <<"#"<<combined[i]->getVoteID() << " "<< combined[i]->getFirstName() << "----(ALLIED)" << endl;
			}
			if(combined[i]->getAllied()==2&& combined[i]->getImmune()==0)
			{
				cout <<"#"<< combined[i]->getVoteID() << " "<<combined[i]->getFirstName() << "----(ENEMY)" << endl;
			}
			if(combined[i]->getAllied()==0&& combined[i]->getImmune()==0)
			{
				cout <<"#"<< combined[i]->getVoteID() << " "<<combined[i]->getFirstName() << " " << endl;
			}
		
		}
	}
	int user_vote;
	
	cin >> user_vote;
	
	combined[user_vote]->setVotesAgainst(1);
	
	
	if(combined[choice]->getIdol()>0 && days<25)
	{
		cout << " " << endl;
	cout << "If anyone has a hidden immunity idol and they want to play it now would be the time to do so" << endl;
		cout << "Would you like to play your idol and ensure safety for this tribal?" << endl;
		cout << "PRESS 1)YES or 2)NO" << endl;
		int save_self;
		cin >> save_self;
		if(save_self==1)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << combined[choice]->getFirstName() << " will not count" << endl;
			combined[choice]->setIdolPlayed(1);
			int get_one;
			cout << " " << endl;
			int newIdol=combined[choice]->getIdol()-1;
			combined[choice]->setIdol(newIdol);
			cout << "Press 1" << endl;
			IdolsFound=IdolsFound-1;
			cin>>get_one;
		}
		

	
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(combined[i]->getIdol()>0 &&combined[i]->getImmune()==0 && days<25 && combined[i]->getPlayerCharacter()==0)
		{
			cout << "This is a hidden immunity idol" << endl;
			cout << "All votes for " << combined[i]->getFirstName() << " will not count" << endl;
			combined[i]->setIdolPlayed(1);
			cout << " " << endl;
			int newIdol=combined[i]->getIdol()-1;
			combined[i]->setIdol(newIdol);
			
		}
	}
	if(combined[user_vote]->getIdolPlayed()==1)
	{
			cout << combined[choice]->getFirstName() << " Voted: " << combined[user_vote]->getFirstName() << "----DOES NOT COUNT" << endl;
	}
	if(combined[user_vote]->getIdolPlayed()==0)
	{
		cout << combined[choice]->getFirstName() << " Voted: " << combined[user_vote]->getFirstName() << endl;
	}
	}
	
	
	
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
		if(combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
		{
			if(combined[i]->getAllied()==2 && combined[choice]->getImmune()==0)
			{
				cpu_vote=choice;
			}
			if(combined[i]->getAllied()==2 && combined[choice]->getImmune()==1)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1|| combined[cpu_vote]->getImmune()==1);
			}
			int total_votes=0;
			if(combined[i]->getAllied()==0)
			{
				do
				{
					cpu_vote=rand() % numHeroes;
				}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1|| combined[cpu_vote]->getImmune()==1);
			}
			
			if(combined[i]->getAllied()==1)
			{
			
				//TRIBE MATES TURN ON YOU
				
				if(blindside_result<100 && combined[choice]->getIdolPlayed()==0)
				{
					do
					{
						cpu_vote=rand() % numHeroes;
					}while(cpu_vote==i || combined[cpu_vote]->getEliminated()==1 || combined[cpu_vote]->getImmune()==1 ||(combined[i]->getAllied()==1 && combined[cpu_vote]->getPlayerCharacter()==1));
				}
				else
				{
				
					cpu_vote =choice;
				}
				
			}
			
			if((combined[cpu_vote]->getIdolPlayed()==1&&  combined[cpu_vote]->getPlayerCharacter()==1) && combined[i]->getAllied()==1)
			{
				cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName()<< "---BLINDSIDE" << "-----DOES NOT COUNT" << endl;
			}
			else if((combined[cpu_vote]->getPlayerCharacter()==1 && combined[i]->getAllied()==1) && combined[cpu_vote]->getIdolPlayed()==0)
			{
				cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName()<< "---BLINDSIDE" << endl;
			}
			
			else if(combined[cpu_vote]->getIdolPlayed()==1 && combined[cpu_vote]->getAllied()!=1)
			{
			cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName() << "-----DOES NOT COUNT" << endl;
			}
			else if(combined[cpu_vote]->getIdolPlayed()==0)
			{
				cout <<combined[i]->getFirstName() << " Voted: " <<  combined[cpu_vote]->getFirstName()<< endl;
			}
			
			if(combined[cpu_vote]->getIdolPlayed()!=1)
			{
			total_votes=combined[cpu_vote]->getVotesAgainst();
			total_votes += 1;
			combined[cpu_vote]->setVotesAgainst(total_votes);
			}
			
		}
		
	}


	for (int i=0; i<number_survivor_per_tribe; i++)
	{
	
			if(combined[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=combined[i]->getVotesAgainst();
				MostVotedSurvivor=combined[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivor_per_tribe; i++)
	{
			if(combined[i]->getVotesAgainst()> SecondMost && combined[i]->getVotesAgainst()<=MostVotes && combined[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=combined[i]->getVotesAgainst();

			}
		
	}

	if(SecondMost==MostVotes)
	{
		cout << " " << endl;
		cout << "We have a tie, we will now draw rocks to see who goes home" << endl;
		
		int rocks;
		do{
		rocks=rand()%numHeroes;
		}while(combined[rocks]->getEliminated()==1 || combined[rocks]->getIdolPlayed()==1 || combined[rocks]->getImmune()==1);
		
		cout << combined[rocks]->getFirstName() << " You drew the white rock, please bring me your torch. " << endl;
		cout << combined[rocks]->getFirstName() << " the tribe has spoken" << endl;
		combined[rocks]->setEliminate(1);
		combined[rocks]->setJury(1);
			if(combined[rocks]->getOGID()<10)
			{
				heroes[combined[rocks]->getOGID()]->setEliminate(1);
			}
			if(combined[rocks]->getOGID()>9)
			{
				villains[combined[rocks]->getOGID()-10]->setEliminate(1);
			}
		cout << " " << endl;
	}

	else
	{
		cout << " " << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << " that's enough, bring me your torch" << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " the tribe has spoken" << endl;
	
	cout << " " << endl;
	combined[MostVotedSurvivor]->setEliminate(1);
	combined[MostVotedSurvivor]->setJury(1);
	if(combined[MostVotedSurvivor]->getOGID()<10)
			{
				heroes[combined[MostVotedSurvivor]->getOGID()]->setEliminate(1);
			}
			if(combined[MostVotedSurvivor]->getOGID()>9)
			{
				villains[combined[MostVotedSurvivor]->getOGID()-10]->setEliminate(1);
			}
	}
	//Clears Votes against 
	for(int i=0; i<number_survivor_per_tribe; i++)
	{
	combined[i]->setVotesAgainst(0) ;
	combined[i]->setIdolPlayed(0) ;
	combined[i]->setImmune(0);
	}


}
static void random_event_cpuMERGE(HvV* combined[], int choice, int number_survivors_per_tribe, int IdolsFound)
{
	
	for(int i=0; i<number_survivors_per_tribe; i++)
	{
	if(combined[i]->getEliminated()==0 && combined[i]->getPlayerCharacter()==0)
	{
	int random_Number_event1 = (rand() % 10 ) +1;
	int upgrade3 = combined[i]->getStrength() - 1;
	int upgrade4 = combined[i]->getStrength() + 1;
	int upgrade5 = combined[i]->get_allied_made() + 5;
	int upgrade6 = combined[i]->getTrustMade() + 5;
	int upgrade7 = combined[i]->getTricks() + 5;
	int upgrade8 = combined[i]->getStrength() - 2;
	int upgrade9 = combined[i]->getIdol() +1;
	if(random_Number_event1>5)
	{
	int event_chance=rand()%100;
	
	
	if(event_chance>=90)
	{
		combined[i]->setIdol(upgrade9);
		cout << "You see " << combined[i]->getFirstName() << " with a big smile on there face after coming out o" << endl;
		IdolsFound=IdolsFound+1;
	}
	if(event_chance>=25 && event_chance<90)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			combined[i]->set_allied_made(upgrade5);
			cout << combined[i]->getFirstName() << " has made some friends around camp" << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Has gained trust with the tribe by fishing" << endl;
			combined[i]->set_trust_built(upgrade6);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Got some good rest +1 Strenght" << endl;
			combined[i]->setStrength(upgrade4);
		}
	}
	if(event_chance<25)
	{
		int stat_change=rand()%2;
		if(stat_change==0)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Cut themseleves with the machette. -3 Strength" << endl;
			combined[i]->setStrength(upgrade8);
				cout << combined[i]->getFirstName() << " Strenght is now: " << combined[i]->getStrength() << endl;
		}
		if(stat_change==1)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Is starting to play much harder than before. +5 Tricks" << endl;
			combined[i]->setTricks(upgrade7);
		}
		if(stat_change==2)
		{
			cout << " " << endl;
			cout << combined[i]->getFirstName() << " Got some bad rest -1 Strenght" << endl;
			combined[i]->setStrength(upgrade3);
			cout << combined[i]->getFirstName() << " Strenght is now: " << combined[i]->getStrength() << endl;
		}
	
	}
}
}
	}
	

};
static void day_actions_MERGE(HvV* combined[], int number_survivors_per_tribe, int choice, int IdolsFound)
{
	
	int D_actions=0;
	while (D_actions<3)
	{
		cout << " " << endl;
		int Day_Choice;
		cout << "You have " << 3 - D_actions << " actions left for the day" << endl;
		if(combined[choice]->getEnemies()>0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5) Sus out other Survivors 6)Mend Relationships" << endl;
		do{
		cin >> Day_Choice;
		}while(Day_Choice<1 && Day_Choice>5);
		}
		if(combined[choice]->enemies==0)
		{
		cout << "1) Attempt Aliance 2) Look for Idol 3)Build Trust 4)Do nothing 5)Sus out other Survivors" << endl;
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
		
				
				if(i != choice && combined[i]->allied==0 && combined[i]->allied!=2 && combined[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#"<< combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
			}
				do{
				cin >> al_attempt;
				}while(combined[al_attempt]->getEliminated()==1);
					cout << " " << endl;
					cout << "You talk to " << combined[al_attempt]->getFirstName() << " about a potential alliance" << endl;
				int al_result = rand() % 100;
				//SUCCESS
				if(al_result>74)
				{
					if(combined[al_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;

								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID(); // Change this to the line number you want to read
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
							}
						if(combined[al_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID(); // Change this to the line number you want to read
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
								inputFile.close();
						}
						
						
							
					cout << " " << endl;
					cout << "You have successfuly created and alliance with " << combined[al_attempt]->getFirstName() << "." << endl;
					combined[al_attempt]->setAllied(1);
					combined[choice]->allies_made=combined[choice]->allies_made+5;
					
					D_actions++;
				}
				//NETURAL RESULT
				if(al_result<=74 && al_result>15)
				{
					
					if(combined[al_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID(); // Change this to the line number you want to read
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
							}
							
							if(combined[al_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine =combined[al_attempt]->getOGID()-10; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have failed to create an alliance with " << combined[al_attempt]->getFirstName() << "." << endl;
					D_actions++;
				}
				//NEGATIVE RESULT +40
				if(al_result<=15)
				{
					
					if(combined[al_attempt]->getOGID()<10)
					{
						ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+40; // Change this to the line number you want to read
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
							}
							
							if(combined[al_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[al_attempt]->getOGID()+30; // Change this to the line number you want to read
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
						}
							
					cout <<"You have become enemies with " << combined[al_attempt]->getFirstName() << "." << endl;
					combined[al_attempt]->setAllied(2);
					combined[choice]->enemies=combined[choice]->enemies+1;
					D_actions++;
				}
				cout << " " << endl;
			
			
		}
		if(Day_Choice==2)
		{
			//Player will have a chance to find a hidden immiunity idol 
				int idol_hunt= rand()%100;
					if(combined[choice]->getIdol()==1)
			{
				cout << "You search all day and find nothing" << endl;
				cout << "Maybe all the idols have been found?" << endl;
				
			}
				if(combined[choice]->getIdol()==0)
				{
				
			if(idol_hunt>80)
			{
				cout << " " << endl;
				cout << "After searching for hour you finally spot something in a tree" << endl;
				cout << "You found the immunity idol, you hid it before your tribemates see "<< endl;
					int NIdol=combined[choice]->getIdol()+1;
				combined[choice]->setIdol(NIdol);
				IdolsFound++;
				cout << " " << endl;
			}
			if(idol_hunt<=80 &&idol_hunt>40)
			{
				cout << "You search for hours but find nothing" << endl;
				cout << "Time to get back to camp before people get sus"<< endl;
				cout << "You have not found the immunity idol" << endl;
				cout << " " << endl;
			}
			if(idol_hunt<=40 &&idol_hunt>20)
			{
				cout << "You decideto climb a tree to find the idol" << endl;
				cout << "You lose you grip a fall out of the tree. Strength -3 "<< endl;
				int upgrade =combined[choice]->getStrength() -1;
				combined[choice]->setStrength(upgrade);
				cout << "You now have " << combined[choice-10]->getStrength() << endl;
				
				cout << " " << endl;
			}
			if(idol_hunt<=20)
			{
				int jugement=0;
				cout << " " << endl;
				do{
				jugement=rand () % number_survivors_per_tribe;
				}while(combined[jugement]->getPlayerCharacter()==1);
					cout << "You notice " << combined[jugement]->getFirstName() << " has been watching you look for the idol." << endl;
					cout << "This is not a good look for you" << endl;
					
					if(combined[jugement]->getTrust()>0)
					{
					int new_trust =combined[jugement]->getTrust()-5;
					combined[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << combined[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << combined[jugement]->getFirstName() <<" is now " << combined[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			}
		
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
				
				if(i != choice && combined[i]->getEliminated()==0) //Checks to make sure that the player cannot attempt to build trust with themselves 
				{
					if(combined[i]->getAllied()==1)
					{
						cout <<"#" <<combined[i]->getVoteID() << " " << combined[i]->getFirstName() << ", Current Trust:(" << combined[i]->getTrust() << ")------ALLIED" << endl;
					}
					if(combined[i]->getAllied()==0)
					{
					cout <<"#"<< combined[i]->getVoteID() << " " <<combined[i]->getFirstName() << ", Current Trust:(" << combined[i]->getTrust() << ")" << endl;
					}
				}
			}
			do{
			cin >> trust_attempt;
			}while(combined[trust_attempt]->getEliminated()==1);
			
					cout << " " << endl;
					cout << "You started a conversation with " << combined[trust_attempt]->getFirstName() << ". " << endl;
				
				int trust_result = rand() % 100;
				//SUCCESSFUL RESULT
				if(trust_result>50)
				{
					
					if(combined[trust_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+30; // Change this to the line number you want to read
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
							}
							
							
							if(combined[trust_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+20; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have successfuly build trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
					int new_trust=combined[trust_attempt]->getTrust()+5;
					combined[trust_attempt]->setTrust(new_trust);
					cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					
					D_actions++;
					}
					//NEUTRAL RESULT
				if(trust_result<=50 && trust_result>15)
				{
					
					if(combined[trust_attempt]->getOGID()<10)
					{
					ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+50; // Change this to the line number you want to read
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
							}
							
							if(combined[trust_attempt]->getOGID()>9)
						{
							ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+40; // Change this to the line number you want to read
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
						}
							
					cout << " " << endl;
					cout << "You have failed to build trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
					cout << " " << endl;
					D_actions++;
				}
									//NEGATVIE RESULT trust_attempt 
					if(trust_result<=15)
					{
						if(combined[trust_attempt]->getOGID()<10)
					{
							ifstream inputFile("Heroes_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
							
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+20; // Change this to the line number you want to read
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
						}
						
						if(combined[trust_attempt]->getOGID()>9)
						{
							
					ifstream inputFile("Villians_Alliance.csv");

				// Check if the file was opened successfully
						if (!inputFile) 
						{
							cout << "Failed to open the file." << endl;
						
								}

					// Skip lines until the desired line
						int targetLine = combined[trust_attempt]->getOGID()+10; // Change this to the line number you want to read
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
						}
						
						cout <<"You have lost trust with " << combined[trust_attempt]->getFirstName() << "." << endl;
						if(combined[trust_attempt]->trust!=0)
						{
						combined[trust_attempt]->trust=combined[trust_attempt]->trust-5;
						}
						cout <<"You now have " << combined[trust_attempt]->getTrust()<< " with  " << combined[trust_attempt]->getFirstName() << "." << endl;
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
				int upgrade =combined[choice]->getStrength() +1;
				combined[choice]->setStrength(upgrade);
				cout << "You now have " << combined[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEUTRAL
			if(do_nothing_result<=75 && do_nothing_result>15)
			{
				cout << " " << endl;
				cout << "Your back hurts from laying around the shelter" << endl;
				cout << "You do not gain strength" << endl;
				cout << "You now have " << combined[choice]->getStrength() << endl;
				cout << " " << endl;
			}
			//NEGATIVE
			if(do_nothing_result<=15)
			{
				int jugement=0;
				
				 jugement=rand () % number_survivors_per_tribe;
				
				cout << " " << endl;
				cout << "You hear " << combined[jugement]->getFirstName() << " talking mad trash about you for not doing anything" << endl;
					if(combined[jugement]->getTrust()>0)
					{
					int new_trust =combined[jugement]->getTrust()-5;
					combined[jugement]->setTrust(new_trust);
					}
				cout << "You have lost trust with " << combined[jugement]->getFirstName() << "." << endl;
				cout << "Your trust with " << combined[jugement]->getFirstName() <<" is now " << combined[jugement]->getTrust()<< "." << endl;
				cout << " " << endl;
			}
			D_actions++;
		cout << combined[choice]->strength<< " is current strength for you" << endl;
		}
		if(Day_Choice==6)
		{
			
			cout << "Which relationship would you like to try to repair?" << endl;
			for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(i != choice && combined[i]->allied==2 && combined[i]->getEliminated()==0)//checks to make sure that the player cannot make an alliance with themselves 
				{
				cout <<"#" << combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
				
			}
			int mend_choice;
			do{
			cin>>mend_choice;
		}while(combined[mend_choice]->getAllied()!=2);
			
			int fix_friend=0;
			fix_friend=rand()%100;
			
			if(fix_friend<=49)
			{
				cout << combined[mend_choice]->getFirstName() << " will not hear you out" << endl;
				cout << "You remain enemies with " <<  combined[mend_choice]->getFirstName() << endl;
			D_actions++;
			}
			if(fix_friend>=50)
			{
				cout << combined[mend_choice]->getFirstName() << " accepts your apology" << endl;
				cout <<combined[mend_choice]->getFirstName() << " is no longer you enemy" << endl;
				int new_E;
				new_E=combined[choice]->getEnemies();
				combined[choice]->setEnemies(new_E);
				combined[mend_choice]->setAllied(0);
				D_actions++;
			}
			
		}
		if(Day_Choice==5)
		{
			
			cout << "Which Survivor would you like to sus out?" << endl;
				for (int i=0;i<number_survivors_per_tribe; i++)
			{
		
				
				if(combined[i]->getPlayerCharacter()==0 && combined[i]->getEliminated()==0)
				{
				cout <<"#"<<combined[i]->getVoteID() << " " << combined[i]->getFirstName() << endl;
				}
				
			}
			
			int sus;
			cin>> sus;
			cout << " " << endl;
			if(combined[sus]->getTricks()>80)
			{
				cout << combined[sus]->getFirstName() << " cannot be trusted" << endl;
				cout << " " << endl;
			}
			
			if(combined[sus]->getTricks()>30 && combined[sus]->getTricks()<80)
			{
				cout << combined[sus]->getFirstName() << " seems trust worthy but your just not sure " << endl;
				cout << " " << endl;
			}
			if(combined[sus]->getTricks()<30)
			{
				cout << combined[sus]->getFirstName() << " is an honest person, they will not double cross you" << endl;
				cout << " " << endl;
			}
			
			D_actions++;
		}
		
		int getone;
		cout << "PRESS 1" << endl; 
		cin>>getone;
	}
	
} ;

};
        

int main() 
{

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
				int days=1;
				// Initialize Survivor objects
				HvV* heroes[number_survivors_per_tribe] = 
				{
						//name           tribe         strength, vote_id, elim allied, trust, immune, enemies, tribe_I, challenge wins, allies made, trust built, Idol, Jury
        new HvV("Sugar Kiper",  "Heroes",             13,        0, 0,0,        0,0,0,    0,    0,   0,        0, 0,           0,                  0,      0,        0,0,0,0),
        new HvV("Stephenie LaGrossa",  "Heroes",      15,        1, 0, 0,      0, 0, 0,  0,    0,   0,        0,   0,         0,                  0,      0,        0,0,0,1),
        new HvV("Cercie Fields",  "Heroes",           11,        2,  0, 0,     0, 0, 0,  0,    0,   0,        0 ,    0,       0,                  0,      0,        0,0,0,2),
        new HvV("Tom Westman",  "Heroes",             16,        3, 0,   0,    0, 0, 0,  0,    0,   0,        0,       0,     0,                  0,      0,        0,0,0,3),
        new HvV("James Clement",  "Heroes",           15,        4,  0,   0,   0, 0, 0,  0,   0,   0,        0,  0,          0,                  0,      0,        0,0,0,4),
        new HvV("J.T Thomas",  "Heroes",              16,        5,  0, 0,     0, 0, 0,  0,    0,   0,        0,   0,         0,                  0,      0,        0,0,0,5),
        new HvV("Amanda Kimmel",  "Heroes",           15,        6,  0, 0,     0, 0, 0,  0,    0,   0,        0,    0,        0,                  0,      0,        0,0,0,6),
        new HvV("Candice Woodcock",  "Heroes",        14,        7,  0, 0,     0, 0, 0,  0,    0,   0,        0,     0,       0,                  0,      0,        0,0,0,7),
        new HvV("Rupert Boneham",  "Heroes",          17,        8,  0, 0,     0, 0, 0,  0,    0,   0,        0,      0,      0,                  0,      0,        0,0,0,8),
        new HvV("Colby Donaldson",  "Heroes",         15,        9,  0, 0,     0,  0, 0, 0,    0,   0,        0,       0,     0,                  0,      0,        0,0,0,9)
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
        new HvV("Courtney Yates",  "Villains",    12,         10, 0,  0,   0,0, 0,    0,     0,   0,        0,      0,  0,              0,                0,         0,0,0,10),
        new HvV("Russell Hantz",  "Villains",     15,         11, 0,   90,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0,0,0,11),
        new HvV("Randy Bailey",  "Villains",      13,         12, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,      0,          0,                0,         0,0,0,12),
        new HvV("Tyson Apostol",  "Villains",     17,         13, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,   0,             0,                0,         0,0,0,13),
        new HvV("Boston Rob",  "Villains",        18,         14, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,   0,             0,                0,         0,0,0,14),
        new HvV("Coach Wade",  "Villains",        14,         15, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0,0,0,15),
        new HvV("Jerri Manthey",  "Villains",     15,         16, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,     0,           0,                0,         0,0,0,16),
        new HvV("Sandra Diaz-Twine ",  "Villains",11,         17, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,          0,0,0,17),
        new HvV("Parviti Shallow ",  "Villains",  16,         18, 0,   0,  0, 0, 0,   0,     0,   0,        0,      0,    0,            0,                0,         0,0,0,18),
        new HvV("Danielle DiLorenzo", "Villains", 16,         19, 0,  0,   0, 0, 0,   0,     0,   0,        0,      0,     0,           0,                0,         0,0,0,19)
				};
					
					//villains[0]->set_allied_made(50);
						for(int i=0; i<number_survivors_per_tribe; i++)
						{
							int newTricks=rand () % 100;
						villains[i]->setTricks(newTricks);
						villains[i]->setAllied(0);
							/*if(i==2 || i==4  || i==0 || i==6 ||i==8)
							{
								villains[i]->setEliminate(1);
							}
					
						}
							for(int i=0; i<number_survivors_per_tribe; i++)
						{
							int newTricks=rand () % 100;
						heroes[i]->setTricks(newTricks);
							if(i==2 || i==4  || i==0 || i==6 )
							{
								heroes[i]->setEliminate(1);
							}*/
						}
					
				cout << "Would you like to play as a Hero or Villain? " << endl;
				cout <<"Press 1 for Hero. " << " " << "Press 2 for Villain" << endl;
						int character_choice;
						cin >> character_choice;
						//TEST
					
					if(character_choice == 1)
					{
					choice = heroes[0]->selectSurvivor(heroes, number_survivors_per_tribe);
					}
				if (character_choice == 2)
					{
					choice = villains[0]->selectSurvivorVillain(villains, number_survivors_per_tribe);

					}
	
	//TRIBAL STAGE 
	int IdolsFound=0;
    while(days<15)
    {
			int medical=0;
			int blindside_result=0;
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(villains[choice-10]->getAlliedMade()>15 && villains[choice-10]->getPlayerCharacter()==1)
				{
					
					int NewTricks= villains[i]->getTricks();
				
					int newTrust=villains[i]->getTrust();
				
					int blindside_chance=+NewTricks-newTrust;
					
					 blindside_result= rand() % blindside_chance;

					
				 }
			 }
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(heroes[choice]->getAlliedMade()>15 && heroes[choice]->getPlayerCharacter()==1)
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
					heroes[0]->day_actions_hero(heroes, number_survivors_per_tribe, choice, IdolsFound);


					}
				if(character_choice==2)
					{
					villains[0]->day_actions_villain(villains, number_survivors_per_tribe, choice, IdolsFound);
					}
	
					
					HvV::random_event_cpuHeroes(heroes, choice, number_survivors_per_tribe, IdolsFound);
					HvV::random_event_cpuVillains(villains, choice, number_survivors_per_tribe, IdolsFound);
					
					cout << " " << endl;
	
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
					
				for(int i=0; i<number_survivors_per_tribe; i++)	
				{
					if(heroes[i]->getStrength()==0)
					{
						cout << heroes[i]->getFirstName() << " has substained too many injuries on the island" << endl;
						cout << "For that reason they will be medically evacuated from the game" << endl;
						cout << "There will be no Tribal Council Tonight" << endl;
						heroes[i]->setEliminate(1);
						medical++;
					}
					if(villains[i]->getStrength()==0)
					{
						cout << villains[i]->getFirstName() << " has substained too many injuries on the island" << endl;
						cout << "For that reason they will be medically evacuated from the game" << endl;
						cout << "There will be no Tribal Council Tonight" << endl;
						villains[i]->setEliminate(1);
						medical++;
					}
				}
				if(days==11)
				{
					cout << "Welcome to day 11 Survivors" << endl;
					cout << "Today there will be no Immunity Challenge" << endl;
					cout << "Both teams going to Tribal Concil and will vote a tribemate off" << endl;
					cout << "Press 1" << endl;
					int press_enter;
					cout << "Press 1" << endl;
					cin >> press_enter;
					HvV::Heroes_Tribal_Council( heroes,  number_survivors_per_tribe,  choice,  blindside_result, IdolsFound);
					cout << "Press 1" << endl;
					cin>> press_enter;
					HvV::Villains_Tribal_Council( villains,  number_survivors_per_tribe,  choice,  blindside_result, IdolsFound);
				}
	
	cout << " " <<  endl;
		if(medical<=0 && days!=11)
		{
		HvV::tribeChallenge(heroes , villains, number_survivors_per_tribe, choice, blindside_result, IdolsFound);
		}
		if((heroes[choice]->getEliminated()==1 && heroes[choice]->getPlayerCharacter()==1)||(villains[choice-10]->getEliminated()==1 && villains[choice-10]->getPlayerCharacter()==1))
		{
				Survivor::Loser();
				return 0;
		}
		days=days+2;
	cout << " " << endl;
	}

	//MERGE BELOW
	
	cout << " " << endl;
	cout << " " << endl;
	cout <<"Survivors you can drop your buffs, you are no longer two tribes" << endl;
	cout << "Welcome to the merge!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	const int number_survivors_per_tribe = 11;

		HvV* combined[number_survivors_per_tribe];
		int index = 0;
	
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (heroes[i]->getEliminated() == 0)
			 {
			combined[index++] = heroes[i];
			}
		}
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (villains[i]->getEliminated() == 0) 
			{
			combined[index++] = villains[i];
			
			}
		}
		for(int i=0; i<number_survivors_per_tribe; i++)
		{
			if(combined[i]->getOGID()<10)
			{
				combined[i]->setEliminate(heroes[i]->getEliminated());
				combined[i]->setEliminate(heroes[i]->get_allied_made());
				combined[i]->setEliminate(heroes[i]->getAllied());
			}
			if(combined[i]->getOGID()>9)
			{
			combined[i]->setEliminate(villains[i]->getEliminated());	
			combined[i]->setEliminate(villains[i]->get_allied_made());
			combined[i]->setEliminate(villains[i]->getAllied());
			}
		}
		
		for (int i=0; i<number_survivors_per_tribe;i++)
		{
			combined[i]->setVotesAgainst(0);
			combined[i]->setVoteID(i);
		}
		
		for(int i=0; i<number_survivors_per_tribe;i++)
		{
			if(combined[i]->getPlayerCharacter()==1)
			{
				choice=i;
			}
		}





	while (days>=15 && days<25)
	{
		cout <<"It is day: " << days << endl;
			
			int blindside_result=0;
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(combined[choice]->getAlliedMade()>15 && combined[choice]->getPlayerCharacter()==1)
				{
					
					int NewTricks= combined[i]->getTricks();
				
					int newTrust=combined[i]->getTrust();
				
					int blindside_chance=+NewTricks-newTrust;
					
					 blindside_result= rand() % blindside_chance;

					
				 }
			 }
		
		
		
		cout <<"The remaining Survivors are: " << endl;
		for (int i = 0; i < 10; i++)
		 {
				if(combined[i]->getEliminated()==0)
				{
				cout<<combined[i]->getFirstName() << " Yin Yang Tribe" << endl;
				}
			}
		int new_count = 0;
		
		
		HvV :: day_actions_MERGE(combined,number_survivors_per_tribe, choice,IdolsFound);
		
		HvV::random_event_cpuHeroes(combined, choice, number_survivors_per_tribe, IdolsFound);
		
		HvV::IndvidualChallenge(combined, number_survivors_per_tribe);
		int pressONE;
		cout << "PRESS 1" << endl;
		cin>>pressONE;
		
		if(days!=29)
		{//HvV::IndvidualChallenge(heroes,  villains, number_survivors_per_tribe);
		HvV::Merge_Tribal_Council(combined, number_survivors_per_tribe, choice, blindside_result, IdolsFound, days, heroes, villains);
	}	
		int press;
		cout << "PRESS 1" << endl;
		cin >> press;
		
	
		
		
		if(combined[choice]->getEliminated()==1 && combined[choice]->getPlayerCharacter()==1)
		{
				Survivor::Loser();
				return 0;
		}
		days=days+2;
	}
		//FINAL TRIBAL & JURY STAGE
		// IF WORKED, SHOULD DISPLAY THE 3 SURVIVORS
		// WHERE ASHLEY STOPPED
		cout << "WELCOME TO THE FINAL TRIBAL:" << endl;
		cout << "The survivors that made it to the final tribal are..." << endl;
		for(int i=0; i<number_survivors_per_tribe;i++)
		{
			if(combined[i]->getEliminated()==0)
			{
				cout << combined[i]->getFirstName() << endl;
			}
		}
		cout << endl << endl;
		int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;

		int jury_cpu_votes;
		int new_count1 = 0;
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if (heroes[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << heroes[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if ( villains[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << villains[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
	for (int i=0; i<number_survivors_per_tribe; i++)
	{
	
			if(combined[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=combined[i]->getVotesAgainst();
				MostVotedSurvivor=combined[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivors_per_tribe; i++)
	{
			if(combined[i]->getVotesAgainst()> SecondMost && combined[i]->getVotesAgainst()<=MostVotes && combined[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=combined[i]->getVotesAgainst();

			}
		
	}
	
	if(MostVotedSurvivor>SecondMost)
	{
		cout << " " << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " you are the sole survivor" << endl;
	}
	
	if(SecondMost==MostVotes)
	{
		for(int i; i<number_survivors_per_tribe; i++)
		{
		if(combined[i]->getVoteID()!=MostVotedSurvivor || combined[i]->getVoteID()!=SecondMost)
		{
			combined[i]->setEliminate(1);
			combined[i]->setJury(1);
		}	
		}
		
		cout << " " << endl;
		cout << "We have a tie, the jury will not vote for the two most voted" << endl;
			for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if (heroes[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << heroes[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if ( villains[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1 );
					
					cout << villains[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
	
	cout << " " << endl;
	}
	break;

}



//Survivor::Loser();
	
//Survivor:: Winner();
	 //This is the end of the merge loop


	
				case 2:
	
						while(replay==1)
						{
								int days=1;
						// Initialize Survivor objects
						Samoa* galu[number_survivors_per_tribe] = 
						{
						//name           tribe         strength, vote_id,elim, allied,sitout, trust, immune, enemies, tribe_I, challenge wins, allies made, trust built
        new Samoa("Yasmin Giles",  "Galu",             13,        0,0,   0,  0,   0,0,    5,    0,   0,   0,         0,       0,            0,                  0,0,0.0),
        new Samoa("Russell Swan",  "Galu",             15,        1, 0,  0,  0,   0,0,	   5,    0, 0,     0,   0,      0,                        0,0,0,1),
        new Samoa("Erik Cardona",  "Galu",             11,        2, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                      0,0,0,2),
        new Samoa("Kelly Sharbaugh",  "Galu",          16,        3, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                    0,0,0,3),
        new Samoa("John Fincher",  "Galu",             15,        4, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                  0,0,0,4),
        new Samoa("Dave Ball",  "Galu",                16,        5, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                  0,0,0,5),
        new Samoa("Monica Padilla",  "Galu",           15,        6, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                    0,0,0,6),
        new Samoa("Shambo Waters",  "Galu",            14,        7, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                 0,0,0,7),
        new Samoa("Brett Clouser",  "Galu",            17,        8, 0,  0,  0,   0,0,    5,    0,   0,   0,      0,   0,                 0,0,0,8),
        new Samoa("Laura Morett",  "Galu",             15,        9, 0,  0,  0,   0,0 ,   5,    0,    0,  0,      0,   0,                    0,0,0,9)
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
        new Samoa("Marisa Cailhan",  "Foa Foa",        12,         10,0,  0,    0,0,  0,   5,     0,     0, 0,     0,   0,       0,               0,           0,10),
        new Samoa("Mike Borassi",  "Foa Foa",          15,         11,0,   0,   0,0,  0, 5,     0,     0,   0,   0,          0,               0,           0,0,11),
        new Samoa("Betsy Bolan",  "Foa Foa",           13,         12,0,  0,    0,0,  0,   5,     0,     0, 0,     0,          0,               0,           0,0,12),
        new Samoa("Ashley Trainer",  "Foa Foa",        17,         13,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0,0,13),
        new Samoa("Liz Kim",  "Foa Foa",               18,         14,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0,0,14),
        new Samoa("Jaison Robinson",  "Foa Foa",       14,         15,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0,0,15),
        new Samoa("Mick Trimming",  "Foa Foa",         15,         16,0,  0,    0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0,0,16),
        new Samoa("Ben Browning",  "Foa Foa",          11,         17,0,   0,   0,0,  0,   5,     0,     0,  0,    0,          0,               0,           0,0,17),
        new Samoa( "Russell Hantz ",  "Foa Foa",        16,         18,0,  0,   0,0,   0,  5,     0,     0,   0,   0,          0,               0,           0,0,18),
        new Samoa("Natalie White", "Foa Foa",          16,         19,0,   0,   0,0,   0,  5,     0,     0,  0,    0,          0,               0,           0,0,19)
						};
			
					//villains[0]->set_allied_made(50);
						for(int i=0; i<number_survivors_per_tribe; i++)
						{
							int newTricks=rand () % 100;
						foa[i]->setTricks(newTricks);
						foa[i]->setAllied(0);
							
					
						}
							for(int i=0; i<number_survivors_per_tribe; i++)
						{
						int newTricks=rand () % 100;
						galu[i]->setTricks(newTricks);
												galu[i]->setAllied(0);
					
						}
					
				cout << "Would you like to play as a Hero or Villain? " << endl;
				cout <<"Press 1 for Galu. " << " " << "Press 2 for Foa" << endl;
						int character_choice;
						cin >> character_choice;
						//TEST
					
					if(character_choice == 1)
					{
					choice = galu[0]->selectSurvivorS(galu, number_survivors_per_tribe);
					}
				if (character_choice == 2)
					{
					choice = foa[0]->selectSurvivorVillainS(foa, number_survivors_per_tribe);

					}
	
	//TRIBAL STAGE 
	
    while(days<15)
    {
			int medical=0;
			int blindside_result=0;
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(foa[choice-10]->getAlliedMade()>15 && foa[choice-10]->getPlayerCharacter()==1)
				{
					
					int NewTricks= foa[i]->getTricks();
				
					int newTrust=foa[i]->getTrust();
				
					int blindside_chance=+NewTricks-newTrust;
					
					 blindside_result= rand() % blindside_chance;

					
				 }
			 }
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(galu[choice]->getAlliedMade()>15 && galu[choice]->getPlayerCharacter()==1)
				{
				
					int NewTricks= galu[i]->getTricks();
				
					int newTrust=galu[i]->getTrust();
				
					int blindside_chance=NewTricks-newTrust;
					
					 blindside_result=( rand() % blindside_chance);

					
				 }
			 }
					
				
			
	
		cout << "The remaining survivors are: " << endl;
		
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			if(galu[i]->getEliminated()==0)
			{
			galu[i]->print();
			}
		}
		for (int i=0; i<number_survivors_per_tribe; i++)
		{
			if(foa[i]->getEliminated()==0)
			{
			foa[i]->print();
			}
		}
		
		cout << " " << endl;
		cout << "It is day " << days << "!" << endl;
		cout << " " << endl;
		
				if(character_choice==1)
					{
					galu[0]->day_actions_heroS(galu, number_survivors_per_tribe, choice);


					}
				if(character_choice==2)
					{
					foa[0]->day_actions_villainAS(foa, number_survivors_per_tribe, choice);
					}
	
					
					Samoa::random_event_cpuHeroesS(galu, choice, number_survivors_per_tribe);
					Samoa::random_event_cpuVillainsS(foa, choice, number_survivors_per_tribe);
					
					cout << " " << endl;
	
				if(character_choice == 1)
					{
				
					int RNE = rand() % 100 + 1;
					if (RNE>50)
					{
						galu[choice]->random_event_heroS(galu, choice);
					}
					}
				if (character_choice == 2)
					{
		
					int RNE = rand() % 100 + 1;
					if (RNE > 50)
					{
						foa[choice-10]->random_event_villianS(foa, choice);
					}
					}
					
				for(int i=0; i<number_survivors_per_tribe; i++)	
				{
					if(galu[i]->getStrength()==0)
					{
						cout << galu[i]->getFirstName() << " has substained too many injuries on the island" << endl;
						cout << "For that reason they will be medically evacuated from the game" << endl;
						cout << "There will be no Tribal Council Tonight" << endl;
						galu[i]->setEliminate(1);
						medical++;
					}
					if(foa[i]->getStrength()==0)
					{
						cout << foa[i]->getFirstName() << " has substained too many injuries on the island" << endl;
						cout << "For that reason they will be medically evacuated from the game" << endl;
						cout << "There will be no Tribal Council Tonight" << endl;
						foa[i]->setEliminate(1);
						medical++;
					}
				}
				if(days==11)
				{
					cout << "Welcome to day 11 Survivors" << endl;
					cout << "Today there will be no Immunity Challenge" << endl;
					cout << "Both teams going to Tribal Concil and will vote a tribemate off" << endl;
					cout << "Press 1" << endl;
					int press_enter;
					cout << "Press 1" << endl;
					cin >> press_enter;
					Samoa::Heroes_Tribal_CouncilS( galu,  number_survivors_per_tribe,  choice,  blindside_result);
					cout << "Press 1" << endl;
					cin>> press_enter;
					Samoa::Villains_Tribal_CouncilS( foa,  number_survivors_per_tribe,  choice,  blindside_result);
				}
	
	cout << " " <<  endl;
		if(medical<=0 && days!=11)
		{
		Samoa::tribeChallengeS(galu , foa, number_survivors_per_tribe, choice, blindside_result);
		}
		if((galu[choice]->getEliminated()==1 && galu[choice]->getPlayerCharacter()==1)||(foa[choice-10]->getEliminated()==1 && foa[choice-10]->getPlayerCharacter()==1))
		{
				Survivor::Loser();
				return 0;
		}
		days=days+2;
	cout << " " << endl;
	}
//MERGE BELOW
	
	cout << " " << endl;
	cout << " " << endl;
	cout <<"Survivors you can drop your buffs, you are no longer two tribes" << endl;
	cout << "Welcome to the merge!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	const int number_survivors_per_tribe = 11;

		Samoa* combined[number_survivors_per_tribe];
		int index = 0;
	
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (galu[i]->getEliminated() == 0)
			 {
			combined[index++] = galu[i];
			}
		}
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			if (foa[i]->getEliminated() == 0) 
			{
			combined[index++] = foa[i];
			
			}
		}
		for(int i=0; i<number_survivors_per_tribe; i++)
		{
			if(combined[i]->getOGID()<10)
			{
				combined[i]->setEliminate(galu[i]->getEliminated());
				combined[i]->setEliminate(galu[i]->get_allied_made());
				combined[i]->setEliminate(galu[i]->getAllied());
			}
			if(combined[i]->getOGID()>9)
			{
			combined[i]->setEliminate(foa[i]->getEliminated());	
			combined[i]->setEliminate(foa[i]->get_allied_made());
			combined[i]->setEliminate(foa[i]->getAllied());
			}
		}
		
		for (int i=0; i<number_survivors_per_tribe;i++)
		{
			combined[i]->setVotesAgainst(0);
			combined[i]->setVoteID(i);
		}
		
		for(int i=0; i<number_survivors_per_tribe;i++)
		{
			if(combined[i]->getPlayerCharacter()==1)
			{
				choice=i;
			}
		}





	while (days>=15 && days<25)
	{
		cout <<"It is day: " << days << endl;
			
			int blindside_result=0;
			for(int i=0; i<number_survivors_per_tribe; i++)
			{
				if(combined[choice]->getAlliedMade()>15 && combined[choice]->getPlayerCharacter()==1)
				{
					
					int NewTricks= combined[i]->getTricks();
				
					int newTrust=combined[i]->getTrust();
				
					int blindside_chance=+NewTricks-newTrust;
					
					 blindside_result= rand() % blindside_chance;

					
				 }
			 }
		
		
		
		cout <<"The remaining Survivors are: " << endl;
		for (int i = 0; i < 10; i++)
		 {
				if(combined[i]->getEliminated()==0)
				{
				cout<<combined[i]->getFirstName() << " Aiga Tribe" << endl;
				}
			}
		int new_count = 0;
		
		
		Samoa :: day_actions_MERGES(combined,number_survivors_per_tribe, choice);
		
		Samoa::random_event_cpuHeroesS(combined, choice, number_survivors_per_tribe);
		
		Samoa::IndvidualChallengeS(combined, number_survivors_per_tribe);
		int pressONE;
		cout << "PRESS 1" << endl;
		cin>>pressONE;
		
		if(days!=29)
		{//HvV::IndvidualChallenge(heroes,  villains, number_survivors_per_tribe);
		Samoa::Merge_Tribal_CouncilS(combined, number_survivors_per_tribe, choice, blindside_result, galu, foa);
	}	
		int press;
		cout << "PRESS 1" << endl;
		cin >> press;
		
	
		
		
		if(combined[choice]->getEliminated()==1 && combined[choice]->getPlayerCharacter()==1)
		{
				Survivor::Loser();
				return 0;
		}
		days=days+2;
	}
		//FINAL TRIBAL & JURY STAGE
		// IF WORKED, SHOULD DISPLAY THE 3 SURVIVORS
		// WHERE ASHLEY STOPPED
		cout << "WELCOME TO THE FINAL TRIBAL:" << endl;
		cout << "The survivors that made it to the final tribal are..." << endl;
		for(int i=0; i<number_survivors_per_tribe;i++)
		{
			if(combined[i]->getEliminated()==0)
			{
				cout << combined[i]->getFirstName() << endl;
			}
		}
		cout << endl << endl;
		int MostVotes=0;
	int SecondMost=0;
	int MostVotedSurvivor=0;

		int jury_cpu_votes;
		int new_count1 = 0;
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if (galu[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << galu[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if ( foa[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << foa[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
	for (int i=0; i<number_survivors_per_tribe; i++)
	{
	
			if(combined[i]->getVotesAgainst() > MostVotes)
			{
				
				MostVotes=combined[i]->getVotesAgainst();
				MostVotedSurvivor=combined[i]->getVoteID();
			}
		
	}
	for (int i=0; i<number_survivors_per_tribe; i++)
	{
			if(combined[i]->getVotesAgainst()> SecondMost && combined[i]->getVotesAgainst()<=MostVotes && combined[i]->getVoteID()!=MostVotedSurvivor)
			{
				SecondMost=combined[i]->getVotesAgainst();

			}
		
	}
	
	if(MostVotedSurvivor>SecondMost)
	{
		cout << " " << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " thats " << MostVotes << endl;
	cout << combined[MostVotedSurvivor]->getFirstName() << " you are the sole survivor" << endl;
	}
	
	if(SecondMost==MostVotes)
	{
		for(int i; i<number_survivors_per_tribe; i++)
		{
		if(combined[i]->getVoteID()!=MostVotedSurvivor || combined[i]->getVoteID()!=SecondMost)
		{
			combined[i]->setEliminate(1);
			combined[i]->setJury(1);
		}	
		}
		
		cout << " " << endl;
		cout << "We have a tie, the jury will not vote for the two most voted" << endl;
			for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if (galu[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1);
					
					cout << galu[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
		for (int i = 0; i < number_survivors_per_tribe; i++)
		{
			
				
				if ( foa[i]->getEliminated()==1 && combined[i]->getJury()==1)
				{
					do{
					jury_cpu_votes=rand()%10;
					}while(combined[jury_cpu_votes]->getEliminated()==1 );
					
					cout << foa[i]->getFirstName() << " Voted: " << combined[jury_cpu_votes]->getFirstName() << endl;
				}
				
				
			int total_votes=combined[jury_cpu_votes]->getVotesAgainst();
			total_votes += 1;
			combined[jury_cpu_votes]->setVotesAgainst(total_votes);
			
		}
		
	
	cout << " " << endl;
	}
}
}
   

 return 0;
}

 
