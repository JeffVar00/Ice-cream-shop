
#include <sstream>
#include "baseHelado.h"
using std::string;
using std::stringstream;

string baseHelado::toString() const {
    stringstream r;
    r << descripcion() << ": " << precio();
    return r.str();
}