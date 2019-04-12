/*
	DUNDI VEDANTAM
	Date
	menu_program_functions.cpp
*/

#include <iostream>

using namespace std;

int main()
{

int choice;
{
  cout << "Input choice" << endl;
  cout << "1 = Max" << endl;
  cout << "2 = Temperature" << endl;
  cout << "3 = Grades " << endl;
  cout << "4 = Print in Order" << endl;
  cout << "5 = Multiple" << endl;
  cout << "6 = Consecutive" << endl;
  cout << endl;
  cin >> choice;
  cout << endl;
}


if (choice == 1) //max
{
  int num1;
  int num2;

  cout << "input num1" << endl;
  cin >> num1;

  cout << "input num2" << endl;
  cin >> num2;

  if (num1 == num2)
  {
    cout << "num1 = num2" ;
  }

  if (num1 >= num2)
  {
    cout << "num1 > num2 " << endl;
  }

  if (num1 <= num2)
  {
    cout << "num1 < num2" << endl;
  }
}

if (choice == 2) //cToF
{
  int temp;
  cout << "input tempertaure (Celsius)" << endl;
  cin >> temp;
  cout << "Your temperature in Farenheit is = " << (1.8 * temp) + 32 << endl;


}
   
if (choice == 3) //convertToletter
{
  int grade;
  cout << "input grade" << endl;
  cin >> grade;

  if (grade >= 90)
    {
    cout << "A" << endl;
    }
  
  if (grade >= 80 && grade <= 89)
    {
      cout << "B" << endl;
    }
 
  if (grade >= 70 && grade <= 79)
    {
      cout << "C" << endl;
    }
 
  if (grade >= 60 && grade <= 69)
    {
      cout << "D" << endl;
    }

  if (grade <= 60)
    {
      cout << "F" << endl;
    }


}

if (choice == 4) //printInOrder
{
  char first;
  char second;
  char third;
  cout << "Input first char" << endl;
  cin >> first;
  cout << "Input second char" << endl;
  cin >> second;
  cout << "Input third char" << endl;
  cin >> third;
   if (first >> second >> third)
  {
    cout << first << second << third << endl;
  }
  if (first >> third >> second)
  {
    cout << first << third << second << endl;
  }
  if (second >> first >> third)
  {
    cout << second << first << third << endl;
  }
  if (second >> third >> first)
  {
    cout << second << third << first << endl;
  }
  if (third >> second >> first)
  {
    cout << third << second << first << endl;
  }
  if (third >> first >> second)
  {
    cout << third << first << second << endl;
  }




}
if (choice == 5) // isMultiple
{
  int num1;
  int num2;

  cout << "Input num1" << endl;
  cin >> num1;
  cout << "Input num2" << endl;
  cin >> num2;
  cout << " num1 =  " << num1  << " num2 =  " << num2 << endl;

  if (num1 % num2 == 0)
  {
  cout << "Numbers are multiples of each other" << endl;
  }

  else 
  { 
  cout << "Numbers are not multiples of each other" << endl;
  }


}
   
if (choice == 6) //twoConsecutive
{
  int num1;
  int num2;
  cout << "input num1 " << endl;
  cin >> num1;
  cout << "input num2" << endl;
  cin >> num2;

  if (abs(num1-num2) != 1){
    cout << "Numbers are not consecutive" << endl;
  }else {
    cout << "Numbers are consecutive" << endl;
  }

}
   
   
return 0;
}

