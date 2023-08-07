This is a header only library.

This library is designed to measure code performance in a very simple maner as follows:
```
pt::Timer t1; // start timer
// code to be measured
double resultTime = t1.endTimer(PT_MILISEC); // end timer
```

The #defines in the header file specify the units to be returned for Timer::endTimer().

Thats all there is to the library. 
