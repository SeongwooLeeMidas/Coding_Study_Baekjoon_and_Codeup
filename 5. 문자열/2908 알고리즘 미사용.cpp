#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // 문자열 A를 거꾸로 뒤집기
    string reversedA;
    for (int i = A.length() - 1; i >= 0; i--) {
        reversedA += A[i];
    }

    // 문자열 B를 거꾸로 뒤집기
    string reversedB;
    for (int i = B.length() - 1; i >= 0; i--) {
        reversedB += B[i];
    }

    // 뒤집어진 문자열을 정수로 변환
    int reversedAInt = stoi(reversedA);
    int reversedBInt = stoi(reversedB);

    // 두 정수 비교하여 큰 값을 출력
    cout << (reversedAInt > reversedBInt ? reversedAInt : reversedBInt) << endl;

    return 0;
}
