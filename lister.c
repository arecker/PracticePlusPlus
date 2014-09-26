#include <iostream>
using namespace std;

int getOption()
{
  int choice;
  cout << "Choose one\n";
  cout << "(1) Add something\n";
  cout << "(0) Leave\n";
  cout << "-> ";
  cin >> choice;
  return choice;
}

int main(void)
{
  int i;

  do {

    i = getOption();

  } while (i != 0);

  cout << "Bye.\n";
  return 0;
}
