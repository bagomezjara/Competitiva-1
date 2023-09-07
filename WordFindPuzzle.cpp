#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cctype>
#include <cmath>
#include <list>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

//Este codigo no es de mi autoria, este codigo le pertenece a petar1 en la pagina de topcoder

class WordFindPuzzle {// se crea la clase WordFindPuzzle
 public: // se define en publico
  int solveWordFindPuzzle(vector <string> words, vector <string> board)// se define la funcion solveWordFindPuzzle en la clase
  {
   int ans = 0;// se crea una variable entera inicializada en 0
   for (int i = 0; i < words.size(); i++)// se inicia un ciclo for que itera desde 0 hasta el tamaño de el parametro words
    ans += perfect(words[i], board);// se asigna el valor de ans, como la suma de ans mas el resultado de la funcion perfect, con parametros la posicion i de words y el parametro board
   return ans;
  }
  bool perfect(string word, vector <string> &board)// se define la funcion perfect en la clase
  {
   bool hor = false, ver = false;// se crean dos variables booleanas, ambas inicializadas en falso

   //se revisa si esta la palabra en horizontal

   for (int i = 0; i < board.size(); i++)// se inicia un ciclo for que itera desde 0 hasta el tamaño del parametro board
   {
    string s = board[i];// se crea un string y se le va el valor de la posicion i del parametro board
    if (s.find(word) != -1)// condicion if que se cumple en el caso de que el valor de la llamada de la funcion find del string word sobre el string s, sea distinto a -1
    {
     hor = true;// se cambia el valor booleando de hor a verdadero
     break;// se rompe el ciclo for
    }
    reverse(s.begin(), s.end());// se llama a la funcion reverse, y s queda como el string revertido
    if (s.find(word) != -1)// condicion if que se cumple en el caso de que el valor de la llamada de la funcion find del string word sobre el string s, sea distinto a -1
    {
     hor = true;// se cambia el valor booleando de hor a verdadero
     break;// se rompe el ciclo for
    }
   }

   //se revisa si la palabra esta en vertical

   for (int i = 0; i < board[0].size(); i++)// se inicia un ciclo for que itera desde 0 hasta el tamaño del string en la posicion 0 de board
   {
    string s = "";// se crea un string vacio
    for (int j = 0; j < board.size(); j++)// se inicia un ciclo for que itera desde 0 hasta el tamaño del parametro board
     s += board[j][i];// se añade el caracter en la posicion i del string el la posicion j del parametro board al string s
    if (s.find(word) != -1)// condicion if que se cumple en el caso de que el valor de la llamada de la funcion find del string word sobre el string s, sea distinto a -1
    {
     ver = true;// se cambia el valor booleando de ver a verdadero
     break;// se rompe el ciclo for
    }
    reverse(s.begin(), s.end());// se llama a la funcion reverse, y s queda como el string revertido
    if (s.find(word) != -1)// se inicia un ciclo for que itera desde 0 hasta el tamaño del parametro board
    {
     ver = true;// se cambia el valor booleando de ver a verdadero
     break;// se rompe el ciclo for
    }
   }
   return hor && ver;// se retorna el valor booleano verdadero, solo si ambos booleanos hor y ver son verdaderos
  }
};

