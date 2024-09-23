#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int digitSum(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    int lb;
    cin>>lb;
    int ub;
    std::cin >> num;
    
    if (isPrime(num)) {
        int sum = digitSum(num);
        
        if (isPrime(sum)) {
            std::cout << "The number "<<num<<"and the sum of its digits are both prime." << std::endl;
        } else {
            std::cout << "The number is"<<num<<" prime, but the sum of its digits is not prime." << std::endl;
        }
    } else {
        std::cout << "The number is not prime." <<num<< std::endl;
    }
    
    return 0;
}