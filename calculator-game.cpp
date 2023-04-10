#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

char rdans;
char paans;

void play()
{


    int num1;
    int num2;
    int opnum;
    char op;
    long int guess;
    int res;

    srand(time(0));

    num1 = std::rand() % 100 + 1;
    num2 = std::rand() % 100 + 1;
    opnum = std::rand() % 4 + 1;

    switch(opnum)
    {
        case 1:
            op = '+';
            res = num1 + num2;
            break;
        case 2:
            op = '-';
            res = num1 - num2;
            break;
        case 3:
            op = '*';
            res = num1 * num2;
            break;
        case 4:
            op = '/';
            res = num1 / num2;
            break;
    }

    std::cout << "Let the games begin!\n\n";
    std::cout << "The problem is :\n";
    std::cout << num1 << ' ' << op << ' ' << num2 << " =\n";
    std::cin >> guess;

    std::cout << '\n';
    if(guess == res)
    {
        std::cout << "Thats right, you won! The result was : " << res;
        std::cout << " You want to play again? (Y/N) : ";
        std::cin >> paans;
    } 
    else
    {
        std::cout << "Thats wrong, you guessed : " << guess << ", but the result was : " << res;
        std::cout << " You want to play again? (Y/N) : ";
        std::cin >> paans;
    }

    switch(paans)
    {
        case 'y':
            play();
            break;

        case 'Y':
            play();
            break;

        case 'n':
            std::cout << "Thank you for playing!";
            break;

        case 'N':
            std::cout << "Thank you for playing!";
            break;
    }

}

int main()
{
    std::cout << "////////////////////////////////////\n";
    std::cout << "/////             //////////////////\n";
    std::cout << "/////             //////////////////\n";
    std::cout << "/////     //////////////////////////\n";
    std::cout << "/////     //////////////////////////\n";
    std::cout << "/////          /////////////////////\n";
    std::cout << "/////          /////////////////////\n";
    std::cout << "/////     //////////////////////////\n";
    std::cout << "/////     //////////////////////////\n";
    std::cout << "/////             //////////////////\n";
    std::cout << "/////             //////////////////\n";
    std::cout << "////////////////////////////////////\n";

    std::cout << '\n';

    std::cout << "Welcome to **THE CALCULATOR QUIZ**\n";
    std::cout << "by Exonl - EXNL#8375\n";
    std::cout << "\n";
    std::cout << "GAME RULES: \n\nThis game will choose 2 random numbers and one random operator.\n";

    std::cout << "\n\n";
    
    std::cout << "Are you ready? Y for yes, N for no : \n";
    std::cin >> rdans;

    while(rdans == !'y' || !'n' || !'Y' ||!'N')
    {
        std::cout << "Please enter a valid answer (Y/N) : \n";
        std::cin >> rdans;
    }  

    switch(rdans)
    {
        case 'y': 
            play();
            break;

        case 'Y':
            play();
            break;

        case 'n':
            std::cout << "Goodbye!";
            break;

        case 'N':
            std::cout << "Goodbye!";
    }
    return 0;
}


