# Result

```

$ g++ -c -std=c++2b -pedantic -pthread -pedantic-errors -Wall -Wextra -ggdb ./src/main.cpp
mv *.o ./target/
$ g++ ./target/*.o -o ./target/main
./target/main

The sum of the two numbers is : 41
The sum of the two numbers is : 31
```
