#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#define SIZE 6

struct Wine{
  std::string brand[SIZE]={"bordo","jodo","penfolds","marchesi antinori","louis roederer","harlan Estate"},country[SIZE]={"Italy","France","Australia","Italy","France","USA"},color[SIZE]={"Red","White","Red","Red","White","Red",};
  float volume[SIZE]={1.5,0.5,0.75,1,0.5,0.375};
  int percent[SIZE]={18,10,6,12,12,10};
} base[SIZE];


int main() {
  std::cout << "\n------------------------------------------------------------------------\n" ;
  std::cout << "|Brand \t\t\t  |"<< "Color\t|"<<"Volume\t|"<<"Percent %  |"<<"Country"<<std::setw(5)<<"|\n";
  std::cout << "------------------------------------------------------------------------\n" ;
  for (size_t i = 0; i < SIZE; i++) {
  std::cout<<"|" <<std::left<<std:: setw(25)<<base[i].brand[i]<<"|"<<std::setw(13)<<base[i].color[i]<<"| "<<std::setw(6)<<base[i].volume[i]<<"|"<<std::setw(11)<<base[i].percent[i]<<"|"<<std::setw(10)<<base[i].country[i]<<"|\n";
  }
  system("pause");
  system("cls");
  std::cout << "________________________________________________________________________" << '\n';
  std :: ofstream filename;
filename.open("C:\\Users\\lerap\\OneDrive\\Documents\\atom.projects\\lw19\\lw19exit.txt");
if(filename.is_open()){
  std::string object;
  filename << "\n\t\tENTER BRAND: ";
    std::cout <<"\n\t\tENTER BRAND: ";
while ( std :: getline(std::cin,object)) {
  std::transform(object.begin(), object.end(), object.begin(),
    [](unsigned char c){ return std::tolower(c); });

 filename << object; filename<<"\n";
  bool ptr=false;
  for (size_t i = 0; i < SIZE; i++) {
if (object==base[i].brand[i]) {
  filename << "\n------------------------------------------------------------------------\n" ;
  filename <<"|Brand \t\t\t  |"<< "Color\t|"<<"Volume\t|"<<"Percent %  |"<<"Country"<<std::setw(5)<<"|\n";
  filename<< "------------------------------------------------------------------------\n" ;
filename<<"|" <<std::left<<std:: setw(25)<<base[i].brand[i]<<"|"<<std::left<<std::setw(13)<<base[i].color[i]<<"| "<<std::left<<std::setw(6)<<base[i].volume[i]<<"|"<<std::left<<std::setw(11)<<base[i].percent[i]<<"|"<<std::left<<std::setw(10)<<base[i].country[i]<<"|\n";
std::cout << "\n------------------------------------------------------------------------\n" ;
std::cout << "|Brand \t\t\t  |"<< "Color\t|"<<"Volume\t|"<<"Percent %  |"<<"Country   |";
std::cout << "\n------------------------------------------------------------------------" ;
std::cout<<"\n|" <<std::left<<std:: setw(25)<<base[i].brand[i]<<"|"<<std::left<<std::setw(13)<<base[i].color[i]<<"| "<<std::left<<std::setw(6)<<base[i].volume[i]<<"|"<<std::left<<std::setw(11)<<base[i].percent[i]<<"|"<<std::left<<std::setw(10)<<base[i].country[i]<<"|\n";
ptr=true;
}
else if (object=="end") {
  filename.close();
return 0;
}
}
  if(!ptr) {
 filename << "There is no such brand or entered the data is wrong " << '\n';
std::cout << "There is no such brand or entered the data is wrong " << '\n'; }
std::cout << "\n\t\tENTER BRAND: ";
filename << "\n\t\tENTER BRAND: ";
}
}  else std::cout << "File is`nt open" << '\n';
filename.close();
  return 0;
}
