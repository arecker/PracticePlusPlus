#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "How old are you? ";
  cin >> age;

  if (age >= 21) {
    cout << "Congratulations.  You can drink.\n";
  } else if (age > 0 && age < 21){
    cout << "Sorry.  No beer for you.\n";
  } else {
    cout << "That doesn't name any sense.\n";
  }
}
