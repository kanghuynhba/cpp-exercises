#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;

int lengthOf(int number)
{
  int length = 0;
  while (number > 0)
  {
    length += 1;
    number /= 10;
  }
  return length;
};
vector<int> parseNumToArray(int number) 
{
  vector<int> digits;
  int length = lengthOf(number);
  // iterate through number from end
  int index = length; 
  while (index > 0)
  {
    int digit = fmod(number, pow(10, index)) / pow(10, index - 1);
    index -= 1;
    digits.push_back(digit);
  }
  return digits;
}
bool isPalindrome(int number)
{
  if (number < 0)
      return false;
  vector<int> digits = parseNumToArray(number);
  int size = digits.size();
  for (int i = 0; i < size/2; i++)
  {
    if (digits[size - 1 - i] != digits[i])
        return false;
  };
  return true;
}
int main()
{
  int number;
  cin >> number;
  cout << isPalindrome(number);
  return 0;
};
