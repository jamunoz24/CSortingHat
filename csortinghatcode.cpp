//CSortingHat Code


#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct question {
int five;
int four;
int three;
int two;
int one;

void calculate(){
five += 5;
four += 4;
three += 3;
two += 2;
one += 1;

}

};




int main(){

int FE = 0; //front end
int BE = 0; //back end
int DS = 0; //data science
int AI = 0; //artificial intelligence
int CS = 0; //cyber security
int GD = 0; //game design


//QUESTION ONE////////////////////////////////////////////////
question one; //struct for question one

one.five = GD;
one.four = FE;
one.three = CS;
one.two = AI;
one.one = DS;
one.calculate();
 GD = one.five;
 FE = one.four;
 CS = one.three;
 BE = one.two;
 DS = one.one;

//QUESTION TWO////////////////////////////////////////////////////
question two; 

two.five = DS;
two.four = AI;
two.three = BE;
two.two = GD;
two.one = CS;
two.calculate();
DS = two.five;
AI= two.four;
BE = two.three;
GD = two.two;
CS = two.one;

//QUESTION THREE////////////////////////////////////////////////////
question three; 

three.five = GD;
three.four = AI;
three.three = FE;
three.two = BE;
three.one = CS;
three.calculate();
GD = three.five;
AI = three.four;
FE = three.three;
BE = three.two;
CS= three.one;

//QUESTION FOUR////////////////////////////////////////////////////
question four; 

four.five = AI;
four.four = GD;
four.three = BE;
four.two = DS;
four.one = CS;
four.calculate();
AI = four.five;
GD = four.four;
BE = four.three;
DS = four.two;
CS = four.one;

//QUESTION FIVE////////////////////////////////////////////////////
question five;

five.five = BE;
five.four = AI;
five.three = DS;
five.two = GD;
five.one = FE;
five.calculate();
BE = five.five;
AI = five.four;
DS = five.three;
GD = five.two;
FE = five.one;

//QUESTION SIX////////////////////////////////////////////////////
question six;

six.five = FE;
six.four = BE;
six.three = GD;
six.two = CS;
six.one = AI;
six.calculate();
FE = six.five;
BE = six.four;
GD= six.three;
CS = six.two;
AI = six.one;

//QUESTION SEVEN////////////////////////////////////////////////////
question seven;

seven.five = FE;
seven.four = GD;
seven.three = DS;
seven.two = AI;
seven.one = BE;
seven.calculate();
FE = seven.five;
GD = seven.four;
DS = seven.three;
AI = seven.two;
BE = seven.one;

//QUESTION EIGHT////////////////////////////////////////////////////
question eight;

eight.five = CS;
eight.four = BE;
eight.three = GD;
eight.two = AI;
eight.one = DS;
eight.calculate();
CS = eight.five;
BE = eight.four;
GD = eight.three;
AI = eight.two;
DS = eight.one;

//QUESTION NINE////////////////////////////////////////////////////
question nine;

nine.five = DS;
nine.four = AI;
nine.three = BE;
nine.two = CS;
nine.one = GD;
nine.calculate();
DS = nine.five;
AI = nine.four;
BE = nine.three;
CS = nine.two;
GD = nine.one;

//QUESTION TEN////////////////////////////////////////////////////
question ten;

ten.five = FE;
ten.four = GD;
ten.three = BE;
ten.two = CS;
ten.one = DS;
ten.calculate();
FE = ten.five;
GD = ten.four;
BE = ten.three;
CS = ten.two;
DS = ten.one;

//QUESTION ELEVEN////////////////////////////////////////////////////
question eleven;

eleven.five = CS;
eleven.four = BE;
eleven.three = DS;
eleven.two = GD;
eleven.one = AI;
eleven.calculate();
CS = eleven.five;
BE = eleven.four;
DS = eleven.three;
GD = eleven.two;
AI = eleven.one;

//QUESTION TWELVE////////////////////////////////////////////////////
question twelve;

twelve.five = DS;
twelve.four = BE;
twelve.three = AI;
twelve.two = CS;
twelve.one = GD;
twelve.calculate();
DS = twelve.five;
BE = twelve.four;
AI = twelve.three;
CS = twelve.two;
GD = twelve.one;

//QUESTION THIRTEEN////////////////////////////////////////////////////
question thirteen;

thirteen.five = CS;
thirteen.four = GD;
thirteen.three = AI;
thirteen.two = BE;
thirteen.one = DS;
thirteen.calculate();
CS = thirteen.five;
GD = thirteen.four;
AI = thirteen.three;
BE = thirteen.two;
DS = thirteen.one;

//QUESTION FOURTEEN////////////////////////////////////////////////////
question fourteen;

fourteen.five = AI;
fourteen.four = BE;
fourteen.three = GD;
fourteen.two = DS;
fourteen.one = FE;
fourteen.calculate();
AI = fourteen.five;
BE = fourteen.four;
GD = fourteen.three;
DS = fourteen.two;
FE = fourteen.one;

//QUESTION FIFTEEN////////////////////////////////////////////////////
question fifteen;

fifteen.five = GD;
fifteen.four = FE;
fifteen.three = AI;
fifteen.two = BE;
fifteen.one = CS;
fifteen.calculate();
GD = fifteen.five;
FE = fifteen.four;
AI = fifteen.three;
BE = fifteen.two;
CS = fifteen.one;

//QUESTION SIXTEEN////////////////////////////////////////////////////
question sixteen;

sixteen.five = GD;
sixteen.four = FE;
sixteen.three = AI;
sixteen.two = BE;
sixteen.one = CS;
sixteen.calculate();
GD = sixteen.five;
FE = sixteen.four;
AI = sixteen.three;
BE = sixteen.two;
CS = sixteen.one;

//QUESTION SEVENTEEN////////////////////////////////////////////////////
question seventeen;

seventeen.five = CS;
seventeen.four = DS;
seventeen.three = AI;
seventeen.two = BE;
seventeen.one = GD;
seventeen.calculate();
CS = seventeen.five;
DS = seventeen.four;
AI = seventeen.three;
BE = seventeen.two;
GD = seventeen.one;

//QUESTION EIGHTEEN////////////////////////////////////////////////////
question eighteen;

eighteen.five = AI;
eighteen.four = BE;
eighteen.three = CS;
eighteen.two = DS;
eighteen.one = GD;
eighteen.calculate();
AI = eighteen.five;
BE = eighteen.four;
CS = eighteen.three;
DS = eighteen.two;
GD = eighteen.one;

//QUESTION NINETEEN////////////////////////////////////////////////////
question nineteen;

nineteen.five = BE;
nineteen.four = AI;
nineteen.three = DS;
nineteen.two = CS;
nineteen.one = GD;
nineteen.calculate();
BE = nineteen.five;
AI = nineteen.four;
DS = nineteen.three;
CS = nineteen.two;
GD = nineteen.one;

//QUESTION TWENTY////////////////////////////////////////////////////
question twenty;

twenty.five = AI;
twenty.four = GD;
twenty.three = BE;
twenty.two = FE;
twenty.one = CS;
twenty.calculate();
AI = twenty.five;
GD = twenty.four;
BE = twenty.three;
FE = twenty.two;
CS = twenty.one;

//QUESTION TWENTYONE////////////////////////////////////////////////////
question twentyOne;

twentyOne.five = BE;
twentyOne.four = DS;
twentyOne.three = CS;
twentyOne.two = AI;
twentyOne.one = FE;
twentyOne.calculate();
BE = twentyOne.five;
DS = twentyOne.four;
CS = twentyOne.three;
AI = twentyOne.two;
FE = twentyOne.one;

//QUESTION TWENTYTWO////////////////////////////////////////////////////
question twentyTwo;

twentyTwo.five = DS;
twentyTwo.four = AI;
twentyTwo.three = BE;
twentyTwo.two = FE;
twentyTwo.one = CS;
twentyTwo.calculate();
DS = twentyTwo.five;
AI= twentyTwo.four;
BE = twentyTwo.three;
FE= twentyTwo.two;
CS= twentyTwo.one;

//QUESTION TWENTYTHREE////////////////////////////////////////////////////
question twentyThree;

twentyThree.five = BE;
twentyThree.four = GD;
twentyThree.three = AI;
twentyThree.two = CS;
twentyThree.one = DS;
twentyThree.calculate();
BE = twentyThree.five;
GD = twentyThree.four;
AI = twentyThree.three;
CS = twentyThree.two;
DS = twentyThree.one;

//QUESTION TWENTYFOUR////////////////////////////////////////////////////
question twentyFour;

twentyFour.five = FE;
twentyFour.four = DS;
twentyFour.three = GD;
twentyFour.two = AI;
twentyFour.one = CS;
twentyFour.calculate();
FE = twentyFour.five;
DS = twentyFour.four;
GD = twentyFour.three;
AI = twentyFour.two;
CS = twentyFour.one;

//PRESENT THE SCORE

int list[6] = {FE, BE, DS, AI, CS,GD};
int first;
int second;
int last;

// sort the list

for(int i = 0; i < 3; ++i){
cout << list[i];
}

return 0;
}