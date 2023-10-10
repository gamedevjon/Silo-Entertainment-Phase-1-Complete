#include <iostream>
#include <string>

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
	int aiSelection = -1;

	std::cout << title;
	

	//Select Rock, Paper, or Scissors
	//select 1. Rock
	//select 2. Paper
	//select 3. Scissors

	std::cout << "Select Rock, Paper or Scissors:" << std::endl;
	std::cout << "1. Rock" << std::endl;
	std::cout << "2. Paper" << std::endl;
	std::cout << "3. Scissors" << std::endl;

	std::cout << "\nSelection:";

	std::cin >> playerSelection;

	//AI system
	//assign aiSelection = random number between 1 and 3
	
	// Providing a seed value
	std::srand(time(NULL));

	aiSelection = std::rand() % 3 + 1;

	std::cout << "AI Selection: " << aiSelection << std::endl;

	//Rock beats Scissors
	if (playerSelection == 1 && aiSelection == 3)
	{
		std::cout << "Player wins! \n";
	}
	else if (aiSelection == 1 && playerSelection == 3)
	{
		std::cout << "AI Wins! \n";
	}

	
	//Paper beats Rock

	if (playerSelection == 2 && aiSelection == 1)
	{
		std::cout << "Player Wins! \n";
	}
	else if (aiSelection == 2 && playerSelection == 1)
	{
		std::cout << "AI Wins! \n";
	}

	//Scissors beats Paper
	if (playerSelection == 3 && aiSelection == 2)
	{
		std::cout << "Player Wins! \n";
	}
	else if (aiSelection == 3 && playerSelection == 2)
	{
		std::cout << "AI Wins! \n";
	}

	if (playerSelection == aiSelection)
	{
		std::cout << "Draw! Nobody wins!";
	}

	return 0;
}