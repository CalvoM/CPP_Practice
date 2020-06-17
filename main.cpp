#include "Quaternion.h"
#include "LinkedList.h"
int main(){
    Quaternion<int> q1;
     std::cin >> q1;
    Quaternion<int> q2;
     std::cin >> q2;
    q1 -= q2;
    std::cout << q1;
    NodeList<std::string> list;
    list.addToFront("Dear");
    list.addToFront("Sth");
    list.addToFront("Say");
    list.addToFront("You");
    list.addToFront("Did");
    list.append("Peace");
    list.insert(0, "Hey");
    list.insert(6, "Swrry");
    list.insert(1, "Ahem");
    list.insert(7, "Listen Up");
    if (list.is_empty()) {
      std::cout << "List is empty" << std::endl;
    } else {
      std::cout << "Not empty: List has " << list.length() << " members!"
                << std::endl;
    }
    std::cout << list;
}