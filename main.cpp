#include <string>
#include <iostream>
#include <vector>

int score(const std::vector<int>& dice);

int main(){
    std::cout <<  " The Final Value is: " << score({2,3,4,6,2});
    std::cout <<  " The Final Value is: " << score({1,1,1,3,1});
    std::cout <<  " The Final Value is: " << score({2,4,4,5,4});

    return 0;
}


int score(const std::vector<int>& dice){
    int num_count[6] = {0,0,0,0,0,0}; // 1's, 5's, 6's, 4's, 3's, 2's
    bool num_check = false;
    int fin_count = 0;

    for(int i : dice){ 
        switch (i)
        {
        case 1:
            if(num_count[0] == 2 && num_check != true){
                fin_count = fin_count - 300 + 1000;
                fin_count = fin_count +  100;
                num_check = true;
                num_count[0]++;
            }
            else{
                num_count[0]++;
                fin_count = fin_count +  100;
            }
            break;
        case 5: 
             if(num_count[1] == 2 && num_check != true){
                fin_count = fin_count - 150 + 500;
                fin_count = fin_count + 50;
                num_check = true;
                num_count[1]++; 
            }
            else{
               fin_count = fin_count + 50;
               num_count[1]++;
            }
            break;
        case 6:   
                
                if(num_count[2] == 2){
                    fin_count = fin_count + 600;
                }
                num_count[2]++; 
            break;
        case 4:
                if(num_count[3] == 2){
                    fin_count = fin_count + 400;
                }
                 num_count[3]++; 
            break;
        case 3:
                if(num_count[4] == 2){
                    fin_count = fin_count + 300;
                }
                num_count[4]++; 
            break;
        case 2:
                if(num_count[5] == 2){
                    fin_count = fin_count + 200;
                }
                num_count[5]++; 
            break;            
        default:
            return 1;
            break;
        }
    }

    return fin_count;
}



