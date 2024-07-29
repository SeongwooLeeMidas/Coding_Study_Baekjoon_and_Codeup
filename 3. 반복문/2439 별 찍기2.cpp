#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// for문은 항상 알고리즘 생각이 전부
	// 우선 행을 돌려야 하고, 이걸 i라고 정함
	for (int i = 1; i <= n; i++)

		// j를 돌리는데 n이 5라고 가정, 공백이 4,3,2,1,0인데 행은 1,2,3,4,5니까 상관관계 찾으면
		// 5-i 하면 딱 맞음. 근데 n을 써야하니까 n-i까지 j를 돌려줘야한다
	{
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		// 공백 출력 다음에 *을 출력해줘야한다. 상관관계 파악이 전부. 행과 같이 올라감
		// 5라고 쓰면 안되고 n을 써야한다. 여기선 n도 나올 필요 없이 i로 하고 돌리면 된다.
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		// 돌리고 줄바꿈 필수
		cout << "\n";
	}

	return 0;
}