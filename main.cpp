#include <iostream>
#include <random>

int main() {

  using std::cout;
  using std::cin;

  // Seed the random number generator. 
    std::random_device rd;
    std::mt19937 gen(rd());


    // Define the distribution for two-digit numbers
    std::uniform_int_distribution<int> distribution(0, 99);




  // Generate 3 random numbers
    int random_number = distribution(gen);
  int random_number2 = distribution(gen);
  int random_number3 = distribution(gen);
  int guess{0};
  int chances{0};
  int chances2{0};
  int chances3{0};
  int score {0};

    //variables
    std::string rules; 


  //Intro
  cout << "*************************************************************************\n";
  cout << "                           GUESS THE NUMBER\n";
  cout << "*************************************************************************\n";
    cout <<"\n";
    cout <<"\n";
    cout << "Welcome to Guess the Number! See game rules? Rules? (Y/N) "; 
    cin >> rules;


  if (rules == "Y" || rules == "y") { //covers both Y and y. proud of this :3
    cout << " \n" << "*************************************************************************\n" << "\n"<< "⦿ We will give you 4 opportunities to guess the number correctly.\n" << "⦿ The number will range from 0 to 99.\n" <<"⦿ Every correct guess gets you 1 point.\n⦿ You need 2 points to win.\n⦿ The number will change after every round. \n⦿ Hints will be offered.\n \n" ;
  } else if (rules == "N" || rules == "n") {
  cout << "\n"<< "Too cool for rules... we like that.\n\n";
  }

  cout << "*************************************************************************\n\n";
  cout << "Are you ready (Y/N)? ";
  cin >> rules; 
  cout << "\n\n*************************************************************************\n\n";

  if (rules == "Y" || rules == "y") {
    cout << "\n Good luck!\n\n";
    while (chances <5 && score <1) {
      chances++;
    //cout << random_number;
    cout << "Guess the number: ";
    cin >> guess; 

    if (guess != random_number){
      cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
      cin >> rules;
          if (rules == "Y" || rules == "y") {
                if (guess > random_number){
                  cout << "Hint: Your guess is too high...\n\n";
                } else if (guess < random_number) {
                  cout << "Hint: Your guess is too low...\n\n";
                }

          }

    } else if (guess == random_number) {
      cout << "Correct!\n\n";
      score++;
      break; 
    
   } //ends else if 
    } // ends if on line  60

    cout << "*************************************************************************\n\n";
cout << "Your current score is: " << score <<".\n";
cout << "You need 2 points to win. Do you wanna keep playing? The number will change (Y/N) ";
  
  
    cin >> rules; 
    cout << "\n\n*************************************************************************\n";

    if (rules == "Y" || rules == "y") {
      cout << "\nGood luck!\n\n";
      while (chances2 <5 && score <2) {
        chances2++;
      //cout << random_number2;
      cout << "Guess the number: ";
      cin >> guess; 

      if (guess != random_number2){
        cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
        cin >> rules;
            if (rules == "Y" || rules == "y") {
                  if (guess > random_number2){
                    cout << "Hint: Your guess is too high...\n\n";
                  } else if (guess < random_number2) {
                    cout << "Hint: Your guess is too low...\n\n";
                  }

            }

      } else if (guess == random_number2) {
        cout << "Correct!\n\n";
        score++;
        break;} 
      } // 
      cout << "\n\n*************************************************************************\n\n";
      if (score == 2) {
        cout <<  "Your current score is: " << score <<".\n" << "Congradulations! You won the game! you are a guessing champion!"; 
      } else if (score <2) {
        cout << "Your current score is: " << score <<".\n";
        cout << "This is your last chance! We will double the points so you can win big! Would you like to play the final round? (Y/N) ";
        cin >> rules; 


        if (rules == "Y" || rules == "y") {
          cout << "\n Good luck!\n";
          while (chances3 <5 && score <3) {
            chances3++;
          //cout << random_number3;
          cout << "Guess the number: ";
          cin >> guess; 

          if (guess != random_number3){
            cout << "Nope, thats not it! Would you like a hint? (Y/N) ";
            cin >> rules;
                if (rules == "Y" || rules == "y") {
                      if (guess > random_number3){
                        cout << "Hint: Your guess is too high...\n\n";
                      } else if (guess < random_number3) {
                        cout << "Hint: Your guess is too low...\n\n";
                      }

                }

          } else if (guess == random_number3) {
            cout << "Correct!\n\n";
            score++;
            score++;
            break;} 
        
        
      }

        }
      }
      
  } // ends if statement, line 52


// do they wanna know what the numbers were?
    cout << "\n\n*************************************************************************\n\n";

if (score <2) {
  cout << "Better luck next time! ";
} else if (score >=2) {
  cout << "Congradulations! You won the game! you are a guessing champion! \n\n"; 
}


    
cout << "The numbers were: "<< random_number << ", " << random_number2 << ", " << random_number3 << "\n\n";

    cout << "                        Thanks for playing!";

    cout << "\n\n*************************************************************************\n\n";
  }

 

} //ends main function 