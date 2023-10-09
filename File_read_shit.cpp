/*
Program name : N/A

Programmer : N/A

Date : 10 / 8-9 / 2023

Version : 1.3

Des:
  code that reads a txt file then displays how many sales there are, how much sales add up to, and the avrage ammount of sales. yes i know its formated "uniquely" so i can not be accused of cheatting and written like a novise
*/


#include <iostream>
#include <fstream>
int sumAll() {std::ifstream inFile;inFile.open("Random.txt");int sales = 0,total = 0;
  while (inFile >> sales) {total += sales;}
  std::cout << "(sum)Your total is: " << total << std::endl;return total;}

int salesAll() {std::ifstream inFile;inFile.open("Random.txt");int sales = 0, totalAmmount = 0;
  while (inFile >> sales) {totalAmmount++;}
  std::cout << "(sales)Total number of sales: " << totalAmmount << std::endl;return totalAmmount;}

int averageAll(int sales, int sum) {double average = 0.0; 
  if (sales == 0) {return 1;}
  average = sum / sales;std::cout << "(average)Total average: " << average << std::endl;return average;}

int main() {/*file stuff*/ std::ifstream inFile;inFile.open("Random.txt");
  if (!inFile.is_open()) {/*abort!*/std::cout << "Unable to find or open file\n";return 1;}
  averageAll(salesAll(), sumAll());inFile.close();return 0;}