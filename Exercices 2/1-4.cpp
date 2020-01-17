// #include <iostream>
//
// using std::cin;
// using std::cout;
// 
// int main() {
// 
//      char c;
//      cin >> c;
//      cout << c;
//      
//      return 0; 
// }
//
// How do we write the previous code if we don't use std standards

#include <stdio.h>

int main() {
    char c;

    scanf("%c", &c);
    printf("%c", c);

    return 0;
}
