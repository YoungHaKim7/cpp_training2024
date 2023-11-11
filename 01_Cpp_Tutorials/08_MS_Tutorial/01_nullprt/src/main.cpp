#include <iostream>
// mcpp_nullptr_1.cpp
// compile with: /clr
class MyClass {
public:
   int i;
};

int main() {
   MyClass * pMyClass = nullptr;
   if ( pMyClass == nullptr)
      std::cout << "pMyClass == nullptr" << "\n";

   if ( pMyClass == 0)
      std::cout << "pMyClass == 0" << "\n";

   pMyClass = 0;
   if ( pMyClass == nullptr)
      std::cout << "pMyClass == nullptr" << "\n";

   if ( pMyClass == 0)
      std::cout << "pMyClass == 0" << "\n";
}