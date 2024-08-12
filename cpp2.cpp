#include <iostream>
#include <string>
using namespace std;

class car {       // The class
  public:             // Access specifier
    int modelyear; 
    string modelname;
    string make;// Attribute (string variable)
};

int main() {
  car carobj1;
  car carobj2;
  car carobj3;// Create an object of MyClass

  // Access attributes and set values
  carobj1.modelyear = 2012;
  carobj1.modelname = "civic reborn";
  carobj1.make ="honda" ;
  cout << carobj1.modelyear << "\n"; 
  cout << carobj1.modelname<<"\n";
  cout << carobj1.make<<"\n";
  cout<<"\n";
  
  carobj2.modelyear = 2004;
  carobj2.modelname = "civic eagle eye";
  carobj2.make ="honda" ;
  cout << carobj2.modelyear << "\n"; 
  cout << carobj2.modelname<<"\n";
  cout << carobj2.make<<"\n";
  cout<<"\n";
  
  carobj3.modelyear = 1982;
  carobj3.modelname = "SE three hundred, w one hundred twenty six ";
  carobj3.make ="Mercedes-Benz" ;
  cout << carobj3.modelyear << "\n"; 
  cout << carobj3.modelname<<"\n";
  cout << carobj3.make<<"\n";
  return 0;
}
