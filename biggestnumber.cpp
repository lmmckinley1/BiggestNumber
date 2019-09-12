//Leah McKinley
#include<iostream>

using std::cout;
using std::endl;

int main()
{
  int num1, num2;

  std::cout<<"Please enter a whole number:\n"; 
  std::cin>>num1;
  std::cout<<"Please enter another whole number:\n";
  std::cin>>num2;
         
  std::cout<<"Of those two numbers, the biggest is: "<<(num1>num2) ;
 if (num1>num2) 
 {  
        cout<<num1<<endl;

 }  
 else    
 {  
        cout<<num2<<endl;

 } std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
