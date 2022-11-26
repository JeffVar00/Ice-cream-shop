
#include "conChocolate.h"

conChocolate::conChocolate(baseHelado* base) : decoradorHelado(base) {
}

std::string conChocolate::descripcion() const {
    return decoradorHelado::descripcion() + "con chocolate ";
}

double conChocolate::precio() const {
    return decoradorHelado::precio() + 75.0;
}
