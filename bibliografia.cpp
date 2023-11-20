#include "bibliografia.h"


Bibliografia::Bibliografia()
{

}

bool Bibliografia::agregarLibro()
{
        int numAutores;
        string nombreAutor;
        string publicacion;
        string titulo;
        int numPaginas;




        cout<<"ingrese el numero de autores: ";
        cin>>numAutores;
        cout<<"ingrese la publicacion: ";
        getline(cin>>ws,publicacion);
        cout<<"ingrese el titulo: ";
        getline(cin>>ws,titulo);
        cout<<"ingrese el numero de paginas: ";
        cin>>numPaginas;




        Libro* lbr = new Libro(numAutores,publicacion,titulo);
           lbr->setPaginas(numPaginas);
        for (int i=0;i<numAutores;i++){
            cout<<"ingrese el nombre del autor: ";
            getline(cin>>ws,nombreAutor);
            lbr->agregarAutor(nombreAutor);
        }

        referencias.push_back(lbr);









    return true;
}

bool Bibliografia::agregarArticulo()
{
    int numAutores;
    string nombreAutor;
    string publicacion;
    string revista;
    string journal;


    cout<<"ingrese el numero de autores: ";
    cin>>numAutores;
    cout<<"ingrese el nombre de la publicacion: ";
    getline(cin>>ws,publicacion);
    cout<<"ingrese el nombre de la revista: ";
    getline(cin>>ws,revista);
    cout<<"ingrese (si) si se ha ingresando al journal caso contrario envie cualquier otro mensaje: ";
    cin>>journal;



     Articulo* art = new Articulo(numAutores,publicacion,revista);

     if(journal=="si"){
         art->setJournal(true);
     }else{
         art->setJournal(false);
     }


    for (int i=0;i<numAutores;i++){
        cout<<"ingrese el nombre del autor: ";
        getline(cin>>ws,nombreAutor);
        art->agregarAutor(nombreAutor);
    }




    referencias.push_back(art);



    return true;
}

void Bibliografia::imprimirReferencias()
{
    for(int i=0;i<referencias.size();i++){
        cout<<referencias[i]->obtenerReferencia();
    }
}


