#include "hello.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int gen_rand_num (){
   srand(time(NULL));
    char guess; 
    int secret_num = rand() % 10;
    secret_num = rand() % 10;
    int guess_num = -1;
    std::string user_msg = ""; 

    printf("Welcome to a guessing game!\n");
    printf("Please guess a number between 0 - 9 \n");
    printf("If you would like to give up type 'q' and press enter at any time\n");
    while (guess_num != secret_num){
        std::cin >> guess;
            switch(guess){
                case '0': 
                    guess_num = 0;
                break;
                case '1': 
                    guess_num = 1;
                break;
                case '2': 
                    guess_num = 2;
                break;
                case '3': 
                    guess_num = 3;
                break;
                case '4': 
                    guess_num = 4;
                break;
                case '5': 
                    guess_num = 5;
                break;
                case '6':   
                    guess_num = 6;
                break;
                case '7': 
                    guess_num = 7;
                break;
                case '8': 
                    guess_num = 8;
                break;
                case '9': 
                    guess_num = 9;
                break;
                default: 

                break;

            }
        if((guess_num == secret_num)){
                 user_msg = "";
                 user_msg += "You got it! \n";
                 std::cout << user_msg;
                 break;
            }
            user_msg = "";
            user_msg += "Sorry Try Again \n";
            std::cout << user_msg << "\n";

            if(guess_num < secret_num){
                std::cout << "Your guess was low \n";
            }
            else if(guess_num > secret_num){
                std::cout << "Your guess was high \n";
            }

        if(guess_num == secret_num){
            user_msg = "";
            user_msg += "You got it! \n";
            std::cout << user_msg;
            break;
        }
        if(guess == 'q' || guess == 'Q'){
            user_msg = "";
            user_msg += "This was a hard one. \n";
            user_msg += char(secret_num);
            std::cout << user_msg;
            break;
        }
    }

    printf(" Secret num val: %d \n", secret_num);
    return guess_num;

}