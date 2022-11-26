

#ifndef CON_FRUTAS_H
#define CON_FRUTAS_H

#include "decoradorHelado.h"

class conFrutas : public decoradorHelado {
public:
    conFrutas(baseHelado*);

    virtual std::string descripcion() const;
    virtual double precio() const;
};

#endif /* CON_FRUTAS_H */
