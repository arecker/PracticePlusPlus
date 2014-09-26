#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
  int i;
  int size = sizeof(argv);

  for (i=0 ; i<size ; i++) {
    cout << argv[i] << "\n";
  }

  return 0;
}
