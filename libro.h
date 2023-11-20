#ifndef LIBRO_H
#define LIBRO_H

#include "documento.h"

class Libro : public Documento
{
private:
    string titulo;
    int paginas;
public:
    Libro();
    Libro(int NumAutores,string publicacion,string titulo);
    int getPaginas() const;
    void setPaginas(int newPaginas);
    string obtenerReferencia();
};

#endif // LIBRO_H
