#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<string> generateParenthesis(int n) {
    // FIXME
    return {};
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
