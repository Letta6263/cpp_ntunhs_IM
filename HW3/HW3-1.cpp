//HW3-1
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int a[100];
    srand(time(0));
    
    for (int i = 0; i < 100; i++){
        a[i] = rand() %11;
    }
    
    int count_of_fives = 0;
    int length = sizeof(a)/sizeof(int);
    for (int i = 0; i< length; i++){
        if(a[i] == 5){
            count_of_fives = count_of_fives + 1;
        }else{
            count_of_fives = count_of_fives;    
        }
    }
    
    std::cout << "The number 5 appears " << count_of_fives << " times in the array." << std::endl;
    return 0;
}
