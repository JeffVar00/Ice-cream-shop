
#include "conFrutas.h"

conFrutas::conFrutas(baseHelado* base) : decoradorHelado(base) {
}

std::string conFrutas::descripcion() const {
    return decoradorHelado::descripcion() + "con frutas ";
}

double conFrutas::precio() const {
    return decoradorHelado::precio() + 150.0;
}
