#include<iostream>
#include<fstream>

using namespace std;

int main(){

  ifstream inputFile;
  inputFile.open("input.txt");
  char output[100];

  if (inputFile.is_open()){
    while (!inputFile.eof()){
      inputFile >> output;
      cout << output;
    }
  }

  inputFile.close();
  return 0;
}
