#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are Starkiller breakthrough level " << Difficulty;
    std::cout << " of the Base!\n Help the Rebels and survive the Base!\n";
}


bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store players guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if player is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n ** You have passed on to the next level! **";
        return true;
    }
    else
    {
        std::cout << "\n ** You have FAILED the Rebels! Retry **";
        return false;
    };
}


int main()
{

    srand(time(NULL)); //Create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();// Clears any errors.
        std::cin.ignore();// Discards the buffer.

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    std::cout << "\n\n*** Congratulations Starkiller! You have helped the Rebels! Now win this war! ***";
    
    return 0;
}