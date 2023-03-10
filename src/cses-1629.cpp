#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  std::pair<int, int> a[n];

  for (auto &x : a) {
    std::cin >> x.second >> x.first;
  }

  std::sort(a, a + n);

  auto current = a;
  int ans = 1;

  for (auto i = a + 1; i != a + n; ++i) {
    if (i->second >= current->first) {
      current = i;
      ans++;
    }
  }

  std::cout << ans << '\n';
}
