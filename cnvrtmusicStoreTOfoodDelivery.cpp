#include<bits/stdc++.h>

using namespace std;
struct node
{
    string name;
    node *next;
};

class customer
{
public:
    string name;
    string song[9];
    int nm = 0;

    void addname(string n)
    {
        this->name = n;
    }
    void addsong(string n)
    {
        this->song[nm] = n;
        nm++;
    }
};

class linked_list
{
    node *head, *tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(string n)
    {
        node *tmp = new node;
        tmp->name = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    string trv(int n)
    {
        node *tmp;
        tmp = head;
        string str = tmp->name;
        int cnt=0;
        while(cnt!=n||tmp!=NULL)
        {
            tmp = tmp->next;
            str = tmp->name;
        }
        return str;
    }

};

int main()
{
    linked_list Metal,Rock,Pop,Bangla;

    Metal.add_node("Nothing Else Matters");
    Metal.add_node("Benighted");
    Metal.add_node("Enter Sandman");

    Rock.add_node("Stairway To Heaven");
    Rock.add_node("November Rain");
    Rock.add_node("Wish You Were Here");

    Pop.add_node("Beat It");
    Pop.add_node("Thinking Out Loud");
    Pop.add_node("New Rules");

    Bangla.add_node("Purnota");
    Bangla.add_node("Avash");
    Bangla.add_node("Ei Bidaye");

    cout<<"WELCOME TO THE MUSIC STORE!"<<endl;

    customer cus[200];

    int cnt=0;

    while(1)
    {

        cout<<"1. Enter to the Server"<<endl<<"2. Exit"<<endl;
        cout<<"Choose your option: ";
        int in;
        cin>>in;
        if(in==2)
        {
            break;
        }

        cout<<endl<<endl<<"Welcome to server\n"<<endl;
        cout<<"1. Metal"<<endl<<"_________\n"<<endl<<"11 Nothing Else Matters"<<endl<<"12 Benighted"<<endl<<"13 Enter Sandman"<<endl<<endl;
        cout<<"2. Rock"<<endl<<"_________\n"<<endl<<"21 Stairway To Heaven"<<endl<<"22 November Rain"<<endl<<"23 Wish You Were Here"<<endl<<endl;
        cout<<"3. Pop"<<endl<<"_________\n"<<endl<<"31 Beat It"<<endl<<"32 Thinking Out Loud"<<endl<<"33 New Rules"<<endl<<endl;
        cout<<"4. Bangla"<<endl<<"__________\n"<<endl<<"41 Purnota"<<endl<<"42 Avash"<<endl<<"43 Ei Bidaye"<<endl<<endl;

        string nme;
        cout<<"Enter your name: ";
        cin>>nme;
        cnt++;


        cus[cnt-1].addname(nme);
        int num=0;
        while(1)
        {
            cout<<endl<<endl<<"If you want to leave enter 0. "<<endl;
            cout<<"Enter the genre code: ";
            int cod;
            cin>>cod;
            if(cod==0||num==9)
            {
                break;
            }
            if(cod==1)
            {
                cout<<"Enter the song code: ";
                int sn;
                cin>>sn;
                if(sn==11)
                {
                    cus[cnt-1].addsong("Nothing Else Matters");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==12)
                {
                    cus[cnt-1].addsong("Benighted");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==13)
                {
                    cus[cnt-1].addsong("Enter Sandman");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else
                {
                    cout<<"Wrong code"<<endl;
                }
            }
            else if(cod==2)
            {
                cout<<"Enter the song code: ";
                int sn;
                cin>>sn;
                if(sn==21)
                {
                    cus[cnt-1].addsong("Stairway To Heaven");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==22)
                {
                    cus[cnt-1].addsong("November Rain");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==23)
                {
                    cus[cnt-1].addsong("Wish You Were Here");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else
                {
                    cout<<"Wrong code"<<endl;
                }
            }
            else if(cod==3)
            {
                cout<<"Enter the song code: ";
                int sn;
                cin>>sn;
                if(sn==31)
                {
                    cus[cnt-1].addsong("Beat It");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==32)
                {
                    cus[cnt-1].addsong("Thinking Out Loud");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==33)
                {
                    cus[cnt-1].addsong("New Rules");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else
                {
                    cout<<"Wrong code"<<endl;
                }
            }
            else if(cod==4)
            {
                cout<<"Enter the song code: ";
                int sn;
                cin>>sn;
                if(sn==41)
                {
                    cus[cnt-1].addsong("Purnota");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==42)
                {
                    cus[cnt-1].addsong("Avash");
                    num++;
                    cout<<cod<<"."<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else if(sn==43)
                {
                    cus[cnt-1].addsong("Ei Bidaye");
                    num++;
                    cout<<cod<<". "<<sn<<" ADDED TO PLAYLIST"<<endl;
                    cout<<"If you want to cancel the song request enter 1 else 0: ";
                    int ent;
                    cin>>ent;
                    if(ent==1)
                    {
                        cus[cnt-1].nm--;
                        num--;
                    }
                }
                else
                {
                    cout<<"Wrong Code"<<endl;
                }
            }
        }
    }
    int i=0;

    while(i!=cnt)
    {
        cout<<"1.Play\n2.Quit\n";
        cout<<"Choose your option: ";
        int cs;
        cin>>cs;
        if(cs==2)break;
        cout<<"Hi "<<cus[i].name<<endl;
        for(int j=0; j<cus[i].nm; j++)
        {
            cout<<"Starting the song.........\n";
            cout<<cus[i].song[j]<<endl;
            cout<<"Ended........\n";
        }
        i++;
    }

    return 0;
}
