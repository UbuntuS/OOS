#ifndef _common_h_
#define _common_h_

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>

double GetTime()
{
  struct timeval t;
  assert( gettimeofday( &t, NULL ) == 0 );

  return ( double ) t.tv_sec + ( double ) t.tv_usec / 1e6;
}

void Spin( int secs ) //zadrzavanje vremena
{
  double t = GetTime();

  while ( ( GetTime() - t ) < ( double ) secs )
  {

    // ;//prosto vrti
  }
}

#endif
