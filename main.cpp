#include "startup.h"

int main(int argc, char** argv) {
  StartupScreen startup;
  return startup.status();
}