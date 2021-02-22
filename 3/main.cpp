#include <iostream>

int count(int n, int k=3) {
    if ((n == 1 && k >= 1) || (n == 2 && k >= 2)) return n;
    if (n == 2 && k == 1) return k;
    if (k == 1) return 1;
    if (k > n) k = n;
    int num=0;
    for (int i=1; i <= k; i++){
        if (k>2) {
            num=count((n-i));
            for (int j=1; j <= k; j++) num+=count((n-j));
        }
        else num+=count((n-i));
    }
    return num;
}
int main() {
    int n, k;
    std::cin>>n;
    std::cout << std::endl;
    std::cout << count(n)<< std::endl;
    std::cin>>n>>k;
    std::cout << std::endl;
    std::cout << count(n,k)<< std::endl;
    return 0;
}

