// Joan Paneque

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    string finalresult;

    while (true)
    {

        // Input
        cin >> num;
        if (num == 0) break;
        string actions[num];

        for (int i = 0; i < num; i++)
        {
            cin >> actions[i];
        }

        // Processing

        int carry = 0;
        int result[2] = {0, 0};

        for (int i = 0; i < num; i++)
        {
            if (actions[i] == "PIC")
            {
                carry = (carry + 1) % 2;
            }

            if (actions[i] == "PONG!")
            {
                result[carry] = result[carry] + 1;
            }
        }
        finalresult += to_string(result[0]) + " " + to_string(result[1]) + "\n";
    }

    cout << finalresult;
}