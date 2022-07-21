#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  string s1 = "nortihP";
  string:: reverse_iterator it;
  for(it=s1.rbegin(); it!=s1.rend();it++)
  {
    cout<<*it;
  }
//   cout << s1.capacity()<<" "<<s1.size() << endl;

  return 0;
}