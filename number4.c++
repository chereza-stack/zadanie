#include<string>
#include<iostream>

long v, t, s;
int main() {
    std::cin >> v >> t;
    s = v*t;
    std::cout <<s%109  <<"\n";
}
