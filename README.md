This is a header only library.

This library is designed to measure code performance in a very simple maner as follows:
```
pt::Timer t1; // start timer
// code to be measured
double resultTime = t1.endTimer(PT_MILISEC); // end timer
```

The #defines below specify the units of the return value of Timer::endTimer.

Thats all there is to the library. 