#include <iostream>
#include <thread>
#include <vector>

void DoSomethingBad() {
  while (true)
    std::cout << 1 / (rand() % 12) << std::endl;
}

int main() {
  unsigned int num_threads = std::thread::hardware_concurrency();
  std::vector<std::thread> threads;
  std::cout << "Running with " << num_threads << " threads." << std::endl;
  for (int i = 0; i < num_threads; ++i)
    threads.push_back(std::thread(DoSomethingBad));
  for (auto &&th : threads)
    th.join();
  return 0;
}