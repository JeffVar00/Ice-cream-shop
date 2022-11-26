
#ifndef CON_NUECES_H
#define CON_NUECES_H

#include "decoradorHelado.h"

class conNueces : public decoradorHelado {
public:
    conNueces(baseHelado*);

    virtual std::string descripcion() const;
    virtual double precio() const;
};

#endif /* CON_NUECES_H */
