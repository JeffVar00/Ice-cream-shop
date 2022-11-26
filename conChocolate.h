

#ifndef CON_CHOCOLATE_H
#define CON_CHOCOLATE_H

#include "decoradorHelado.h"

class conChocolate : public decoradorHelado {
public:
    conChocolate(baseHelado*);

    virtual std::string descripcion() const;
    virtual double precio() const;
};

#endif /* CON_CHOCOLATE_H */
