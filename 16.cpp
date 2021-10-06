#include <iostream>

using namespace std;

class Register
{
    char sec[50];
    int roll[50];

public:
    int counter;
    void initCounter(void) { counter == 0; }
    void setdet(void);
    void dispdet(void);
};

void Register ::setdet(void)
{
    cout << "Enter the section " << endl;
    cin >> sec[counter];
    cout << "Enter the roll number " << endl;
    cin >> roll[counter];
    counter++;
}

void Register :: dispdet()
{
    for (int i = 0; i < counter; i++)
    {
        cout << i + 1 << ". Students section : " << sec[i] << " and roll number : " << roll[i] << endl;
    }
}

int main()
{
    Register copy;
    int j = 0;
    for (j = 0; j < 2; j++)
    {
        copy.setdet();
    }
    copy.dispdet();

    return 0;
}