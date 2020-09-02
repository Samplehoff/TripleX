#include <iostream>

void PrintIntroduction()
{
    
    std::cout << "Triple X!\n";
    std::cout << "Help the Rebels and survive the Base!\n";
}

void PlayGame()
{

    PrintIntroduction();

    // Print welcome message to the terminal
    std::cout << std::endl;
    std::cout << "Starkiller you must survive...\n";
    std::cout << "Enter the codes to the first door...\n\n";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
        std::cout << "\n + You have passed the first door!";
    }
    else
    {
        std::cout << "\n + You have FAILED the Rebels!";
    };
}

int main()
{
    PlayGame();
    return 0;
}