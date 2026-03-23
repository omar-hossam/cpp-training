#include <iostream>

void get_tip(int guess, int secret) {
    if (guess > secret) {
        std::cout << std::endl << "High" << std::endl;
    } else if (guess < secret) {
        std::cout << std::endl << "Low" << std::endl;
    }
} 

int main() {
    srand(time(0));
    int guess, num_of_guesses, secret;
    int max_num = 50;
    char play_again;
    
    std::cout << "Welcome to number guessing game!" << std::endl;
    std::cout << "--------------------------------" << std::endl << std::endl;
    
    while (true) {
      secret = rand() % max_num;
      num_of_guesses = 0;
      std::cout << "Please select a number from 0 to " << max_num << ": ";
      
      while (num_of_guesses < 5) {  
          std::cin >> guess;
          num_of_guesses++;
          
          if (guess == secret) {
              std::cout << std::endl << "-> You win!" << std::endl;
              break;
          } 
          
          if (num_of_guesses <= 4 && guess != secret) {
            get_tip(guess, secret);
            std::cout << "Try again: "; 
          }
      }
      if (num_of_guesses == 5 && guess != secret) {
        std::cout << std::endl << "-> You lose. Secret was: " << secret << std::endl;
      }
      
      std::cout << std::endl << "Wanna play again (Y, n)? ";
      std::cin >> play_again;
      
      if ((char)tolower(play_again) != 'y') {
        std::cout << "Thanks for playing with us :)" << std::endl;
        break;
      }
    }
    return 0;
}
