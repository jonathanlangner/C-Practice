#include <string>
#include <iostream>
#include <vector>
#include <cstring>




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     bool checkTree(TreeNode* root) {
        
//         int root_val = root->val;
//         int left_val = root->left -> val;
//         int right_val = root->right -> val;
//         cout << root_val;
//         cout << left_val;
//         cout << right_val;
        
//         if(root_val == left_val + right_val){
//             return true;
//         }
//        return false;
//     }
// };



int mostWordsFound(std::vector<std::vector<std::string>>& sentences) {
      int max = 0;
      int temp = 0;
      int num_sentences = sentences.size() - 1;
      int i_sentence = 0;
      int num_char_in_s = 0;
      int increment_count = 0;
      char current_char;   
        for(int i = 0; i <= num_sentences; i++){
            i_sentence = sentences[i].size() - 1;
            temp = 0;
            for(int j = 0; j <= i_sentence; ++j ){
                num_char_in_s = sentences[i][j].length() - 1;
                for(int k = 0; k < num_char_in_s; ++k){
                    if(sentences[i][j][k] == ' '){
                        ++temp;
                    }
                }
            }
            if(temp > max){
                max = temp;
            }
        }
     ++max;
     return max; 
}



// int maximumWealth(std::vector<std::vector<int>>& accounts) {
//       int max = 0;
//       int temp = 0;
//       int num_persons = accounts.size() - 1;
//       int wealth = 0;
//       int increment_count = 0;   
//         for(int i = 0; i <= num_persons; i++){
//             wealth = accounts[i].size() - 1;
//             temp = 0;
//             for(int j = 0; j <= wealth; ++j ){
//                 temp = temp + accounts[i][j];
//                 increment_count++;
//             }
//             if(temp > max){
//                 max = temp;
//             }
//         }

//      return max; 
// }


// int finalValueAfterOperations(std::vector<std::string>& operations) {
//         int result = 0; 
//         int num_operations = operations.size() - 1;
//         for(int i = 0; i <= num_operations; ++i){
//             if(operations[i] == "++X" || operations[i] == "X++"){result++;}
//             else if(operations[i] == "--X" || operations[i] == "X--"){result--;}
//         }
//         return result;
//     }



// int romanToInt(std::string s){
//     int result = 0;
//     int check = s.length() - 1;
//     for(int i = 0; i <= s.length() - 1; ++i){
//         std::cout <<"Test " << i <<"  " << check << s << "\n";
//          switch(s[i]){
//             case 'I':
//                 if(s[i + 1] == 'V'){
//                     result += 4;
//                 }
//                 if(s[i + 1] == 'X'){
//                     result += 9;
//                 }
//                 else if (s[i + 1] != 'X' && s[i+1] != 'V'){
//                     ++result;
//                 }
//             break;
//             case 'V':
//                 if(i != 0){
//                     if (s[i-1] != 'I'){
//                     result += 5;
//                     }
//                 }
//                 if (i == 0){
//                     result += 5;
//                 }
//             break;
//             case 'X':
//                     if(s[i + 1] == 'L'){
//                         result += 40;
//                     }
//                     if(s[i + 1] == 'C'){
//                         result += 90;
//                     }
//                     if(i != 0){
//                         if (s[i-1] != 'I' && s[i+1] != 'L' && s[i+1] != 'C'){
//                             result += 10;
//                         }
//                     }
//                     if(i == 0 && s[i+1] != 'L' && s[i+1] != 'C'){
//                         result += 10;
//                     }
//             break;
//             case 'L':
//                 if(i != 0){
//                     if (s[i-1] != 'X' && s[i-1] != 'I'){
//                         result += 50;
//                         std::cout <<"Check";
//                     }
//                 } if(i == 0){
//                     result += 50;
//                 }
//              break;
//             case 'C':
//                     if(s[i + 1] == 'D'){
//                         result += 400;
//                     }
//                     if(s[i + 1] == 'M'){
//                         result += 900;
//                     }
//                     if(i != 0){
//                         if (s[i+1] != 'D' && s[i+1] != 'M' && s[i-1] != 'X' ){
//                          result += 100;
//                         }
//                     }
//                     if(i == 0 && s[i+1] != 'D' && s[i+1] != 'M'){
//                         result += 100;
//                     }
//             break;

//             case 'D':
//                 if(i != 0){
//                     if(s[i-1] != 'X' && s[i-1] != 'C'){
//                         result += 500;
//                     }
//                 }
//                 if(i == 0){
//                     result += 500;
//                 }
//             break;

//             case 'M':
//             if(i != 0){
//                 if(s[i-1] != 'D' && s[i-1] != 'C'){
//                     result += 1000;
//                 }
//             }
//             if(i == 0){
//                 result += 1000;
//             }
//             break;
//          }
//     }

//     return result;
    
    
// }
  
    




