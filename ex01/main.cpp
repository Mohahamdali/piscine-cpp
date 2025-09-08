#include "Zombie.hpp"




int main ()
{
   Zombie *data;
   data = newZombie("mhamdali");
   data->announce();
   randomChump("fang yuan");

   delete(data);

}