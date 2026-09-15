// CGT-215-Lab-05-mgrabczy.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <string>

//initialinging the string library
using namespace std;

int main() 
{

//initializing the vector with the cypher equivilents
    vector <char> codeTable = {'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'};
//tells the reader to imput the message
    cout << "Imput text to cypher: ";
//allows the reader to imput an entire sentance with spaces
    string text;
    getline(cin, text);
//creates the quotation marks before and after the output
    cout << "Encoded Message: \"";
//the for loop that goes through the readers imput and converts it to the letters in the codeTable
    for (int i = 0; i < text.length(); i++)
    {
      //takes the uppercase letters and runs them through the codeTable
        if (text[i] >= 65 && text[i] <= 90) // uppercase
        {
            int index = text[i] - 65;
            cout << codeTable[index];
        }
    // if the character is a symbol then it is just outputed again
        else if ((text[i] >= 32 && text[i] <= 64) || (text[i] >= 91 && text[i] <= 96)) 
        {
            cout << text[i];
            continue;
		}
     // if the character is lower case, it wiill be turned to upper case, then ran through the codeTable, then turned back to lowercase 
        else if (text[i] >= 97 && text[i] <= 122) // lowercase
        {
            text[i] = text[i] - 32; // convert to uppercase
            int index = text[i] - 65;
            cout << char(codeTable[index] + 32); // convert back to lowercase
		}
    // if it is another character it will output a warning message
        else
        {
            cout << " (This is not a letter.) ";
        }
        
    }
    //closing quatation
        cout << "\"" << endl;
}

