// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int i,status = 0;
void scoreRandom(){
    i = rand()%9 + 1;
}
string score;
int main()
{
    string x;
    srand(time(0));
    do{
         cout << "Press Enter 3 times to reveal your future.";
         cin.get();
         cin.get();
         cin.get();
         scoreRandom();
         if(i==1) score = "A";
         else if(i==2) score = "B+";
         else if(i==3) score = "B";
         else if(i==4) score = "C+";
         else if(i==5) score = "C";
         else if(i==6) score = "D+";
         else if(i==7) score = "D";
         else if(i==8) score = "F";
         else score = "W";
         cout << "You will get " << score << " in this 261102.";
         status++;
    }while(status != 1);
    return 0;
}