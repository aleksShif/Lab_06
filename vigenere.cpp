/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab6C

This program 
*/
#include <iostream>
using namespace std;

string encryptVigenere(string plaintext, string keyword) {
    string res; 
    int j = 0; 

    for (int i = 0; i < plaintext.length(); i++) {
        char current = plaintext[i]; 

        if (!isupper(current) && !islower(current)) {
            res += current; 
        }

        else {
            if (current >= 65 && current <= 90) {
                res += (current + (keyword[i] - 'a') - 65) % 26 + 65;  
            }

            else if (current >= 97 && current <= 122) {
                res = (current + (keyword[i] - 'a') - 97) % 26 + 97; 
            }
        }


        
    }
}
