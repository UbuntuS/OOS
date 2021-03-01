#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //getpid
#include "common.h"

int main( int argc, char **argv )
{
  if ( argc != 2 )
  {
    printf( "usage ./mymem <val>\n" );
    exit( -1 );
  }

  int *p = ( int * ) malloc( sizeof( int ) );

  printf("[ %d ] pointer P at address: %p points to address: %p\n", ( int )getpid(), &p, p ); //getpid vraca ID procesa

  *p = atoi( *( argv + 1 ) );

  while ( 1 )
  {
    printf("val: %d\n", *p );
    ( *p )++;
    Spin( 1 );
  }


  exit( 0 );

  return 0;
}
  //pri kreiranju radi iz iste virtuelne adrese. pa su adrese pri izvrsavanju koda iste
