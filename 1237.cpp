#include <iostream>
using namespace std;

int main() {
 string s1,s2;
 getline(cin,s1);
 while(getline(cin,s2)){
  int m = s1.length();
  int n = s2.length();
  //m=m-1;
  //n=n-1;

  int LCS_table[m + 1][n + 1];
  int result=0;

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (s1[i - 1] == s2[j - 1]){
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
        result=max(result,LCS_table[i][j]);
    }
      else{
        LCS_table[i][j] = 0;
    }
    }
  }

cout<<result<<endl;
   getline(cin,s1);
 }
  return 0;
}



