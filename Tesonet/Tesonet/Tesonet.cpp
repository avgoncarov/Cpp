#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    //Number of rows and columns
    const char malware = '*';
    const char network = '.';
    const char firewall = 'f'
    const char healthyserver = 'o'
    const char infectedserver = 'x'
    const int w = 10;
    const int h = 10;
    char world[w][h];
    //char life1[rows][cols];

    int ans=0;


    //create initial generation randomly

    srand (time(NULL));
    int cell;


    for(int r=0; r<w; r++){

        for(int c=0; c<h; c++){

            cell= rand()%10;
            if(cell >= 5){
                world[r][c] = malware;
                }
            else {
                world[r][c] = dead;
            }

        }
    }


    for(int r=0; r < w; r++){
        for(int c = 0; c<h;c++){
            cout << world[r][c] << " ";
        }
        cout << endl;
    }

    for(int k=0; k <10;k++){
        for(int r=0; r < w; r++){
            for(int c=0;c<h;c++){
                if(world[r][c] == malware){
                    if((c-1) >=1 && (world[r][c-1] == malware))
                        ans++;

                    if(ans==2 || ans < 5)
                        world[r][c]= malware;
                    if(ans>3)
                        world[r][c]= dead;
                    if(ans<2)
                        world[r][c]=live;

                }


                    }
                }
            }
        }

        for(int r=0; r<w; r++){
            for(int c=0; c< h; c++){
                world[r][c]=life1[r][c];
            }
        }

        for(int r=0; r<w;r++){
            for(int c =0; c<h;c++){
                cout << world[r][c] << " ";

            }
            cout<<endl;
        }
    }

    return 0;
}
