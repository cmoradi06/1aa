// 
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ostream>

int randNUMBER();
void condHAIR(int randY);

int main() {
  srand (time(0));
  for (int iA = 1; iA < (20 + 1); iA++) {
    int randD;
    randD = randNUMBER();
    std::cout << "random number: ";
    std::cout << randD << " => ";
    condHAIR(randD);
    std::cout << std::endl;
  }

}