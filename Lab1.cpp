#include <iostream>
#include <string>

// int kkk = 0; 
using namespace std;
double dec_to_oct(const double num){
    double newNum = num;
    double resNum = 0;
    int k = 10;

    while (newNum != 0){
        // ++kkk;
        newNum *= 8;
        
        resNum += (double)((int)(newNum))/k;

        newNum = newNum-(int)(newNum); 
        k *= 10;
    }
    return resNum;
}

int main(){
    double num;

    cin >> num;

    num = dec_to_oct(num); 


    cout << "Answer: " << num << "\n";
}