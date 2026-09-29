#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>




int main();

int jet = std::rand() % 6 + 1;
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
 // 1. Le dé
int lancer_de(int faces);
int de = 6 ;
{
    for (int jet =1; jet <=10; jet++)
    {
        std::cout << "{}"<<jet<<"\n";
    }
}
// 2. Le coup
int calculer_degat(int attaque, int defense);
{
    int degat = attaque + de - defense;

{
if (degat < 0)
    {
    degat = 0;
    }
return degat;
}
    // 3. Boucle de combat

    // L'orc
    int pv_orc = 60;
    int attaque_orc = 14;
    int defense_orc = 4;

    // Le troll
    int pv_troll = 80;
    int attaque_troll = 11;
    int defense_troll = 6;

    std::cout << "=== Tour 1 ===\n";
    int degats = attaque_orc - defense_troll
        pv_troll = pv_troll - degats;

    //attaque orc >> le troll : 11 degat -> Troll : 69 PV
   // Le troll frappe l'orc : 10 degats -> Orc : 50 PV


    return 0;
}