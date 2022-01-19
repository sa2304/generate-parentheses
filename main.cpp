#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
  void generateInternal(string &s, int opened, int closed, int max_opened, vector<string> &result) {
    if (s.length() == max_opened * 2) {
      result.push_back(s);
      return;
    }

    if (opened < max_opened) {
      s.push_back('(');
      generateInternal(s, opened + 1, closed, max_opened, result);
      s.pop_back();
    }
    if (closed < opened) {
      s.push_back(')');
      generateInternal(s, opened, closed + 1, max_opened, result);
      s.pop_back();
    }
  }
 public:
  vector<string> generateParenthesis(int n) {
    string s{"("s};
    int opened = 1;
    vector<string> result;
    generateInternal(s, opened, 0, n, result);

    return result;
  }
};

void TestGenerateParenthesis() {
  Solution s;
  {
    vector<string> expected{"((()))"s, "(()())"s, "(())()"s, "()(())"s, "()()()"s};
    assert(expected == s.generateParenthesis(3));
  }
  {
    vector<string> expected{"()"s};
    assert(expected == s.generateParenthesis(1));
  }
}

int main() {
  TestGenerateParenthesis();
  std::cout << "Ok!" << std::endl;
  return 0;
}
