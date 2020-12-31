#include <vector>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
    std::size_t n = matrix.size();

    for (std::size_t i=0u; i<n; i++) {
      for (std::size_t j=i; j<n; j++) {
        std::swap(matrix[i][j], matrix[j][i]);
      }
    }
    for (std::size_t i=0u; i<n; i++) {
      for (std::size_t j=0u; j<n/2; j++) {
        std::swap(matrix[i][j],matrix[i][n - j - 1]);
      }
    }
  }
};
