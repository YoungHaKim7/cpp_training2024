#include <cstdint>
#include <limits>

int main() {
  std::numeric_limits<int>::max();      // 2 ^31 - 1
  std::numeric_limits<uint16_t>::max(); // 65,535

  std::numeric_limits<int>::min();      // -2^31
  std::numeric_limits<unsigned>::min(); // -2^31

  return 0;
}
