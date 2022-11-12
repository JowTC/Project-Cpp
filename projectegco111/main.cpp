#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string.h>
int main()
{
using namespace sf;
    RenderWindow window(VideoMode(500,888), "My window");
    char msj[100] = "This is text1";
    char msj1[100] = "button has been click";
    char msj2[100];
   //------------------------------------------------------------------------------------------
    Font font,font1;
    font.loadFromFile("NLT-OTTO.ttf");
    font1.loadFromFile("chi.ttf");

    Text text[100],menutext[100];
    text[1].setFont(font);
    text[1].setString(msj1);
    text[1].setCharacterSize(24);
    text[1].setFillColor(Color::Red);
    text[1].setStyle(Text::Bold | Text::Underlined);
    text[1].move(200.f, 150.f);

//-----------------------------------------------------------------------------------------
    String sstring[100];



//-----------------------------------------------------------------------------------------
    Texture menuhome,listmenu;
    menuhome.loadFromFile("Menu.png");
    listmenu.loadFromFile("list.png");

//-----------------------------------------------------------------------------------------

    Sprite smenuhome,slistmenu;
    smenuhome.setTexture(menuhome); slistmenu.setTexture(listmenu);
//-----------------------------------------------------------------------------------------


    int menuevent = 0;
    Text text1;
    String test1;
    text1.setFont(font1);
    text1.setCharacterSize(24);
    text1.setFillColor(Color::Red);

//-----------------------------------------------------------------------------------------

        while (window.isOpen())
        {
            Vector2i pos = Mouse::getPosition(window);
            int x = pos.x;
            int y = pos.y;

            sf::Event event,event1;
            while (window.pollEvent(event))
            {

                if (event.type == sf::Event::Closed)
                    window.close();
               if (event.type == sf::Event::TextEntered)
                {


                }
                //à¢éÒä»·ÓºÑ­ªÕÃÒÂÃÑºÃÒÂ¨èÒÂ
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(x>=56&&x<=450)&&(y>=112&&y<=230)&&(menuevent==0))
                {

                    menuevent=1;
                    window.clear();
                    window.draw(slistmenu);
                    window.display();


                }
                //µÍ¹¡´»ØèÁsave
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(x>=364&&x<=441)&&(y>=17&&y<=51)&&(menuevent==1))
                        menuevent=0;


                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(x>=3&&x<=322)&&(y>=135&&y<=235)&&(menuevent==1))
                {

//                    printf("press your list: ");
//                    scanf("%s",msj2);
//                    text[0].setString(msj2);
//                    text[0].setPosition(4.f, 150.f);
//                    text[0].setFont(font1);
//                    text[0].setCharacterSize(100);
//                    text[0].setFillColor(Color::Red);
//                    window.clear();
//                    window.draw(slistmenu);
//                    window.draw(text[0]);
//                    window.display();

                }
            }

                    if(menuevent==0)
                    {
                        window.clear();
                        window.draw(smenuhome);
                        window.display();

                    }



        }


    return 0;
}




