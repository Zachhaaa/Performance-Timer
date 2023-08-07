#pragma once

/*
DOCUMENTATION:
This is a header only library.
This library is designed to measure code performance in a very simple maner as follows:

pt::Timer t1; // start timer
// code to be measured
double resultTime = t1.endTimer(PT_MILISEC); // end timer

The #defines below specify the units of the return value of Timer::endTimer.

Thats all there is to the library. 
*/


#include <chrono>

#define PT_NANOSEC 1.0e9
#define PT_MICROSEC 1.0e6
#define PT_MILISEC 1.0e3
#define PT_SEC 1.0
#define PT_MIN (1.0 / 60)
#define PT_HOUR (1.0 / 3600)
#define PT_DAY (1.0 / 86400)

namespace pt {
  class Timer {
    std::chrono::high_resolution_clock::time_point start, end;
  public:
    /// @brief Starts a timer instance and marks the start point using std::chrono::high_resolution_clock.
    Timer() {
      start = std::chrono::high_resolution_clock::now(); 
    }
    /// @brief Ends the timer and returns the time since the start marked by the constructor. 
    /// @param units Units of the return value. Specified with the following macros: PT_NANOSEC, PT_MICROSEC, PT_MILISEC,
    /// PT_SEC, PT_MIN, PT_HOUR, and PT_DAY.
    /// @return Returns the time in the units specified.
    inline double endTimer(float units = PT_SEC) {
      end = std::chrono::high_resolution_clock::now(); 
      return (std::chrono::duration<double, std::ratio<1, 1>>(end - start)).count() * units; 
    }
  };
}
