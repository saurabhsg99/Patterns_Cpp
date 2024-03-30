#include <iostream>
#include "patterns.h"
#define N 11
using namespace std;

int main()
{
     
     cout << "\n***********  Butterfly Pattern **************\n\n"
          << endl;
     butterfly(N);
     cout << endl;
     cout << endl;

     cout << "\n***********  Pyramid Pattern **************\n\n"
          << endl;

     Pyramid1(5);

     cout << "\n***********  Pallindromic Pattern **************\n\n"
          << endl;

     Pallindromic_Pyramid(5);

     cout << "\n***********  Even0Pyramid **************\n\n"
          << endl;

     Even0Pyramid(5);
     cout << endl;

     Even0Pyramid2(5);
     cout << endl;
     Even0Pyramid3(5);
     cout << endl;
     Even0Pyramid4(5);

     cout << "\n***********  Arrow **************\n\n"
          << endl;
     arrow(6);
     cout << endl;
     arrow2(6);

     cout << "\n\n***********  Star Pattern **************\n"
          << endl;
     starpattern(9);
     cout << endl;
     cout << "\n\n***********  InDiamond **************\n"
          << endl;
     inDiamond(10);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"
          << endl;
     diamond(9);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"
          << endl;

     pattern(12);

     cout << endl;
     cout << "\n\n***********  Pattern **************\n"
          << endl;

     pattern2(14);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"
          << endl;

     pattern3(7);
     cout << endl;
     cout << "\n\n***********  Narrow Butterfly **************\n"
          << endl;

     narrowButterfly(9);
     cout << endl;

     cout << "\n\n***********  Series **************\n"
          << endl;

     series(20);
     cout << endl;

     cout << "\n\n***********  Hollow Rectangle **************\n"
          << endl;
     solid_rectangle(3, 5);
     cout << endl;
     cout << "\n\n***********  SOlid Rectangle **************\n"
          << endl;
          HollowRect(6,'*');

     cout << "\n\n***********  Pyramid **************\n"
          << endl;
     Pyramid2(5);
     cout << endl;
     cout << endl;
     cout << "\n\n***********  Pyramid **************\n"
          << endl;
     Pyramid22(6);
     cout << endl;
     cout << "\n\n*********** Numeric  Pyramid **************\n"
          << endl;
     NumericPyramid(5);
     cout << endl;

     cout << "\n\n*********** Inverted Pyramid **************\n"
          << endl;
     inverted_Pyramid2(7);
     cout << endl;

     cout << "\n\n*********** Hollow Diamond **************\n"
          << endl;
     hollow_Diamond(6);

     cout << "\n\n*********** Fancy Pattern **************\n"
          << endl;

     fancy_pattern(4);

     cout << "\n\n***********  Pattern **************\n"
          << endl;

     pattern4(5);
     cout << "\n\n*********** Numeric Pattern **************\n"
          << endl;

     NumericPyramid(5);

     cout << "\n\n*********** Numeric Pattern **************\n"
          << endl;

     NumericFullPyramid(5);

     cout << "\n\n*********** Design **************\n"
          << endl;

     design2(6);
     cout << "\n\n*********** Design **************\n"
          << endl;

     design(6);
     cout << "\n\n*********** Design **************\n"
          << endl;
     designn(6);

     cout << "\n\n*********** Numeric Hollow **************\n"
          << endl;
     NumericHollow(5);

     cout << "\n\n*********** Zero-One **************\n"
          << endl;
     zero1(5);

     cout << "\n\n*********** Floyd Triangle **************\n"
          << endl;

     floydTriangle(5);

     cout << "\n\n*********** Pascal triangle **************\n"
          << endl;

     pascal(6);

     cout << "\n\n*********** Alphabet**************\n"
          << endl;
   
    alphabet();
     return 0;
}
