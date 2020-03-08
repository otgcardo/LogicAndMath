#include <iostream>
#include <iomanip>
#include <limits>

/*
 - otgcardo@yahoo.com
 - A small basic cli store called YALMART a spoof version of Walmart
 - Uses class, private variables, starts you off with $1024.0
*/

class YalmartStore{
  double customersCash = 1024.0; //How much you want to bank?

  bool isFunctionLooping;
  double tax;
  char purchase;
public:
  void Menu();
  void Clothing(); //%6 off
  void BeautyProducts(); //7% off
  void Grocery(); //3% off
  void Gardening(); //6% off
  void SchoolSupplies(); //3% off
  void TobaccoProducts(); //10% off

}*Yalmart, Store;

void YalmartStore::Menu(){
  std::cout<<"Welcome to Yalmart... (Yall Market, all your shopping needs here!)"<<std::endl
      <<"Enter 1 : Clothing Department"<<std::endl
      <<"Enter 2 : Beauty Products"<<std::endl
      <<"Enter 3 : Grocery"<<std::endl
      <<"Enter 4 : Gardening"<<std::endl
      <<"Enter 5 : School Supplies"<<std::endl
      <<"Enter 6 : Tobacco Products"<<std::endl
      <<"Enter 7 : Exit Yalmart Store"<<std::endl;
}

void YalmartStore::Clothing(){
  std::cout<<"==========WELCOME TO CLOTHING DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double shirt = 25.63; //price of shirt

  tax = 0;
  tax = shirt * 6 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"Shirt Price: $"<<shirt<<std::endl
      <<"6% Tax off shirt: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase shirt | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (shirt - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //not looping
    }
  }
  std::cout<<"==========LEFT CLOTHING DEPARTMENT======"<<std::endl;
}

void YalmartStore::BeautyProducts(){
  std::cout<<"==========WELCOME TO BEAUTY PRODUCTS DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double perfume = 325.12; //price of perfume

  tax = 0;
  tax = perfume * 7 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"Perfume Price: $"<<perfume<<std::endl
      <<"7% Tax off perfume: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase perfume | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (perfume - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //not looping
    }
  }
  std::cout<<"==========LEFT BEAUTY PRODUCTS DEPARTMENT======"<<std::endl;
}

void YalmartStore::Grocery(){
  std::cout<<"==========WELCOME TO GROCERY DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double springWaterPack = 11.16; //price of pack of spring water

  tax = 0;
  tax = springWaterPack * 3 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"Spring Water Pack Price: $"<<springWaterPack<<std::endl
      <<"3% Tax off Spring Water Pack: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase Spring Water Pack | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (springWaterPack - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //Nope its not looping anymore
    }
  }
  std::cout<<"==========LEFT GROCERY DEPARTMENT======"<<std::endl;
} 

void YalmartStore::Gardening(){
  std::cout<<"==========WELCOME TO GARDENING DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double flowerPot = 7.25; //price of flower pot

  tax = 0;
  tax = flowerPot * 6 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"Flower Pot Price: $"<<flowerPot<<std::endl
      <<"6% Tax off Flower Pot: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase Flower Pot | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (flowerPot - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //not looping
    }
  }
  std::cout<<"==========LEFT GARDENING DEPARTMENT======"<<std::endl;
} 

void YalmartStore::SchoolSupplies(){
  std::cout<<"==========WELCOME TO SCHOOL SUPPLY DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double notebook = 13.50; //5 star ring binder

  tax = 0;
  tax = notebook * 3 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"5 Star Ring Binder Price: $"<<notebook<<std::endl
      <<"3% Tax off 5 Star Ring Binder: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase 5 Star Ring Binder | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (notebook - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //not looping anymore
    }
  }
  std::cout<<"==========LEFT SCHOOL SUPPLY DEPARTMENT======"<<std::endl;
}

void YalmartStore::TobaccoProducts(){
  std::cout<<"==========WELCOME TO TOBACCO PRODUCT DEPARTMENT=========="<<std::endl;
  isFunctionLooping = true;

  double cubanCigar = 55.50; //Cuban cigar price

  tax = 0;
  tax = cubanCigar * 10 / 100;

  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2)
      <<"Cuban Cigar Price: $"<<cubanCigar<<std::endl
      <<"10% Tax off Cuban Cigar: $"<<tax<<std::endl;

  purchase = ' ';
  std::cout<<"Press p to purchase Cuban Cigar | Hit anykey and enter to choose another department..."<<std::endl;

  while(!isFunctionLooping == false){
    std::cin>>purchase; //Get input purchase
    if(purchase == 'p' || purchase == 'P'){ //Incase user forgets their caps lock on 
      customersCash -= (cubanCigar - tax);  //Deduct users cash
      std::cout<<"Money left over after purchase: $"<<customersCash<<std::endl; //Results
    }else{
      isFunctionLooping = false; //not looping
    }
  }
  std::cout<<"==========LEFT TOBACCO PRODUCT DEPARTMENT======"<<std::endl;
}

int main(){

  Yalmart = &Store;

  bool isLooping = true;
  int option = 0;

  Yalmart->Menu(); //Menu options
  
  std::cin.exceptions(std::istream::failbit); //This is necessary
  do{

    try{

      std::cin>>option; //get input

      if(option < 1 || option > 7){
        throw 1;  //Throw 1 if user did input correctly
      }

      switch(option){
        case 1:
          Yalmart->Clothing(); 
          break;
        case 2:
          Yalmart->BeautyProducts(); 
          break;
        case 3:
          Yalmart->Grocery();
          break;
        case 4:
          Yalmart->Gardening();
          break;
        case 5:
          Yalmart->SchoolSupplies();
          break;
        case 6:
          Yalmart->TobaccoProducts();
          break;
        case 7:
          std::cout<<"Quitting..."<<std::endl;
          isLooping = false;
        default:
          if(option == 7){/*Disguise default switch output message from interfering when user quits*/}
          else{
            std::cout<<"Unrecognized input"<<std::endl; //Inform user they did not enter appropriate input
          }
          break;
      }

    }catch(std::ios_base::failure &fail){
      std::cout<<"Failed, please enter according to instructions..."<<std::endl;
      //prevents output statement from running in loop crazy
      std::cin.clear(); 
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }catch(int x){
      std::cout<<"Enters numbers 1 - 7"<<std::endl;
      std::cout<<x<<std::endl;
    }catch(...){ //This should always be last
      break; 
    }

  }while(!isLooping == false); //while isLooping not equal to false

  return 0;
}
