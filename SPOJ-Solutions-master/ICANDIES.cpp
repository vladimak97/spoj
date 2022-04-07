/*
	nerdyninja
	ICANDIES
	adhoc

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<ll> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	int tt;
	scanf("%d", &tt);
	REP(qq, 0, tt){
		int n, i;
		scanf("%d", &n);
		int ans = 0;
        if(n%3==0) i=n-3;
        else if((n-1)%3==0) i=n-1;
        else if((n-2)%3==0) i=n-2;
        for(;i>=3;i-=3)
        {
            if((n-i)%5==0)
            {
                ans = 1;
                break;
            }
        }
        if(ans) printf("Case %d: %d\n",qq+1,i);
        else printf("Case %d: -1\n",qq+1);
	}
	return 0;
}