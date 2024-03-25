#include "vista.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

    vista::vista(){
            
        // Crear la ventana

        window.create(sf::VideoMode(300, 470), "Calculadora");

        // Crear texto para mostrar el input y el resultado
        font.loadFromFile("arial.ttf");
        if (!font.loadFromFile("arial.ttf")) {
            cout << "Error al cargar la fuente." << endl;
        }

        inputText.setString("Input:");
        inputText.setFont(font);
        inputText.setCharacterSize(15);
        inputText.setPosition(10, 10);
        inputText.setFillColor(sf::Color::Black);

        resultText.setString("Resultado:");
        resultText.setFont(font);
        resultText.setCharacterSize(15);
        resultText.setPosition(10, 50);
        resultText.setFillColor(sf::Color::Black);

        // Crear un botón 7
        button7.setSize(sf::Vector2f(50, 50));
        button7.setPosition(20, 120);
        button7.setFillColor(sf::Color::Green);

        //texto para botón
        buttonText7.setString("7");
        buttonText7.setFont(font);
        buttonText7.setCharacterSize(20);
        buttonText7.setPosition(button7.getPosition().x + 18, button7.getPosition().y + 10);
        buttonText7.setFillColor(sf::Color::Black); 

        // Crear un botón 8
        button8.setSize(sf::Vector2f(50, 50));
        button8.setPosition(90, 120);
        button8.setFillColor(sf::Color::Green);

            //texto para botón
        buttonText8.setString("8");
        buttonText8.setFont(font);
        buttonText8.setCharacterSize(20);
        buttonText8.setPosition(button8.getPosition().x + 18, button8.getPosition().y + 10);
        buttonText8.setFillColor(sf::Color::Black); 

        // Crear un botón 9
        button9.setSize(sf::Vector2f(50, 50));
        button9.setPosition(160, 120);
        button9.setFillColor(sf::Color::Green);

            //texto para botón
        buttonText9.setString("9");
        buttonText9.setFont(font);
        buttonText9.setCharacterSize(20);
        buttonText9.setPosition(button9.getPosition().x + 18, button9.getPosition().y + 10);
        buttonText9.setFillColor(sf::Color::Black); 

            // Crear un botón *
        buttonMultiply.setSize(sf::Vector2f(50, 50));
        buttonMultiply.setPosition(230, 120);
        buttonMultiply.setFillColor(sf::Color::Green);

            //texto para botón
        buttonTextm.setString("*");
        buttonTextm.setFont(font);
        buttonTextm.setCharacterSize(20);
        buttonTextm.setPosition(buttonMultiply.getPosition().x + 18, buttonMultiply.getPosition().y + 10);
        buttonTextm.setFillColor(sf::Color::Black); 

            // Crear un botón 4
        button4.setSize(sf::Vector2f(50, 50));
        button4.setPosition(20, 190);
        button4.setFillColor(sf::Color::Green);

            //texto para botón
        buttonText4.setString("4");
        buttonText4.setFont(font);
        buttonText4.setCharacterSize(20);
        buttonText4.setPosition(button4.getPosition().x + 18, button4.getPosition().y + 10);
        buttonText4.setFillColor(sf::Color::Black); 


        // Crear un botón 5
        button5.setSize(sf::Vector2f(50, 50));
        button5.setPosition(90, 190);
        button5.setFillColor(sf::Color::Green);

                //texto para botón
        buttonText5.setString("5");
        buttonText5.setFont(font);
        buttonText5.setCharacterSize(20);
        buttonText5.setPosition(button5.getPosition().x + 18, button5.getPosition().y + 10);
        buttonText5.setFillColor(sf::Color::Black); 

        // Crear un botón 6
        button6.setSize(sf::Vector2f(50, 50));
        button6.setPosition(160, 190);
        button6.setFillColor(sf::Color::Green);

                //texto para botón
        buttonText6.setString("6");
        buttonText6.setFont(font);
        buttonText6.setCharacterSize(20);
        buttonText6.setPosition(button6.getPosition().x + 18, button6.getPosition().y + 10);
        buttonText6.setFillColor(sf::Color::Black); 

            // Crear un botón -
        buttonMinus.setSize(sf::Vector2f(50, 50));
        buttonMinus.setPosition(230, 190);
        buttonMinus.setFillColor(sf::Color::Green);

                    //texto para botón
        buttonTextn.setString("-");
        buttonTextn.setFont(font);
        buttonTextn.setCharacterSize(20);
        buttonTextn.setPosition(buttonMinus.getPosition().x + 18, buttonMinus.getPosition().y + 10);
        buttonTextn.setFillColor(sf::Color::Black); 

            // Crear un botón 1
        button1.setSize(sf::Vector2f(50, 50));
        button1.setPosition(20, 260);
        button1.setFillColor(sf::Color::Green);

                    //texto para botón
        buttonText1.setString("1");
        buttonText1.setFont(font);
        buttonText1.setCharacterSize(20);
        buttonText1.setPosition(button1.getPosition().x + 18, button1.getPosition().y + 10);
        buttonText1.setFillColor(sf::Color::Black); 
        
        // Crear un botón 2
        button2.setSize(sf::Vector2f(50, 50));
        button2.setPosition(90, 260);
        button2.setFillColor(sf::Color::Green);

                    //texto para botón
        buttonText2.setString("2");
        buttonText2.setFont(font);
        buttonText2.setCharacterSize(20);
        buttonText2.setPosition(button2.getPosition().x + 18, button2.getPosition().y + 10);
        buttonText2.setFillColor(sf::Color::Black); 

        // Crear un botón 3
        button3.setSize(sf::Vector2f(50, 50));
        button3.setPosition(160, 260);
        button3.setFillColor(sf::Color::Green);

                    //texto para botón
        buttonText3.setString("3");
        buttonText3.setFont(font);
        buttonText3.setCharacterSize(20);
        buttonText3.setPosition(button3.getPosition().x + 18, button3.getPosition().y + 10);
        buttonText3.setFillColor(sf::Color::Black); 

        // Crear un botón +
        buttonPlus.setSize(sf::Vector2f(50, 50));
        buttonPlus.setPosition(230, 260);
        buttonPlus.setFillColor(sf::Color::Green);

                //texto para botón
        buttonTextp.setString("+");
        buttonTextp.setFont(font);
        buttonTextp.setCharacterSize(20);
        buttonTextp.setPosition(buttonPlus.getPosition().x + 18, buttonPlus.getPosition().y + 10);
        buttonTextp.setFillColor(sf::Color::Black); 


        // Crear un botón 0
        button0.setSize(sf::Vector2f(50, 50));
        button0.setPosition(20, 330);
        button0.setFillColor(sf::Color::Green);

                        //texto para botón
        buttonTextz.setString("0");
        buttonTextz.setFont(font);
        buttonTextz.setCharacterSize(20);
        buttonTextz.setPosition(button0.getPosition().x + 18, button0.getPosition().y + 10);
        buttonTextz.setFillColor(sf::Color::Black); 

        // Crear un botón .
        buttonDot.setSize(sf::Vector2f(50, 50));
        buttonDot.setPosition(90, 330);
        buttonDot.setFillColor(sf::Color::Green);

                        //texto para botón
        buttonTextd.setString(".");
        buttonTextd.setFont(font);
        buttonTextd.setCharacterSize(20);
        buttonTextd.setPosition(buttonDot.getPosition().x + 18, buttonDot.getPosition().y + 10);
        buttonTextd.setFillColor(sf::Color::Black); 
        
        // Crear un botón C
        buttonC.setSize(sf::Vector2f(50, 50));
        buttonC.setPosition(160, 330);
        buttonC.setFillColor(sf::Color::Green);

                        //texto para botón
        buttonTextb.setString("C");
        buttonTextb.setFont(font);
        buttonTextb.setCharacterSize(20);
        buttonTextb.setPosition(buttonC.getPosition().x + 18, buttonC.getPosition().y + 10);
        buttonTextb.setFillColor(sf::Color::Black); 

        // Crear un botón /
        buttonDivide.setSize(sf::Vector2f(50, 50));
        buttonDivide.setPosition(230, 330);
        buttonDivide.setFillColor(sf::Color::Green);

                        //texto para botón
        buttonTextv.setString("/");
        buttonTextv.setFont(font);
        buttonTextv.setCharacterSize(20);
        buttonTextv.setPosition(buttonDivide.getPosition().x + 18, buttonDivide.getPosition().y + 10);
        buttonTextv.setFillColor(sf::Color::Black); 



        // Crear un botón =
        buttonEqual.setSize(sf::Vector2f(50, 50));
        buttonEqual.setPosition(230, 400);
        buttonEqual.setFillColor(sf::Color::Green);

                        //texto para botón
        buttonTextq.setString("=");
        buttonTextq.setFont(font);
        buttonTextq.setCharacterSize(20);
        buttonTextq.setPosition(buttonEqual.getPosition().x + 18, buttonEqual.getPosition().y + 10);
        buttonTextq.setFillColor(sf::Color::Black); 

        }

    double vista::suma(double a, double b) {
        return a + b;
    };
    double vista::resta(double a, double b){
        return a - b;
    };
    double vista::multiplicacion(double a, double b){
        return a * b;
    };
    double vista::division(double a, double b){
        return a / b;
    };

    double vista::evaluar(string input, char op) {
          size_t posicion_marcador = input.find(operador);
          op1 = stoi(input.substr(0, posicion_marcador));
          op2 = stoi(input.substr(posicion_marcador + 1));
          switch (operador) {
            case '+':
                return suma(op1, op2);
            case '-':
                return resta(op1, op2);
            case '*':
                return multiplicacion(op1, op2);
            case '/':
                return division(op1, op2); // División entera
            default:
                return 0; // Operador no reconocido, podría lanzar una excepción en lugar de devolver 0
        }
    }
    
    vista::~vista() {
            // Código para liberar recursos o realizar otras tareas de limpieza

    }




    void vista::run(){


        // Variables para almacenar el input y el resultado
        input = "";
        resultado = "";

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                    vista::~vista();
                }

                // codigo para comportamiento del texto
      
               else if (event.type == sf::Event::TextEntered) {

                    if (event.text.unicode == 8 && !input.empty()) { // Borrar último carácter
                        input.pop_back();
                    }
                    else if (event.text.unicode >= '0' && event.text.unicode <= '9') { // Añadir dígitos
                        input += static_cast<char>(event.text.unicode);
                    }
                    else if (event.text.unicode == '+' || event.text.unicode == '-' || 
                            event.text.unicode == '*' || event.text.unicode == '/') { 
                                // Añadir operadores                       
                        operador = (event.text.unicode);
                        input += static_cast<char>(event.text.unicode);

                                            }
                    else if (event.text.unicode == 13) { // Tecla Enter para calcular resultado

                        try {
                            resultado = to_string(evaluar(input, operador));
                            input = "";
                        }
                        catch (const exception& e) {
                            resultado = "Error";
                        }
                    }
                } 



            }

            // Actualizar los textos
            inputText.setString("Input: " + input);
            resultText.setString("Resultado: " + resultado);

            // Limpiar la ventana
            window.clear(sf::Color::White);

            // Dibujar los textos en la ventana
            window.draw(inputText);
            window.draw(resultText);

            // Dibujar el botón y el texto
            window.draw(button0);
            window.draw(button1);
            window.draw(button2);
            window.draw(button3);
            window.draw(button4);
            window.draw(button5);
            window.draw(button6);
            window.draw(button7);
            window.draw(button8);
            window.draw(button9);
            window.draw(buttonPlus);
            window.draw(buttonMinus);
            window.draw(buttonMultiply);
            window.draw(buttonDivide);
            window.draw(buttonC);
            window.draw(buttonEqual);
            window.draw(buttonDot);

            window.draw(buttonTextz);
            window.draw(buttonText1);
            window.draw(buttonText2);
            window.draw(buttonText3);
            window.draw(buttonText4);
            window.draw(buttonText5);
            window.draw(buttonText6);
            window.draw(buttonText7);
            window.draw(buttonText8);
            window.draw(buttonText9);
            window.draw(buttonTextb);
            window.draw(buttonTextv);
            window.draw(buttonTextp);
            window.draw(buttonTextm);
            window.draw(buttonTextn);
            window.draw(buttonTextq);
            window.draw(buttonTextd);

            // Mostrar la ventana
            window.display();
    }

    }