#include <iostream>
#include <stdlib.h> // Library needed to get a random seed
#include <time.h>

int main() {
    int money = 500;
    int bet;
    int guess;
    std::cout << "Starting blance is 500, good luck \n.";
    
    srand( time(NULL) );
    
    while (money>0){
    
    std::cout <<"pick number 1 or 0.\n";
    std::cin >> guess;
    if(guess >=2){
    std::cout << "cash out!\n";
    break;
    }
std::cout << "pick" <<guess << ".\n";
std::cout << "place a bet";
std::cin >> bet;
std::cout << "placed bet of" << bet << ".\n";

int random =rand() % 2;
std::cout << "the winning number is" << random << ".\n";

if(random == guess)
{
    std::cout << "Winner!!!\n";
    money= bet * 2 +money;
    std::cout << "new blance of" << money << "!\n";
    }
    else
{
    std::cout << "better luck next time.\n";
    money = money - bet;
    std::cout << "New blance of" << money << "!\n";
}
    }

    std::cout <<"you have Cashed out or no longer have money to play.\n";
   
    return 0;

}


