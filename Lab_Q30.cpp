#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl; 
    cout << "Enter text (Press Ctrl + Z on a new line to end input):\n";
    string input;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    while (getline(cin, input))
    {
        lineCount++;
        istringstream iss(input);
        string word;
        while (iss >> word)
        {
            wordCount++;
            charCount += word.size();
        }
    }
    cout << "Number of Lines: " << lineCount << " Number of Words: " << wordCount << " Number of Characters: " << charCount << endl;
    return 0;
}