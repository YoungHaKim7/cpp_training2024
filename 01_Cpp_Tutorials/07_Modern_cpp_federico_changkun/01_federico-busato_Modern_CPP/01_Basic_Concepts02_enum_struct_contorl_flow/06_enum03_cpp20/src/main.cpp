#include <iostream>
enum Color { RED };
enum Fruit : int { APPLE };
enum class Device { PC };

int main() {
  const Color a2 = (Color)-1;     // ok
  constexpr Fruit a3 = (Fruit)-1; // ok
  constexpr Device a4 = (Device)-1;
}
// constexpr Color a1 = (Color) -1; compile error
