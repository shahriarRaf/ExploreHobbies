
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Hobby
{
public:
    virtual void display() = 0;
};

class Newspaper : public Hobby
{
public:
    void display()
    {
        string p;
        int choice;
        while (true)
        {
            cout<<endl;
            cout <<"Select a newspaper:"<<endl;
            cout <<"1.Prothom Alo"<<endl;
            cout <<"2.Daily Star"<<endl;
            cout<< "3.BBC Bangla"<<endl;
            cout<< "4.BBC World.International"<<endl;
            cout<< "5.Ittefaq"<<endl;
            cout<< "6.Jugantor"<<endl;
            cout<< "7.The Guardian.International"<<endl;
            cout<< "8.Al Jazeera.Internatinal"<<endl;
            cout<< "9.The New York Times.International"<<endl;
            cout<<"10.DW"<<endl;

            cout << "11.Go back to the previous menu"<<endl;
            cout<<endl;
            cout << "Enter your choice: ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Here is the link to Prothom Alo:";
                p="https://www.prothomalo.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 2:
                cout << "Here is the link to Daily Star:";
                p="https://thedailystar.net/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 3:
                cout << "Here is the link to BBC Bangla:";
                p="https://www.bbc.com/bengali";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 4:
                cout << "Here is the link to BBC World:";
                p="https://www.bbc.com/news/world";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 5:
                cout << "Here is the link to Ittefaq:";
                p="https://www.ittefaq.com.bd/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 6:
                cout << "Here is the link to Jugantor:";
                p="https://www.jugantor.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 7:
                cout << "Here is the link to The Guardian :";
                p="https://www.theguardian.com/international";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 8:
                cout << "Here is the link to Al Jazeera :";
                p="https://www.aljazeera.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 9:
                cout << "Here is the link to The New York Times:";
                p="https://www.nytimes.com/international/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 10:
                cout << "Here is the link to DW:";
                p="https://www.dw.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;

            case 11:
                return;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                continue;
            }
        }
    }
};

class Documentary : public Hobby
{
public:
public:
    void display()
    {
        string p;
        int choice;
        while (true)
        {
            cout<<endl;
            cout <<"Select a Documentary Channel:"<<endl;
            cout <<"1.VICE"<<endl;
            cout <<"2.SLICE"<<endl;
            cout<< "3.National Geography"<<endl;
            cout<< "4.History"<<endl;
            cout<<"5.HULU"<<endl;
            cout<<"6.Documentary heaven"<<endl;
            cout << "7.Go back to the previous menu"<<endl;
            cout<<endl;
            cout << "Enter your choice: ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Here is the link to VICE:";
                p="https://www.youtube.com/@VICENews/channels";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 2:
                cout << "Here is the link to SLICE:";
                p="https://www.youtube.com/@SLICEdocs";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 3:
                cout << "Here is the link to NatGeao:";
                p="https://www.youtube.com/@NatGeo";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 4:
                cout << "Here is the link to History:";
                p="https://www.youtube.com/@HISTORY";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 5:
                cout << "Here is the link to Hulu:";
                p="https://www.hulu.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 6:
                cout << "Here is the link to heaven:";
                p="https://documentaryheaven.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;


            case 7:
                return;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                continue;
            }
        }
    }
};

class ResearchPaper : public Hobby
{
public:
    void display()
    {
        string p;
        int choice;
        while (true)
        {
            cout<<endl;
            cout <<"Select a Reserch paper site :"<<endl;
            cout <<"1.The Lancet"<<endl;
            cout <<"2.SCI HUB "<<endl;
            cout<< "3.RserchGate"<<endl;
            cout<< "4.Jstor"<<endl;
            cout << "5.Go back to the previous menu"<<endl;
            cout<<endl;
            cout << "Enter your choice: ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Here is the link to The Lancet:";
                p="https://www.thelancet.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 2:
                cout << "Here is the link to Sci Hub:";
                p="https://www.sci-hub.se/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 3:
                cout << "Here is the link to ReserchGate :";
                p="https://www.researchgate.net/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 4:
                cout << "Here is the link to Jstor:";
                p="https://www.jstor.org/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;



            case 5:
                return;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                continue;
            }
        }
    }
};

class BlogAndArt : public Hobby
{
public:
    void display()
    {
        string p;
        int choice;
        while (true)
        {
            cout<<endl;
            cout <<"Select a Blog site :"<<endl;
            cout <<"1.Brittanica"<<endl;
            cout <<"2.Sight and Sound"<<endl;
            cout<< "3.Muktomona"<<endl;
            cout<< "4.Rawpixel.art"<<endl;
            cout <<"5.Go back to the previous menu"<<endl;
            cout << "Enter your choice: ";
            cout<<endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Here is the link to Brittanica:";
                p="https://www.britannica.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 2:
                cout << "Here is the link to Sight and Sound :";
                p="https://www.bfi.org.uk/sight-and-sound";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 3:
                cout << "Here is the link to Muktomona:";
                p="https://blog.muktomona.com/";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;
            case 4:
                cout << "Here is the link to Rawpixel:";
                p="https://www.rawpixel.com/board/537381/vincent-van-gogh-free-original-cc0-public-domain-paintings";
                ShellExecute(NULL, "open", p.c_str(), NULL, NULL, SW_SHOWNORMAL);
                break;




            case 5:
                return;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                continue;
            }
        }
    }
};



int main()
{



    Hobby* hobby = nullptr;

    while (true)
    {
        cout << "Select an option to EXPLORE your test:\n";
        cout << "1. Reading newspaper\n";
        cout << "2. Watching documentary\n";
        cout << "3. Reading research paper\n";
        cout << "4. Read or Observe blog And Art\n";
        cout << "5. Exit\n";
        cout<<endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            hobby = new Newspaper();
            break;
        case 2:
            hobby = new Documentary();
            break;
        case 3:
            hobby = new ResearchPaper();
            break;
        case 4:
            hobby = new BlogAndArt();
            break;
        case 5:
            delete hobby;
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        if (hobby != nullptr)
        {
            hobby->display();
            delete hobby;
            hobby = nullptr;
        }
    }
    return 0;
}
