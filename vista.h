#ifndef VISTA_H
#define VISTA_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;

class vista
{
private:
    /* data */
    string input;
    string resultado;
    char operador;
    int op1, op2;
    sf::RenderWindow window; 
    sf::Font font;
    sf::RectangleShape button0,button1,button2,button3,button4,button5,button6,button7, button8, button9, buttonPlus, buttonMinus, buttonMultiply, buttonDivide, buttonEqual, buttonDot, buttonC;
    sf::Text inputText, resultText, buttonTextz, buttonText1, buttonText2, buttonText3, buttonText4, buttonText5, buttonText6, buttonText7, buttonText8, buttonText9, buttonTextm, buttonTextn, buttonTextp, buttonTextd, buttonTextb, buttonTextv, buttonTextq;


public:
    vista();
    void run();
    double suma(double a, double b);
    double resta(double a, double b);
    double multiplicacion(double a, double b);
    double division(double a, double b);
    double evaluar(string input, char op);

    ~vista();
};




/* 
vista::vista(/* args )
{
}

vista::~vista()
{
} */

#endif // VISTA_H