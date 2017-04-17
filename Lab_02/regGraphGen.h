#ifndef regGraphGen_h
#define regGraphGen_h
#include "IncidenceMatrix.h"
#include "MyExceptions.h"

// funkcja tworz�ca graf regularny zwraca go je�li si� uda�o
IncidenceMatrix& regGraphGen(int vertex_counter, int degree);
// funkcja tworz�ca tablic� punkt�w
std::vector< int > getMatrixOfPoints(int, int);
// funkcja tworz�ca tablic� par punkt�w
std::vector< std::vector< int > > getMatrixOfPairs(int, int);
// funkcja sprawdzaj�ca czy stworzenie grafu jest mo�liwe
bool isCreatingGraphPossible(int, int);
// funkcja sprawdzaj�ca czy istnieje ju� taka para wierzcho�k�w, zwraca 0 gdy nie
bool isThisPairExist(int, int, std::vector< std::vector< int > >, int);
// funkcja sprawdzaj�ca czy nie zosta� tylko jeden wierzcho�ek
bool isOnlyOneVertex(std::vector< int >);

#endif // regGraphGen_h

