#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
using namespace std;
int dat()
{
    return rand() % 10 + 1;
}

int main()
{
    int N;
    cout << "N=";
    cin >> N;
    vector<int> v(N);
    generate(v.begin(), v.end(), dat);
    set<int> s(v.begin(), v.end());
    cout << "Total different numbers=" << s.size() << endl << "They are: ";
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    system("pause");
    return 0;
}