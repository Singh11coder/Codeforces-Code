#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	forn(_, t){
		int n, m;
		scanf("%d%d", &n, &m);
		int svx = 1, svy = 1;
		for (int x = 1; x <= n; ++x){
			for (int y = 1; y <= m; ++y){
				bool ok = true;
				for (int dx : {-2, -1, 1, 2}){
					for (int dy : {-2, -1, 1, 2}){
						if (abs(dx * dy) != 2) continue;
						if (1 <= x + dx && x + dx <= n && 1 <= y + dy && y + dy <= m)
							ok = false;
					}
				}
				if (ok){
					svx = x;
					svy = y;
				}
			}
		}
		printf("%d %d\n", svx, svy);
	}
}
