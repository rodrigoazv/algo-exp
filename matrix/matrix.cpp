
#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, j, i;
	cin >> N;
	int A[N][N], B[N][N], C[N][N];

	for (i=0; i<N ; i++){
		for (j =0; j<N; j++){
			cin >> A[i][j];
		};
	};
	for (i=0; i<N ; i++){
		for (j =0; j<N; j++){
			cin >> B[i][j];
		};
	};
	for (i=0; i<N ; i++){
		for (j =0; j<N; j++){
			C[i][j] = A[i][j] + B[i][j];
		};
	};

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			cout << C[i][j] << " ";
		}
		cout<<endl;
	}
};

