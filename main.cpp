#include "Quaternion.h"
int main(){
    Quaternion<int> q1;
     std::cin >> q1;
    Quaternion<int> q2;
     std::cin >> q2;
    Quaternion<int> q3 = q1 * q2;
    std::cout << q3;
}