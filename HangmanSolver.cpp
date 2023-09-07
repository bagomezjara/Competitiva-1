#include <bits/stdc++.h>

using namespace std;

//este codigo no es de mi autoria, este codigo le pertenece a tourist en la pagina de topcoder

class HangmanSolver {// se crea la clase HangmanSolver
public:// se define en publico
  string guess(string, string, vector <string>);// se define la funcion guess de la clase
};

string HangmanSolver::guess(string lg, string revealed, vector <string> possibleAnswers) {// funcion guess
  string ret = "";// se crea un string ret vacio
  for (string s : possibleAnswers) {// se inicia un ciclo for que itera desde 0 hasta la cantidad de string s que hay en possibleAnswers
    string w = "";// se crea un string vacio w
    for (char c : s) {// se inicia un ciclo for que itera desde0 hasta la cantidad de caracteres c en el string s
      if (lg.find(c) != string::npos) {// condicion if que se cumple en el caso de que la funcion find del caracter c en el string lg, sea distinto de la ultima posicion del string
        w += c;// se concatena el caracter c al string w
      } else {// en caso de no cumplirse la condicion anterior anvanza
        w += "_";// se concatena el caracter "_" a el string w
      }
    }
    if (w == revealed) {// condicion if que se cumple si el string w es igual al string revealed
      if (ret == "") {// condicion if que se cumple si el string ret es igual a vacio
        ret = s;// se guarda el string s en el string ret
      } else {// en caso de no cumplirse la condicion anterior
        ret = "";// se define el string ret como vacio
        break;// se rompe el ciclo for
      }
    }
  }
  return ret;// se retorna el string ret
}
