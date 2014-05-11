#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "game.h"
#include "object.h"


int main(int argc, char *argv[])
{
  // simple way to setup the randomness
  srand(time(NULL));

  // make our map to work with
  Map *game = NEW(Map, "The mansion of the old witch");

  printf("You enter the ");
  game->location->_(describe)(game->location);

  while(process_input(game)) {
  }

  return 0;
}
