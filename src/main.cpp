#include <functional>
#include <iostream>

#include <spdlog/spdlog.h>


#include <docopt/docopt.h>

#include <iostream>

static constexpr auto USAGE =
  R"(Naval Fate.

    Usage:
          naval_fate ship new <name>...
          naval_fate ship <name> move <x> <y> [--speed=<kn>]
          naval_fate ship shoot <x> <y>
          naval_fate mine (set|remove) <x> <y> [--moored | --drifting]
          naval_fate (-h | --help)
          naval_fate --version
 Options:
          -h --help     Show this screen.
          --version     Show version.
          --speed=<kn>  Speed in knots [default: 10].
          --moored      Moored (anchored) mine.
          --drifting    Drifting mine.
)";

int f() {
  int i;
  int total = 0;
  // Infinite loop to trigger cpp/constant-comparison: https://lgtm.com/rules/2154840804/
  for (i = 0; i < 10; i = i+1) {  // BAD: comparison is always true, because i <= 5.
    i = i % 5;
    total += i;
  }
  return total;
}

// known violation of https://lgtm.com/rules/2160310550/
int main(int argc, const char **argv)
{
  printf("%s\n", 42); //printf will treat 42 as a char*, will most likely segfault
  return 0;
}
