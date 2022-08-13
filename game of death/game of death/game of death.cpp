#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;
void convert(char& s)
{
    s = tolower(s);
}
void mistake1()
{
    for (int i = 0; i <= 20; i++)
        cout << "                                                  " << endl;
}
void mistake2()
{
    for (int i = 0; i < 20; i++)
        cout << "                                                  " << endl;
    cout << "          ------------------------------          " << endl;
}
void mistake3()
{
    for (int i = 0; i < 20; i++)
        cout << "            |                                     " << endl;
    cout << "          ------------------------------          " << endl;
}
void mistake4()
{
    cout << "          ------------------------------          " << endl;
    for (int i = 0; i < 20; i++)
        cout << "            |                                     " << endl;
    cout << "          ------------------------------          " << endl;
}
void mistake5()
{
    cout << "          ------------------------------          " << endl;
    for (int j = 0; j <= 10; j++)
        cout << "            |                         |           " << endl;
    for (int i = 0; i < 10; i++)
        cout << "            |                                     " << endl;
    cout << "          ------------------------------          " << endl;
}
void mistake6()
{
    cout << "          ------------------------------          " << endl;
    for (int j = 0; j < 10; j++)
        cout << "            |                         |           " << endl;
    cout << "            |                         O           " << endl;
    for (int i = 0; i < 10; i++)
        cout << "            |                                     " << endl;
    cout << "          ------------------------------          " << endl;
}
void mistake7()
{
    cout << "          ------------------------------          " << endl;
    for (int j = 0; j < 10; j++)
        cout << "            |                         |           " << endl;
    cout << "            |                         O           " << endl;
    cout << "            |                        /|\\        " << endl;
    cout << "            |                        / \\          " << endl;
    for (int i = 0; i < 8; i++)
        cout << "            |                                     " << endl;
    cout << "          ------------------------------          " << endl;
}
int main()
{
    while (1)
    {
        srand(time(0));
        int num_of_elkelma = rand() % 50;
        string elkelma;
        char litter = 0;
        char dash[10] = { '-','-','-','-','-','-','-','-','-','-' };
        int num_of_litter = 0;
        int num_of_mistake = 1;
        string the_end = "aaaaaaaaaaaaaa";
        int words_completed = 0;
        string a[50][2] = { {"lion","the king of the Jungle"},{"camel","ship of the desert"}
        ,{"sun","A source of light and heat"},{"kettle"," We use it to make tea"}
        ,{"pencil"," Used For writing"},{"honey","Sticky and produced by bees"}
        ,{"bus", "Public transportation"},{"sea","Where the fish live"}
        ,{"facebook"," The most popular social media"},{"sunglasse","Used to protect the eye from the sun"}
        ,{"comb"," It has teeth and does not bounce"},{"rain"," Water descending from the sky"}
        ,{"cairo"," The capital of Egypt"},{"beirut"," The capital of Lebanon"}
        ,{"damascus","The capital of Syria"},{"baghdad"," The capital of Iraq"}
        ,{"riyadh" ," The capital of Saudi"} , {"khartoum"," The capital of Sudan"}
        ,{"oman", "The capital of Jordan"},{"two","How many dogs in the human body"}
        ,{"Rabat", " The capital of Morocco"} ,{"jerusalem"," The capital of Palestine"}
        ,{"tunisia"," The capital of Tunisia"},{"doha"," The capital of Qatar"}
        ,{"muscat"," The capital of the Sultanate of Oman"} , {"algeria","The capital of Algeria"}
        ,{"manama"," The capital of Bahrain"} ,{"mogadishu", "The capital of Somalia"}
        ,{"carbon dioxide","What is combustible gas and used by a firefighter to extinguish a fire"}
        ,{"sentences","What is the animal named after his desert ship"},{"petroleum","What is black gold"}
        ,{"comb","something that has teeth but does not bite what is it"},{"adam","Who is the first Prophet sent by God Almighty"}
        ,{"five","How many pillars of Islam"},{"night", "What is the thing that is black and has our comfort"}
        ,{"fence","What runs around a house but doesnot Move"},{"swims"," What word looks the same upside down and backwards"}
        ,{"alphabet"," What one word has the most letters in it"},{"water","What can be swallowed but can also swallow you"}
        ,{"egg"," What has to be broken before it can be use"},{"fire"," What grows when it eats but dies when it drinks"}
        ,{"stair","What goes up and down without moving"},{"plate","We eat   om it but we donot eat it"}
        ,{"air","You Find me above the sea  near the heads  between the trees"},{"onion","Take off my skin and I wonot cry but you will what am I"}
        ,{"ton","Forward I am heavy but backward I am not  What am I"},{"secret","If you have it you want to share it but If you share it you donot have it What is it"}
        ,{"cloud","I walk without feet fly without wings  cry without eyes  What am I"},{"chicken","We eat it before it is coming to life and after it is death"}
        ,{"coffin","The one who made it didnot want it The one who bought it didnot need it The one who used it never saw it What is it"} };
        cout << a[num_of_elkelma][1] << endl;
        elkelma = a[num_of_elkelma][0];
        cout << "the num of letters of the word =" << elkelma.size() << endl;
        while (the_end != "congratulations" || the_end != "game over")
        {

            if (num_of_mistake == 1)
                mistake1();
            for (int i = 0; i < elkelma.size(); i++)
                cout << dash[i];
            cout << endl;
            cout << "please inter letter" << endl;
            cin >> litter;
            convert(litter);
            num_of_litter = elkelma.find(litter);
            if (num_of_litter != -1)
            {
                dash[num_of_litter] = litter;
                words_completed++;
            }
            else
            {
                cout << "you miss error" << endl;
                num_of_mistake++;
                switch (num_of_mistake)
                {
                case(2):
                    mistake2();
                    break;
                case(3):
                    mistake3();
                    break;
                case(4):
                    mistake4();
                    break;
                case(5):
                    mistake5();
                    break;
                case(6):
                    mistake6();
                    break;
                case(7):
                    mistake7();
                    break;
                }
            }if (words_completed == elkelma.size() + 1)
            {
                the_end = { "congratulations" };
                cout << the_end << endl;
            }
            if (num_of_mistake == 7)
            {
                the_end = { "game over" };
                cout << the_end << endl;
            }
        }
    }
    return 0;
}
