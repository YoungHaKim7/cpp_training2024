#include <iostream>

class String {
   int len;
   char* str;
public:
   String() : len(0), str(nullptr) {}
   String(const char* str) : len(strlen(str)), str(new char[len + 1]) {
      strcpy(this->str, str);
   }
   String(const String& str) : len(str.len), str(new char[len + 1]) {
      strcpy(this->str, str.str);
   }
   ~String() {
      delete[] str;
   }

   String operator+(const String& str) const {
      String temp;
      temp.len = len + str.len;
      temp.str = new char[temp.len + 1];
      strcpy(temp.str, str.str);
      strcat(temp.str, this->str);
      return temp;
   }
   String& operator+=(const String& str) {
      len = len + str.len;
      char* temp = new char[len + 1];
      strcpy(temp, this->str);
      strcat(temp, str.str);
      delete[] this->str;
      this->str = temp;
      return *this;
   }

   bool operator==(const String& str) const {
      return strcmp(this->str, str.str) == 0;
   }

   friend std::ostream& operator<<(std::ostream& os, const String& str) {
      os << str.str << std::endl;
      return os;
   }

   friend std::istream& operator>>(std::istream& in, String& str) {
      in >> str.str;
      return in;
   }
};

int main() {
   
}