#include <iostream>
int count(int n){
    if (n==1 || n==2) return n;
    if (n==3) return  n+1;
    return count((n-1))+count((n-2))+count((n-3));
}
int main() {
    int n;
    std::cin>>n;
    std::cout << std::endl;
    std::cout << count(n)<< std::endl;
    return 0;
}
