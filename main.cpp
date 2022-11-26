
#include <cstdlib>
#include <iostream>
using namespace std;

#include "helados.h"

int main(int, char**) {

    baseHelado* h1 = new heladoCrema();
    baseHelado* h2 = new heladoYogurt();

    cout << *h1 << endl;
    cout << *h2 << endl;
    cout << endl;

    cout << *(new conNueces(h1)) << endl;
    cout << *(new conNueces(h2)) << endl;
    cout << endl;

    cout << *(new conFrutas(h1)) << endl;
    cout << *(new conNueces(new conFrutas(h2))) << endl;
    cout << endl;

    // Es posible crear hasta 16 tipos diferentes de helado
    // a partir de 2 tipos básicos y 3 decoradores.
    // Cada helado tiene un precio que depende de los ingredientes.

    int tipo = 0;

    cout << ++tipo << "-> " << *(new heladoCrema()) << endl;
    cout << ++tipo << "-> " << *(new conFrutas(new heladoCrema())) << endl;
    cout << ++tipo << "-> " << *(new conNueces(new heladoCrema())) << endl;
    cout << ++tipo << "-> " << *(new conNueces(new conFrutas(new heladoCrema()))) << endl;

    cout << ++tipo << "-> " << *(new conChocolate(new heladoCrema())) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conFrutas(new heladoCrema()))) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conNueces(new heladoCrema()))) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conNueces(new conFrutas(new heladoCrema())))) << endl;

    cout << ++tipo << "-> " << *(new heladoYogurt()) << endl;
    cout << ++tipo << "-> " << *(new conFrutas(new heladoYogurt())) << endl;
    cout << ++tipo << "-> " << *(new conNueces(new heladoYogurt())) << endl;
    cout << ++tipo << "-> " << *(new conNueces(new conFrutas(new heladoYogurt()))) << endl;

    cout << ++tipo << "-> " << *(new conChocolate(new heladoYogurt())) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conFrutas(new heladoYogurt()))) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conNueces(new heladoYogurt()))) << endl;
    cout << ++tipo << "-> " << *(new conChocolate(new conNueces(new conFrutas(new heladoYogurt())))) << endl;
    cout << endl;

    // Es posible crear tipos adicionales de helado combinando varias
    // veces el mismo ingrediente.

    cout << *(new conFrutas(new conFrutas(new heladoCrema()))) << endl;
    cout << *(new conChocolate(new conNueces(new conNueces(new heladoYogurt())))) << endl;
    cout << endl;

    cout << "Un helado con muchas nueces..." << endl;

    baseHelado* h3 = new heladoCrema();
    for (int i = 0; i < 4; i++) {

        // Le agregamos nueces a nuestro helado una y otra vez..

        h3 = new conNueces(h3);
        cout << *h3 << endl;
    }

    cout << endl;

    delete h1;
    delete h2;

    return 0;
}

