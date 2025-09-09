#include<string>
#include<iostream>

long n, h, mm, ss;
int main() {
    std::cin >> n;
    h = int(n/3600);
    n = n%3600;
    mm = int(n/60);
    ss = n%60;
    std::cout <<h << ":";
    if (mm<10) std::cout<<'0';
    std::cout<< mm << ':';
    if (ss<10) std::cout<< '0';
    std::cout<< ss <<'\n';
}
