#ifndef PLATFORM_H
#define PLATFORM_H

class Platform {
public:
  int refresh_time;
  double loadavg[3];
  utsname info;

public:
  Platform();

public:
  void sleep();
  void update();
  void print();
};

extern Platform platform;

#endif