#include <sys/time.h>
#include <stdlib.h>
#include "common.h"

int main( int argc, char **argv )
{

  if ( argc != 2 )
  {
    fprintf( stderr, "%s", "usage: ./mycpu <str>\n" );
    exit( 1 );
  }

  char *string = *( argv + 1 );

  while( 1 )
  {
    fprintf( stdout, "%s\n", string );
    // fflush( stdout );
    Spin( 5 );  //5 seconds
    // i++;
  }


  return 0;
}
