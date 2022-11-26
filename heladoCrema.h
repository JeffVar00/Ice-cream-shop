
#ifndef HELADO_CREMA_H
#define HELADO_CREMA_H

#include "baseHelado.h"

class heladoCrema : public baseHelado {
public:
    virtual std::string descripcion() const;
    virtual double precio() const;
};

#endif /* HELADO_CREMA_H */
