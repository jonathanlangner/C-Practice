#include <iostream>
#include <string>
#include <vector>
#include <cmath>

struct my_second_struct {
    std::string brand;
    std::string model;
    int year;
    int num_wheels;
};

class my_fav_class {
    public:
        int num_students;
        std::string grade_level;
        std::string topic; 
        std::vector<std::string> student_names = {"Kristen Lawrence", "Kristy Smith", "Gordon Leonard", "Mildred Watson",
            "Francis Flores", "Mona Lynch", "Lance Davis", "Forrest Malone", "Kevin Lloyd ", "Jose Stephens "
        };  

        std::string greet_student(std::string greet = "Good morning: "){
            for(int i = 0; i < 10; ++i){
                greet += "\n" + student_names[i] + "\n";
                greet += private_greet + "\n";
            }
            return greet;
        }
        std::string new_student(){
           std::string name = "";
           std::cout << "Hello, what is your name? \n"; 
           std::getline(std::cin, name);
           std::string hello =  "Great to have you in our class " + name +"!";
           std::cout << hello + "\n";
           student_names.push_back(name);

           return name;
           
        }


        double calculate_sum(double a, int b, int c, int d){
            a = (a * b);
            c = (c / d);
            a = (a - c);
            return round(a); 
        }


    private:
        int avg_grade;
        std::string private_greet = "Your work is great, keep it up!";
};

class my_fav_desk: public my_fav_class{
    public:
    std::string best_desk = "My Desk or Whichever one is usable.";
};