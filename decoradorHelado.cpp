
#include "decoradorHelado.h"

decoradorHelado::decoradorHelado(baseHelado* base) : _base(base) {
}

std::string decoradorHelado::descripcion() const {
    return _base->descripcion();
}

double decoradorHelado::precio() const {
    return _base->precio();
}
