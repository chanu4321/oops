#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open the file in read mode.
  fstream file("data.txt", ios::in);

  // Check if the file exists.
  if (file.is_open()) {
    // Get the file size.
    file.seekg(0, ios::end);
    long int fileSize = file.tellg();

    // Reset the file pointer to the beginning.
    file.seekg(0, ios::beg);

    // Initialize a variable to count the number of words.
    int wordCount = 0;

    // Read the file character by character.
    while (file.good()) {
      // If the character is a space, increment the word count.
      if (file.get() == ' ') {
        wordCount++;
      }
    }

    // Print the file size and the number of words.
    cout << "File size: " << fileSize << endl;
    cout << "Number of words: " << wordCount << endl;

    // Close the file.
    file.close();
  } else {
    // File does not exist.
    cout << "File does not exist." << endl;
  }

  return 0;
}