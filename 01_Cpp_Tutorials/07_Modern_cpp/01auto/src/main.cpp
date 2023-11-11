#include <iostream>

int main(){

	auto var1 {12};
  auto var2 {13.0};
  auto var3 {14.0f};
  auto var4 {15.0l};
  auto var5 {'e'};
  
  //int modifier suffixes
  auto var6 { 123u}; // unsigned
  auto var7 { 123ul}; //unsigned long
  auto var8 { 123ll}; // long long

	std::cout << "         C++       vs      Rust " << "\n";
  std::cout << "var1 occupies(int)         i32  : " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "var2 occupies(double)      f64  : " << sizeof(var2) << " bytes" << std::endl;
  std::cout << "var3 occupies(float)       f32  : " << sizeof(var3) << " bytes" << std::endl;
  std::cout << "var4 occupies(long double) f128 : " << sizeof(var4) << " bytes" << std::endl;
  std::cout << "var5 occupies(char)        char : " << sizeof(var5) << " bytes" << std::endl;
  std::cout << "var6 occupies(unsigned int) u32 : " << sizeof(var6) << " bytes" << std::endl;
  std::cout << "var7 occupies(unsigned long)u64 : " << sizeof(var7) << " bytes" << std::endl;
  std::cout << "var8 occupies(long long)    i64 : " << sizeof(var8) << " bytes" << std::endl;
 
  return 0;
}

// https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170
