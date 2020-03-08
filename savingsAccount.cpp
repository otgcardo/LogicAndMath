/*
 - otgcardo@yahoo.com
 - SavingsAccount using OOP
*/
#include <iostream>
#include <iomanip>

class SavingsAccount{ //private variables
  double deposit, withdraw, balance;
  double annualInterestRate;
  double convertInterest;
  double finalWithdraw = 0.0, finalDeposit = 0.0;
  double startingBalance;
  
  const int FW = 12;
  int numberOfMonths;

public:
  SavingsAccount();
  //Incase instantiation from default constructor
  SavingsAccount(double _startingBalance, int _numberOfMonths, double _annualInterestRate) 
    : startingBalance(_startingBalance), numberOfMonths(_numberOfMonths), annualInterestRate(_annualInterestRate) {}
  void CalculateMonthlyInterest(); //Contains logic
  void Result(); //Shows results
};

//All logic is inside CalculateMonthlyInterest function
void SavingsAccount::CalculateMonthlyInterest(){

  balance = startingBalance;

  //Calculates interest for each month on starting and ending
  for(int i = 1; i <= numberOfMonths; i++){
    std::cout<<"Enter amount to deposit for month "<<i<<" : ";
    std::cin>>deposit;

    while (deposit < 0){
      std::cout<<"Please enter a positive amount: ";
      std::cin>>deposit;
    }

    finalDeposit += deposit;

    std::cout<<"Enter the amount withdrawn for month "<<i<<" : ";
    std::cin>>withdraw;
    
    while(withdraw < 0 || withdraw > balance + deposit){
      std::cout<<"Withdrawal must not be negative nor greater than current balance of: $ "<<balance+deposit<<std::endl;
      std::cout<<"Please re-enter withdrawal amount: ";
      std::cin>>withdraw;
    }

    //formulas
    finalWithdraw += withdraw;

    balance = (balance + deposit) - withdraw;

    convertInterest = (annualInterestRate / 1200) * ((balance + startingBalance) / 2);

    std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);

    std::cout<<"Balance at end of the month "<<i<<": $"<<balance + convertInterest<<std::endl;
  }
}

//Display results
void SavingsAccount::Result(){
  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
  std::cout<<"Starting Balance     $"<<std::setw(FW)<<startingBalance<<std::endl;
  std::cout<<"Sum Amount Deposited $"<<std::setw(FW)<<finalDeposit<<std::endl;
  std::cout<<"Sum Amount Withdrawn $"<<std::setw(FW)<<finalWithdraw<<std::endl;
  std::cout<<"Ending Balance       $"<<std::setw(FW)<<balance + convertInterest<<std::endl;
}

int main(int argc, char* argv[]){
  
  /*SavingsAccount constructor takes 3 arguments, 
  initial balance of double, monthly calculation of int, 
  interest of double*/
  SavingsAccount sa1(1000.0,2,.2); //Set balance of 1000
  sa1.CalculateMonthlyInterest();
  sa1.Result();

  SavingsAccount sa2(2000.0,2,.2); //Set balance of 2000
  sa2.CalculateMonthlyInterest();
  sa2.Result();

  return 0;
}
