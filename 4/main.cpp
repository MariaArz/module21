#include <iostream>

void evendigits(long long a, int& ans){
    if (a!=0) {
        evendigits((a/10),(ans));
        if (a%10%2==0) ans+=1;
    }
}
int main() {
    int ans=0;
    evendigits(923372036854775806, ans);
    std::cout<<ans;
    return 0;
}
