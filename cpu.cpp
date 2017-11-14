#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h> // usleep

#include "cpu.h"

uint8_t get_cpu_count()
{
  return sysconf( _SC_NPROCESSORS_ONLN );
}

int main(){
  uint8_t cpu_count=get_cpu_count();
  std::cout << "hi" << unsigned(cpu_count);
  return 0;
}
