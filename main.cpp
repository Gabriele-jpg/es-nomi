#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    const char* studenti[] = {
        "1. Acierno Vito",
        "2. Alfano Andrea",
        "3. Attrotto Giovanni Pio",
        "4. Baroni Andrea",
        "5. Belletti Davide",
        "6. Cagnacci Dario",
        "7. Chafqi Mohammed",
        "8. Decataldo Samuele",
        "9. Di Donna Raffaele",
        "10. Dioguardi Gabriele",
        "11. El Jihad Imane",
        "12. Ezziymy Rayane",
        "13. Ferrari Luca",
        "14. Lotierzo Gabriele",
        "15. Martinelli Mattia",
        "16. Niscio Paolo",
        "17. Restino Marco",
        "18. Rima Lorenzo",
        "19. Siwek Kamil",
        "20. Tarasco Alessandro",
        "21. Tramontana Ernesto",
        "22. Turci Luca",
        "23. Ventura Federico",
        "24. Vicini Emilio Ruggero",
        "25. Vicini Lorenzo",
        "26. Wang Yi Nicky",
        "27. Zarra Matteo"
    };

    srand(time(nullptr));
    int r = rand() % 27;
    cout << studenti[r];
}
