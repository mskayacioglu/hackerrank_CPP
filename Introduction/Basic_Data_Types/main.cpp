#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    long int long_num;
    char ch;
    float real_num;
    double long_real_value;
    
    scanf("%d %ld %c %f %lf", &num, &long_num, &ch, &real_num, &long_real_value);   
    printf("%d\n%ld\n%c\n%f\n%lf", num, long_num, ch, real_num, long_real_value);  
    
    return 0;
}
