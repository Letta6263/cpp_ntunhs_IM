//HW3-2
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
    
    int count_of_zero = 0, count_of_one = 0, count_of_two = 0, count_of_three = 0;
    int count_of_four = 0, count_of_fives = 0, count_of_six = 0, count_of_sevent = 0;
    int count_of_enght = 0, count_of_nine = 0, count_of_ten = 0;

    int length = sizeof(a)/sizeof(int);
    for (int i = 0; i < length; i++){
        switch(a[i]){
            case 0: count_of_zero++;
                    break;
            case 1: count_of_one++;
                    break;
            case 2: count_of_two++;
                    break;            
            case 3: count_of_three++;
                    break;            
            case 4: count_of_four++;
                    break;            
            case 5: count_of_fives++;
                    break;            
            case 6: count_of_six++;
                    break;            
            case 7: count_of_sevent++;
                    break;            
            case 8: count_of_enght++;
                    break;            
            case 9: count_of_nine++;
                    break;            
            case 10: count_of_ten++;
                    break;
        }

    }
    std::cout << "The number 0 appears " << count_of_zero << " times in the array." << std::endl;    
    std::cout << "The number 1 appears " << count_of_one << " times in the array." << std::endl;
    std::cout << "The number 2 appears " << count_of_two << " times in the array." << std::endl;
    std::cout << "The number 3 appears " << count_of_three << " times in the array." << std::endl;
    std::cout << "The number 4 appears " << count_of_four << " times in the array." << std::endl;
    std::cout << "The number 5 appears " << count_of_fives << " times in the array." << std::endl;
    std::cout << "The number 6 appears " << count_of_six << " times in the array." << std::endl;
    std::cout << "The number 7 appears " << count_of_sevent << " times in the array." << std::endl;
    std::cout << "The number 8 appears " << count_of_enght << " times in the array." << std::endl;
    std::cout << "The number 9 appears " << count_of_nine << " times in the array." << std::endl;
    std::cout << "The number 10 appears " << count_of_ten << " times in the array." << std::endl;
    return 0;
}
