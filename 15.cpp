#include <iostream>
#include <string>

using namespace std;

class Rank
{

public:
    string s;
    int flag = 0;
    void strt(void);

private:
    void read(void);
    void rnk_chk(void);
    void disp_rnk(void);
    void frm_top(void);
};

void Rank ::rnk_chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            flag++;
            cout << "\nYour rank is not in binary format." << endl;
            break;
        }
    }
}

void Rank ::disp_rnk(void)
{
    if (flag == 0)
        cout << "\nYour rank in bianry format is " << s << endl;
    else
        cout << "\nYour rank is " << s << endl;
}

void Rank ::frm_top(void)
{
    int i = stoi(s);
    i = i - 1;
    cout << "\nYou are " << i << " places away from the Top position.\n"<< endl;
}

void Rank ::read(void)
{
    cout << "Enter your rank " << endl;
    cin >> s;
}

void Rank ::strt(void)
{
    read();
    rnk_chk();
    disp_rnk();
    frm_top();
}

int main()
{
    Rank coder;
    coder.strt();
    // coder.read();
    // coder.rnk_chk();
    // coder.disp_rnk();
    return 0;
}