<h1 align="center">C++ Foundations Zenva</h1>
Este Projeto é um projeto de estudo da linguagem de programação C++ (ou CPP). o curso que está sendo base do estudo é o curso <a href="https://www.youtube.com/watch?v=pfgFAkI6rv0">C++ Foundations</a>.</br></br>

## **Pontos a ser abordados no curso**

- [Variáveis](#Variáveis)
- Operadores
- Ponteiros
- Arrays
- Vetores
- if/else
- While
- For
- Funções
- Classes e Objetos

### **Variáveis**

Em variáveis, foi abordado alguns tipos de variáveis, como **int, float, double, bool, char e string**.

```cpp
#include <iostream>

using namespace std;

void variables()
{
    int age = 22;
    float weight = 80.5f;
    double money = 5000.68;
    bool isActiveAccount = true;
    string name = "Gabriel Cassimiro";
    char firstLetterName = name[0];

    auto convertBoolToString = isActiveAccount ? "true" : "false";

    cout << "User: " << name << ", first letter name: " << firstLetterName << "age: " << age << ", weight: " <<
        weight << "Money: " << money << ", user account is active? "<< convertBoolToString;
}
```
