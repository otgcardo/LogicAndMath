#include <iostream>
#include <string>
#include <random>
/*
 - otgcardo@yahoo.com
 - Rock, paper, scissor cli game against robot
 - Uses the Mersenne Twister 19937 generator api instead of rand()
 - all logic in main local scope
*/
int main(){
	
	std::string rps[3] = {"Rock","Paper","Scissors"};
	
	std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<std::mt19937::result_type> shoot(0,2);

	int userEntry = 0;
	bool isLooping = true;
  int userPoints = 0, botPoints = 0;
	
	std::cout<<"WELCOME TO ([T H E  R P S  G A M E])\n"<<std::endl;
	std::cout<<"Entry Options: 1 [Rock] | 2 [Paper] | 3 [Scissors] | ANY KEY to Quit"<<std::endl;
	
	std::cin>>userEntry;
	
  if(userEntry == 1){

    std::cout<<"You chose: Rock"<<std::endl;
    std::string botChose = rps[shoot(rng)];
    std::cout<<"Bot chose: "<<botChose<<std::endl;
    //0Rock, 1Paper, 2Scissors

    if(botChose == rps[0]){
      std::cout<<"Even"<<std::endl;
    }
     
    if(botChose == rps[1]){
      std::cout<<"You Lost, Bot Won!"<<std::endl;
      ++botPoints;
    }

    if(botChose == rps[2]){
      std::cout<<"You Won!, Bot lost"<<std::endl;
      ++userPoints;
    }

  }else if(userEntry == 2){

    std::cout<<"You chose: Paper"<<std::endl;
    std::string botChose = rps[shoot(rng)];
    std::cout<<"Bot chose: "<<botChose<<std::endl;
    //0Rock, 1Paper, 2Scissors

    if(botChose == rps[0]){
      std::cout<<"You Won!, Bot Lost"<<std::endl;
      ++userPoints;
    }
     
    if(botChose == rps[1]){
      std::cout<<"Even"<<std::endl;
    }

    if(botChose == rps[2]){
      std::cout<<"You Lost, Bot Won!"<<std::endl;
      ++botPoints;
    }

  }else if(userEntry == 3){

    std::cout<<"You chose: Scissor"<<std::endl;
    std::string botChose = rps[shoot(rng)];
    std::cout<<"Bot chose: "<<botChose<<std::endl;
    //0Rock, 1Paper, 2Scissors

    if(botChose == rps[0]){
      std::cout<<"You Lost, Bot Won!"<<std::endl;
      ++botPoints;
    }
     
    if(botChose == rps[1]){
      std::cout<<"You Won!, Bot Lost"<<std::endl;
      ++userPoints;
    }

    if(botChose == rps[2]){
      std::cout<<"Even"<<std::endl;
    }

  }else{ 
    std::cout<<"        User Score: #"<<userPoints<<std::endl;
    std::cout<<"         Bot Score: #"<<botPoints<<std::endl;
    return 0; 
  }

	while(!isLooping == false){

    std::cin>>userEntry;

    if(userEntry == 1){

    	std::cout<<"You chose: Rock"<<std::endl;
      std::string botChose = rps[shoot(rng)];
      std::cout<<"Bot chose: "<<botChose<<std::endl;

      if(botChose == rps[0]){
        std::cout<<"Even"<<std::endl;
      }
     
      if(botChose == rps[1]){
        std::cout<<"You Lost, Bot Won!"<<std::endl;
        ++botPoints;
      }

      if(botChose == rps[2]){
        std::cout<<"You Won!, Bot lost"<<std::endl;
        ++userPoints;
      }

    }else if(userEntry == 2){

    	std::cout<<"You chose: Paper"<<std::endl;
      std::string botChose = rps[shoot(rng)];
      std::cout<<"Bot chose: "<<botChose<<std::endl;

      if(botChose == rps[0]){
        std::cout<<"You Won!, Bot Lost"<<std::endl;
        ++userPoints;
      }
     
      if(botChose == rps[1]){
        std::cout<<"Even"<<std::endl;
      }

      if(botChose == rps[2]){
        std::cout<<"You Lost, Bot Won!"<<std::endl;
        ++botPoints;
      }

    }else if(userEntry == 3){

    	std::cout<<"You chose: Scissor"<<std::endl;
      std::string botChose = rps[shoot(rng)];
      std::cout<<"Bot chose: "<<botChose<<std::endl;

      if(botChose == rps[0]){
        std::cout<<"You Lost, Bot Won!"<<std::endl;
        ++botPoints;
      }
     
      if(botChose == rps[1]){
        std::cout<<"You Won!, Bot Lost"<<std::endl;
        ++userPoints;
      }

      if(botChose == rps[2]){
        std::cout<<"Even"<<std::endl;
      }

    }else{
      std::cout<<"        User Score: #"<<userPoints<<std::endl;
      std::cout<<"         Bot Score: #"<<botPoints<<std::endl;
      isLooping = false; return 0; 
    }

	}

	return 0;
}
