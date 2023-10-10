#include <iostream>
#include <string>
#include <stdlib.h>
#include <thread>
#include <chrono>

int main()
{
	std::string title = R"(
   _____ _ _         ______       _            _        _                            _   
  / ____(_) |       |  ____|     | |          | |      (_)                          | |  
 | (___  _| | ___   | |__   _ __ | |_ ___ _ __| |_ __ _ _ _ __  _ __ ___   ___ _ __ | |_ 
  \___ \| | |/ _ \  |  __| | '_ \| __/ _ \ '__| __/ _` | | '_ \| '_ ` _ \ / _ \ '_ \| __|
  ____) | | | (_) | | |____| | | | ||  __/ |  | || (_| | | | | | | | | | |  __/ | | | |_ 
 |_____/|_|_|\___/  |______|_| |_|\__\___|_|   \__\__,_|_|_| |_|_| |_| |_|\___|_| |_|\__|
                                                                                         
                                                                                         
)";
	int playerSelection = -1;
	int rounds = 0;
	int playerScore = 0;
	int aiSelection = -1;
	int aiScore = 0;
	
	

	std::cout << title << std::endl;
	
	std::cout << "How many rounds would you like to play?:";
	std::cin >> rounds;
	std::cout << std::endl;

	

	do
	{
		
		//TODO: input validation
		std::cout << "Select Rock, Paper or Scissors:" << std::endl;
		std::cout << "1. Rock" << std::endl;
		std::cout << "2. Paper" << std::endl;
		std::cout << "3. Scissors" << std::endl;
		std::cout << std::endl;
		std::cout << "\n";

		std::cout << "[Player 1] ----- Games Remaining ----- [AI]" << std::endl;
		std::cout << "     " << playerScore << "                 " << rounds << "                " << aiScore << std::endl;

		std::cout << "\n";

		
		std::cout << "Selection:";
		std::cin >> playerSelection;
		//TODO: input validation

		//AI Code
		// Providing a seed value
		std::srand(time(NULL));
		aiSelection = std::rand() % 3 + 1;


		std::string playerHand = "";
		std::string aiHand = "";

		switch (playerSelection)
		{
		case 1: //rock" 
			playerHand = "Rock";
			break;
		case 2: //paper
			playerHand = "Paper";
			break;
		case 3: // scissors
			playerHand = "Scissors";
			break;
		}

		switch (aiSelection)
		{
		case 1: //rock" 
			aiHand = "Rock";
			break;
		case 2: //paper
			aiHand = "Paper";
			break;
		case 3: // scissors
			aiHand = "Scissors";
			break;
		}

		

		//Display Outcome
		std::cout << "\nPlayer: " << playerHand << "   VS   " << aiHand << std::endl;

		std::cout << std::endl;
		
		//Rock beats Scissors
		if (playerSelection == 1 && aiSelection == 3)
		{
			std::cout << "Player wins! \n";
			playerScore++;
		}
		else if (aiSelection == 1 && playerSelection == 3)
		{
			std::cout << "AI Wins! \n";
			aiScore++;
		}


		//Paper beats Rock

		if (playerSelection == 2 && aiSelection == 1)
		{
			std::cout << "Player Wins! \n";
			playerScore++;
		}
		else if (aiSelection == 2 && playerSelection == 1)
		{
			std::cout << "AI Wins! \n";
			aiScore++;
		}

		//Scissors beats Paper
		if (playerSelection == 3 && aiSelection == 2)
		{
			std::cout << "Player Wins! \n";
			playerScore++;
		}
		else if (aiSelection == 3 && playerSelection == 2)
		{
			std::cout << "AI Wins! \n";
			aiScore++;
		}

		if (playerSelection == aiSelection)
		{
			std::cout << "Draw! Nobody wins! \n";
			//clear console
			//re-draw

			std::cout << "\nNext Round Starts In 3" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "\nNext Round Starts In 2" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "\nNext Round Starts In 1" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			system("cls");
			continue;
		}

		if (rounds > 1)
		{
			std::cout << "\nNext Round Starts In 3" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "\nNext Round Starts In 2" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "\nNext Round Starts In 1" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::seconds(3));
		}
		

		

		//clear console
		//re-draw
		system("cls");
		rounds--;

	} while (rounds > 0);

	//celebrate winner

	std::cout << R"(
   _____                         ____                 
  / ____|                       / __ \                
 | |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ 
 | | |_ |/ _` | '_ ` _ \ / _ \ | |  | \ \ / / _ \ '__|
 | |__| | (_| | | | | | |  __/ | |__| |\ V /  __/ |   
  \_____|\__,_|_| |_| |_|\___|  \____/  \_/ \___|_|   
                                                      
                                                      
)" << std::endl;

	std::cout << "[Player 1] ----- Games Remaining ----- [AI]" << std::endl;
	std::cout << "     " << playerScore << "                 " << rounds << "                " << aiScore << std::endl;

	

	return 0;
}
