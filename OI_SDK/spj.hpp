#include<bits/stdc++.h>
//#include<bits/extc++.h>
#define LOG cerr
using namespace std;

FILE *fin,*fstd,*fusr;

namespace Lemon_Spj {
    FILE *pts,*ret;
    int fpts;
    inline void init_files(char** argv) {
        fin = fopen(argv[1],"r") , fstd = fopen(argv[3],"r") , fusr = fopen(argv[2],"r");
        ret = fopen(argv[5],"w") , sscanf(argv[4],"%d",&fpts);
        #ifdef DEBUG
        LOG << "Inited" << endl;
        #endif
    }
    inline void AC() {
        #ifdef DEBUG
        LOG << "AC" << endl;
        #endif
        fprintf(ret,"%d",fpts) , exit(0);
    }
    inline void WA() {
        #ifdef DEBUG
        LOG << "WA" << endl;
        #endif
        fprintf(pts,"0") , exit(0);
    }
}

namespace Hustoj_Spj {
    inline void init_files(char** argv) {
        fin = fopen(argv[1],"r") , fstd = fopen(argv[2],"r") , fusr = fopen(argv[3],"r");
        #ifdef DEBUG
        LOG << "Inited" << endl;
        #endif
    }
    inline void AC() {
        #ifdef DEBUG
        LOG << "AC" << endl;
        #endif
        exit(0);
    }
    inline void WA() {
        #ifdef DEBUG
        LOG << "WA" << endl;
        #endif
        exit(1);
    }
}

namespace Cena_Spj {
    FILE *ret;
    int fpts;
    inline void init_files(char** argv) {
        fin = fopen("##FILENAME##.in","r") , fstd = fopen(argv[2],"r") , fusr = fopen("##FILENAME##.out","r");
        ret = fopen("score.log","w") , sscanf(argv[1],"%d",&fpts);
        #ifdef DEBUG
        LOG << "Inited" << endl;
        #endif
    }
    inline void AC() {
        #ifdef DEBUG
        LOG << "AC" << endl;
        #endif
        fprintf(ret,"%d",fpts) , exit(0);
    }
    inline void WA() {
        #ifdef DEBUG
        LOG << "WA" << endl;
        #endif
        fprintf(ret,"0") , exit(0);
    }
}

namespace Qduoj_Spj {
    inline void init_files(char** argv) {
        fin = fopen(argv[1],"r") , fusr = fopen(argv[2],"r");
        #ifdef DEBUG
        LOG << "Inited" << endl;
        #endif
    }
    inline void AC() {
        #ifdef DEBUG
        LOG << "AC" << endl;
        #endif
        exit(0);
    }
    inline void WA() {
        #ifdef DEBUG
        LOG << "WA" << endl;
        #endif
        exit(1);
    }
}



