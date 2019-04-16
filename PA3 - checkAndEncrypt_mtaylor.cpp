/*
 filename:    PA3 - checkAndEncrypt_mtaylor.cpp
 author:     Max Taylor
 date:       4/12/2019
 Created by Max Taylor on 4/12/19.
 Copyright © 2019 Max Taylor. All rights reserved.
 */

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i =0;
    int option;
    char pass[20];  //make array for password up to 20 chars;;
    char confirm[20];  //array for confirming password;;
    char decrypt[20];  //array user enters to decrypt;;
    
    cout << "Please enter a password, up to 20 characters: ";
    
    cin >> pass;       //user input for the password array;;
    int letter = strlen(pass);  //makes int var set to length of array;;
    
    do{                 //loops, asking to confirm password, while the confirmation is entered incorrectly;;
        cout << "Please re-type your password to confirm it: ";
        cin >> confirm;
        cout << endl;
    }     // user instructions;;
    while(pass[i] != confirm[i] && confirm[i] != pass[i]);       //ask to re-enter password, while comfirmation entered wrong;;
    
    
    
    for (int i=0; i < letter; i++)      //counter to add 4 to every char up to the amnt of string array;;
        pass[i] += 4;    //shifts the letter 4 over;;
    
    cout << "This is your encrypted password: " << pass << "\n\n";
    cout << "Press 1 to exit.\nPress 2 to decrypt a password.\n";
    
    cin >> option;      //for switch case;;
    
    switch(option){
        case 1:
            cout << "The program will now exit.";   //exit program if press 1
            return 0;
            break;
        case 2:
            cout << "Please enter a psasword to decrypt: ";     //decrypt a password is press 2;;
            cin >> decrypt;
            for (int i=0; i < 20; i++)
                pass[i] -= 4;  //undo the encrypt;;
            
            cout << "That password decrypted is: " << pass << "\n\n";   //cout the decryped array;;
            break;        //switch case to decrypt a password;;
            
        default: //default code for any number not 1 or 2;;
            cout << "Error! The number you entered was not either 1 or 2. The program will now end.\n\n";
    }
    return 0;
}
