#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int checkVector (const std::vector<std::vector<int>> & dnas, int organismID)
{
    short int size =  dnas[0].size();
    for (short int i = 0; i<size; ++i){
        if (dnas[0][i]==organismID) return i;
    }
    return -1;
}

void checkForLeader (const std::vector<std::vector<int>> & dnas)
{
    short int size =  dnas[0].size();
    for (short int i = 0; i<size; ++i){
        if (dnas[1][i]%2==1){
            std::cout << std::hex << dnas[0][i];
            break;
        }
    }
}

int main()
{
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);

    std::vector<std::vector<int>> dnas(2, std::vector<int>(0,0));

    char nextCh = 0;
    short int step = 5;
    unsigned int organismID = 0;
    unsigned int power = 65536;

    while(nextCh!='.')
    {
        std::cin >> nextCh;

        if ((nextCh>='0'&&nextCh<='9')||(nextCh>='a'&&nextCh<='f')){
            int hex = nextCh - (nextCh>'9'?'a'-10:'0');
            organismID += hex*power;
            power /= 16;

            if (--step==0) {
                if (checkVector(dnas,organismID)==-1){
                    dnas[0].push_back(organismID);
                    dnas[1].push_back(1);
                }else{
                    ++dnas[1][checkVector(dnas,organismID)];
                }
                organismID = 0;
                step = 5;
                power = 65536;
            }
        }
    }

    checkForLeader(dnas);

    return 0;
}
