#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include "hello.h"
#include "gen_rand_num.cpp"
#include "my_classes.cpp"
#include "easy_practice.cpp"

// TODO POINTER AND REFERENCE REVIEW
//Templates are useful as generics. I.E. The type being passed does not matter to the template itself.
template <typename T> T compare_values(T x, T y){
  if(x == y){
    return true;
  }  
  return (x > y) ? x : y;  
};


int main(){
  // std::vector<std::string> s = {"--X","X++","X++"};
  //  std::cout << "Result is: " << finalValueAfterOperations(s) << "\n";
    std::vector<std::vector<int>> v = {
        {7,2,3}, 
        {9,9},
        {1,7,8,4}
    };
    std::vector<std::vector<std::string>> sentences = {
        {"alice and bob love leetcode"}, 
        {"i think so too"},
        {"this is great thanks very much"}
    };


     std::cout << "Most words Found: " << mostWordsFound(sentences) << "\n";    
    //  std::cout << "Max is: " << maximumWealth(v) << "\n";
    return 0;
}




std::string build_new_string(std::string str){
    return str + " I hope you are doing well! \n";
}
    
    //! Practiced stuff for later.
    
    // int a = 3;
    // int b = 5;
    // unsigned int c = 1; // ? No negatives or it will have an overflow error.
    // float d = 1.75; 
    // double e = 32.1271; 
    // char f = 'a'; 
    // char g = 'b';
    // //C-Style String:
    // char greeting[4] = {'Y', 'e', 's', '\0'}; // Concat this to the end of concat help using a for loop.
    // std::string concat_help = "Concat Test: ";
    // //Note: Chars to strings must be concat one at a time.
    // concat_help += f;
    // concat_help += g;
    // std::string hello = "String test.";
    // std::string input;
    // concat_help.push_back('\n');
    // concat_help.push_back('Z');
    // d = e;
    // a = int (e); //Typecasting Double to Int
    // int result = a+b;
    // double result_two = calculate_sum();

    // printf("Unsigned Int: %u \n", c);
    // printf("Value of ints: %d and %d \n", a, b);
    // printf("Value of double to float: %f and %f \n", d, e);
    // printf("Hello World! \n");
    // printf("You inputted: %s \n", input.c_str());
    // printf("The result of adding a and b: %d \n", result);
    // printf("The value of calculate_sum is: %f \n", result_two);
    // std::cout << concat_help;
    // std::cout << build_new_string("Testing now");
    // gen_rand_num();
    

   //! Class Practice
    // my_fav_class programming;
    // std::cout << programming.greet_student(); 
    // programming.new_student();
    // std::cout << programming.calculate_sum(74.91827,91,12,93) << "\n";
    // my_second_struct car_two;

    // car_two = {"Ford", "Sierra", 1999, 4};
    
    // my_second_struct car_one;
    // car_one.brand = "Ford";
    // car_one.model = "F150";
    // car_one.year = 2013;
    // car_one.num_wheels = 6;
    // //Might be better to do this with printf.
    // std::cout << car_one.brand <<  "\n" << car_one.model <<  "\n" 
    // << car_one.num_wheels << "\n" << car_one.year << "\n";
    // std::cout << car_two.brand <<  "\n" << car_two.model <<  "\n" 
    // << car_two.num_wheels << "\n" << car_two.year << "\n"; 


    // int a = 3;
    // int b = 6;
    // std::cout << "MY TEMPLATE IS: " << compare_values<int> (3, 3) <<"\n"; 


    // int pointer_test = 6;
    // //References cannot be reassigned once assigned.
    // //References can access both the memory location, and the object it self.
    // int &my_value = pointer_test;
    // //Pointers can be reassigned once assigned.
    // //Pointers can access both the memory location, and the object it self.
    // int* my_point = &pointer_test; 

    // std::cout << "My Reference Value: " << my_value << "\n";
    // std::cout << "My Pointer Memory Address: " << my_point << "\n";
    // std::cout << "My Pointer Value from Memory Address: " << *my_point << "\n";
    // my_fav_desk programming;
    // std::cout << programming.new_student();
    // std:: cout << programming.best_desk;


  // //  std::cout << romanToInt("I") << "\n"; // 1
  // //  std::cout << romanToInt("IV") << "\n"; // 4
  // //  std::cout << romanToInt("IX") << "\n"; //9
  // //  std::cout << romanToInt("XCIX") << "\n"; //99
  // //  std::cout << romanToInt("XCVIII") << "\n"; //98
  //   std::cout << romanToInt("LVIII") << "\n"; //58
  // //  std::cout << romanToInt("C") << "\n"; //100
  // //  std::cout << romanToInt("CCC") << "\n"; //300
  // //   std::cout << romanToInt("DCCXCIX") << "\n"; //799
  // //  std::cout << romanToInt("VI") << "\n";
  // //  std::cout << romanToInt("VIII") << "\n";
  // //  std::cout << romanToInt("CDLVIII") << "\n";
  // //  std::cout << romanToInt("M") << "\n";
  // //  std::cout << "Check " << romanToInt("D") << "\n";
  // //  std::cout << romanToInt("MCMLXXXIII") << "\n";
  // //  std::cout << romanToInt("MDCCCLXXXIII") << "\n";
  // //  std::cout << romanToInt("MMMCMXCIX") << "\n"; //Max Value 3999