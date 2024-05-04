git config --global --unset http.proxy
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ostream>

int main();
int randNUMBER();

void condHAIR(int randZ) {
  int randA;
  randA = randZ;
  if (randA <= 50)
    std::cout << "you got a mohawk haircut";
    else 
      if (randA <= 75)
      std::cout << "you got a overgrown haircut";
      else if (randA <= 90)
        std::cout << "you got a buzz haircut";
        else if (randA <= 96)
          std::cout << "you got a bald haircut";
          else if (randA <= 99)
            std::cout << "you got a bob haircut";
            else
            std::cout << "you got a popstar haircut";

} 
