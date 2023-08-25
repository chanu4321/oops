#include <iostream>
using namespace std; 
int main() 
{ 
char letter = 'A', new_letter; 
int value = 10, result; 
if(islower(letter)) 
new_letter = toupper(letter); 
else 
new_letter = value + letter; 
result = new_letter + 10; 
cout<< letter <<" has changed its value to " << result <<endl; 
return 0;
}