# Print.h
Simple abstraction of cout to quickly print something.

Adds the commands:
  void println(Printable T);
  void print(Printable T);
  void wprintln(WPrintable T);
  void wprint(WPrintable T);
  
These abstract cout, printing the parameter.  Uses a concept to check that it is printable, or wprintalbe.
