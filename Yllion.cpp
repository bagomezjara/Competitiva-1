#include <bits/stdc++.h>

using namespace std;

//Este codigo no es de mi autoria, este codigo le pertenece a su autor Atrues

typedef long long ll;// se define que todas las variables que no tengan un tipo de dato definido, sean de tipo long long

map<string, int> mp;// se crea un map de string entero de manera global
string pm[20];// se crea de manera global un vector de strings de tamaño 20

class Yllion{// se crea la calse Yllion
  public:// se define como publico
  string getPower(string fi, string se){// se define la funcion getPower
    mp["one"] = 0, pm[0] = "one";// se define el asocia el string "one" en el map como 0, y se guarde el string "one" en la posicion 0 de pm
    mp["ten"] = 1, pm[1] = "ten";// se define el asocia el string "ten" en el map como 1, y se guarde el string "ten" en la posicion 1 de pm
    mp["hundred"] = 2, pm[2] = "hundred";// se define el asocia el string "hundred" en el map como 2, y se guarde el string "hundred" en la posicion 2 de pm
    mp["myriad"] = 4, pm[3] = "myriad";// se define el asocia el string "myriad" en el map como 4, y se guarde el string "myriad" en la posicion 3 de pm
    mp["myllion"] = 8, pm[4] = "myllion";// se define el asocia el string "myllion" en el map como 8, y se guarde el string "myllion" en la posicion 4 de pm
    mp["byllion"] = 16, pm[5] = "byllion";// se define el asocia el string "byllion" en el map como 16, y se guarde el string "byllion" en la posicion 5 de pm
    mp["tryllion"] = 32, pm[6] = "tryllion";// se define el asocia el string "tryllion" en el map como 32, y se guarde el string "tryllion" en la posicion 6 de pm
    mp["quadryllion"] = 64, pm[7] = "quadryllion";// se define el asocia el string "quadryllion" en el map como 64, y se guarde el string "quadryllion" en la posicion 7 de pm
    mp["quintyllion"] = 128, pm[8] = "quintyllion";// se define el asocia el string "quintyllion" en el map como 128, y se guarde el string "quintyllion" en la posicion 8 de pm
    mp["sextyllion"] = 256, pm[9] = "sextyllion";// se define el asocia el string "sextyllion" en el map como 256, y se guarde el string "sextyllion" en la posicion 9 de pm
    mp["septyllion"] = 512, pm[10] = "septyllion";// se define el asocia el string "septyllion" en el map como 512, y se guarde el string "septyllion" en la posicion 10 de pm
    mp["octyllion"] = 1024, pm[11] = "octyllion";// se define el asocia el string "octyllion" en el map como 1024, y se guarde el string "octyllion" en la posicion 11 de pm
    mp["nonyllion"] = 2048, pm[12] = "nonyllion";// se define el asocia el string "nonyllion" en el map como 2048, y se guarde el string "nonyllion" en la posicion 12 de pm
    mp["decyllion"] = 4096, pm[13] = "decyllion";// se define el asocia el string "decyllion" en el map como 4096, y se guarde el string "decyllion" en la posicion 13 de pm

    fi += ' ';// se le agrega al string fi un espacio
    se += ' ';// se le agrega al string se un espacio
    string tmp;// se crea un string tmp
    int t1 = 0;// se crea una variable entera t1 inicializada en 0
    for (int i = 0; i < fi.size(); i++){// se inicia un ciclo for que itera desde 0 hasta el tamaño del string fi
      if (fi[i] == ' '){// condicion if que se cumple cuando el caracter en la posicion i del string fi es un espacio vacio
        t1 += mp[tmp];// se le suma el valor entero asociado al string tmp de mp a la variable t1
        tmp = "";// se le asigna un string vacio al string tmp
      }
      else{// en caso de no cumplirse la condicion anterior
        tmp += fi[i];// se le asigna el caracter en la posicion i del string fi al string tmp
    }
    for (int i = 0; i < se.size(); i++){// se inicia un ciclo for que itera desde 0 hasta el tamaño del string se
      if (se[i] == ' '){// condicion if que se cumple cuando el caracter en la posicion i del string se es un espacio vacio
        t1 += mp[tmp];// se le suma el valor entero asociado al string tmp de mp a la variable t1
        tmp = "";// se le asigna un string vacio al string tmp
      }
      else{// en caso de no cumplirse la condicion anterior
        tmp += se[i];// se le asigna el caracter en la posicion i del string se al string tmp
      }
    }
    string ret;// se crea el string ret
    if (t1 % 2 == 0){// condicion if que se cumple si el valor del modulo 2 de t1 es igual a 0
      ret += pm[0];// se le agrega el string guardado en la posicion 0 de pm al string ret
      ret += ' ';// se le agrega un espacio al string ret
    }
    for (int i = 0; i < 14; i++){// se inicia un ciclo for que itera desde 0 hasta 13
      if (t1 & (1 << i)){// condicion if que se cumple si el resultado del and logico entre t1 el el leftshit de i bits de 1,es 1
        ret += pm[i + 1];// se le concatena el string de la posicion i+1 de pm al string ret
        ret += ' ';// se le añade un espacio vacio a ret
      }
    }
    ret.pop_back();// se ejecuta la funcion pop_back sobre el string ret para eliminar el ultimo espacio de ret
    return ret;// se retorna el string ret
  }
};
