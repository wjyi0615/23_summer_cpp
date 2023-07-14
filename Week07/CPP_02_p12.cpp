#include <iostream>
int main() {
char str1[20];
char str2[] = "happy!";
std::cout << "Name: ";
std::cin >> str1;
std::cout << str1 << " is " << str2 << std::endl;
return 0;
}