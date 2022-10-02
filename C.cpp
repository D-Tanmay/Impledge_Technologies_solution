#include <bits/stdc++.h>
using namespace std;

unordered_set<string> mp; 

bool isCompoundWord(int n, string &str) {
  vector<bool> dp(n);
  for(int i = 0 ; i < n ; ++i) {
    for(int j = (i == n - 1 ? 1 : 0) ; j <= i ; ++j) {
      if (j && dp[j-1] != 1) continue;
      string sub = str.substr(j, i-j+1);
      if (mp.count(sub)) {
        dp[i] = 1;
      }
    }
  }
  return dp[n-1];
}


void solve() {

}

int main() {
  clock_t tStart = clock();

  string input ;
  
  while (cin >> input) {
    mp.insert(input);
  }

  string longestCompoundWord = "";
  string secondLongestCompoundWord = "";

  for(auto str: mp) {

    int n = str.size() ;
    
    if (isCompoundWord(n, str)) {
      if (n >= longestCompoundWord.length()) {
        secondLongestCompoundWord = longestCompoundWord;
        longestCompoundWord = str;
      } else if (n > secondLongestCompoundWord.length()) {
        secondLongestCompoundWord = str;
      }
    }
  }

  cout << "Longest Compound Word: " << longestCompoundWord << "\n"; 
  cout << "Second Longest Compound Word: " << secondLongestCompoundWord << "\n";
  printf("Time taken: %.4fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  
  return 0;
}
