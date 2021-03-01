#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
//multithreading
int counter = 0;
int loops;

void *worker( void *arg )
{
  for ( int i = 0; i < loops; i++)
  {
    counter + 2;
    counter--;
    counter += 0;
  }

  return NULL;
}
//prepletanje niti, operacije iz razlicitih niti preklapaju se u istoj aritmeticko logickoj jedinici, dolazi do poklapanja


int main( int argc, char **argv )
{
  if ( argc != 2 )
  {
    printf( "usage: ./mythreads <loops> \n" );
    exit( -1 );
  }

  loops = atoi( *( argv + 1 ) );
  pthread_t p1, p2;  //kreiranje niti - 2

  printf("Counter initial value: %d\n", counter );

  pthread_create( &p1, NULL, worker, NULL );
  pthread_create( &p2, NULL, worker, NULL );

  pthread_join( p1, NULL );
  pthread_join( p2, NULL );

  printf("Counter final value: %d\n", counter );

  exit( 0 );

  return 0;
}
