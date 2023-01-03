// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int parseInt(char a) {
    return (int)a-48;
}

main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int h;



    while(1) {
        cin >> h;
        if (h == 0) break;
        int heroes[h];
        int heroesMatch[h];
        string heroesPreferences[h];

        for (int i = 0; i < h; i++) {
            cin >> heroes[i];
        }
        for (int i = 0; i < h; i++) {
            cin >> heroesPreferences[i];
        }
        bool found = false;
        for (int i = 0; i < h; i++) {
            if (heroes[i] != -1) {
                for (int e = 0; e < h; e++) {
                    if (i!=e && heroes[e] != -1) {
                        // if (heroesPreferences[i][0] == '=' && heroesPreferences[e][0] == '=' && parseInt(heroesPreferences[i][1]) == heroes[e] && parseInt(heroesPreferences[e][1]) == heroes[i] ||
                        //     heroesPreferences[i][0] == '=' && heroesPreferences[e][0] == '>' && parseInt(heroesPreferences[i][1]) == heroes[e] && heroes[i] > parseInt(heroesPreferences[e][1]) ||
                        //     heroesPreferences[i][0] == '=' && heroesPreferences[e][0] == '<' && parseInt(heroesPreferences[i][1]) == heroes[e] && heroes[i] < parseInt(heroesPreferences[e][1]) ||
                        //     heroesPreferences[i][0] == '>' && heroesPreferences[e][0] == '>' && heroes[e] > parseInt(heroesPreferences[i][1]) && heroes[i] > parseInt(heroesPreferences[e][1]) ||
                        //     heroesPreferences[i][0] == '>' && heroesPreferences[e][0] == '<' && heroes[e] > parseInt(heroesPreferences[i][1]) && heroes[i] < parseInt(heroesPreferences[e][1]) ||
                        //     heroesPreferences[i][0] == '<' && heroesPreferences[e][0] == '<' && heroes[e] < parseInt(heroesPreferences[i][1]) && heroes[i] < parseInt(heroesPreferences[e][1])) {

                            if (heroesPreferences[i][0] == '=' && heroes[e] == parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '=' && heroes[i] == parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '<' && heroes[e] < parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '<' && heroes[i] < parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '>' && heroes[e] > parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '>' && heroes[i] > parseInt(heroesPreferences[e][1]) ||

                                heroesPreferences[i][0] == '=' && heroes[e] == parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '<' && heroes[i] < parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '=' && heroes[e] == parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '>' && heroes[i] > parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '>' && heroes[e] > parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '<' && heroes[i] < parseInt(heroesPreferences[e][1]) ||

                                heroesPreferences[i][0] == '<' && heroes[e] < parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '=' && heroes[i] == parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '>' && heroes[e] > parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '=' && heroes[i] == parseInt(heroesPreferences[e][1]) ||
                                heroesPreferences[i][0] == '<' && heroes[e] < parseInt(heroesPreferences[i][1]) && heroesPreferences[e][0] == '>' && heroes[i] > parseInt(heroesPreferences[e][1])



                            ) {
                            cout << min(i+1, e+1) << " " << max(i+1,e+1) << "\n";
                            heroes[i] = -1;
                            heroes[e] = -1;
                            heroesPreferences[i] = "aa";
                            heroesPreferences[e] = "aa";
                            found = true;
                        }
                    }
                }
            }
        }

        if (!found) {
            cout << "NO HAY\n";
        }
        cout << "---\n"; 
    }



}