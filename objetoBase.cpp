
#include "objetoBase.h"

objetoBase::~objetoBase() {
}

std::ostream& operator<<(std::ostream &salida, const objetoBase &obj) {
    salida << obj.toString();
    return salida;
}
