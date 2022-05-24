#include <chrono>
#include <iomanip>
#include <iostream>
int main ()
{

  using sc = std::chrono::system_clock;
  auto tm = sc::to_time_t(sc::now());

  std::cout << std::put_time(std::localtime(&tm), "formatted time: %Y-%m-%dT%X%z\n");

  std::cout << "just the offset: " << std::put_time(std::localtime(&tm), "%z\n");

}

int getDate ()
{
  return 0;
}