#include<iostream>
#include<ctime> 
int main(){
    int tries=0;
    int guess;
    srand(time(NULL));
    int rnum1=(rand()%100)+1;
    do{
        std::cout<<"enter your guess between 1-100: ";
        std::cin>>guess;
        tries++;
        if(guess>rnum1){
            std::cout<<"your guess is too high \n";

        }
        else if(guess<rnum1){
            std::cout<<"your guess is too low \n";
        }
        else{
            std::cout<<"congratulations you CORRECTLY Guessed the number in:  "<<tries<<std::endl;
        }
    }
    while(guess!=rnum1);
return 0;

}