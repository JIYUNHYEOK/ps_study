// 타일 장식물
// https://www.acmicpc.net/problem/13301
// 힌트
// 1. 타일의 크기는 피보나치수열을 이루고 있다.
// 2. "타일의 둘레 = 이전 타일의 둘레 + 새로 만들어진 타일의 크기 * 2" 의 점화식을 
//     이용하여 bottom-up의 다이나믹 프로그래밍을 이용한다.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> v(N + 1, 1);
    for (int i = 3; i <= N; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    long long answer = 4;
    for (int i = 2; i <= N; i++)
    {
        answer += v[i] * 2;
    }
    cout << answer << endl;
    return 0;
}