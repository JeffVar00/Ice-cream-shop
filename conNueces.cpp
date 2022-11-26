
#include "conNueces.h"

conNueces::conNueces(baseHelado* base) : decoradorHelado(base) {
}

std::string conNueces::descripcion() const {
    return decoradorHelado::descripcion() + "con nueces ";
}

double conNueces::precio() const {
    return decoradorHelado::precio() + 100.0;
}
