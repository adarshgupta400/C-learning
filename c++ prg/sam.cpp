#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a,&b,&c,&d,&e);
    printf("%c\n %ld\n %c\n ",a,b,c);
    std::cout << std::fixed << std::setprecision(3) << d<<endl;
    std::cout << std::fixed << std::setprecision(9) << e<<endl;
    return 0;
}