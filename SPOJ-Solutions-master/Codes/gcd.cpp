#include <iostream>
using namespace std;
#define ll long long
int mod(char s[], int divider){
    int r = 0;
    for(int i = 0 ;s[i] ; i++){
        r = r*10 + s[i] - 48;
        r = r % divider;
    }
    return r;
}
int gcd(int a , int b){
    return b == 0 ? a : gcd(b , a%b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        char b[259];
        scanf("%d %s",&a , b);
        if(a == 0){
            printf("%s\n" , b);
            continue;
        }
        printf("%d\n", gcd(a , mod(b , a)));
    }
    return 0;
}
