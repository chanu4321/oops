#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    // Open the file in read mode.
    ifstream infile("filename.txt");

    // Check if the file exists.
    if (infile.is_open())
    {
        // Read the contents of the file line by line.
        string line;
        while (getline(infile, line))
        {
            // Print the line to the console.
            cout << line << endl;
        }

        // Close the file.
        infile.close();
    }
    else
    {
        // File does not exist.
        cout << "File does not exist." << endl;
    }

    return 0;
}