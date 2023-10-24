#include <iostream>
#include <fstream>
#include <string>

int main() {
  // Open the input file.
  std::ifstream inputFile("input.txt");

  // Create or overwrite the output file.
  std::ofstream outputFile("output.txt");

  // Check if both files are open.
  if (inputFile.is_open() && outputFile.is_open()) {
    // Read each line from the input file and write it to the output file.
    std::string line;
    while (std::getline(inputFile, line)) {
      outputFile << line << "\n";
    }

    // Close the files.
    inputFile.close();
    outputFile.close();

    // Print a success message.
    std::cout << "File copied successfully." << std::endl;
  } else {
    // Print an error message.
    std::cout << "Could not open files." << std::endl;
  }

  return 0;
}