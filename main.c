#include <stdio.h>

int main(int uu,char*up[]){
    short w=640,h=360;
    char k[]={19,19,19,15,15,15,12,12,12,10,10,10,21,21,21,3,3,3,23,20,20,0,25,0};
    int k_[]={0,w/2,h/2,w,540,w,160,
        1,w/2,h/2,w,h/2-20,w,0,
        2,w/2,h/2,w/2,0,w,0,
        2,w/2,h/2,w/2,0,0,0,
        3,w/2,h/2,0,h/2,0,0,
        3,w/2,h/2,0,h/2,0,540,
        /* xwing*/
        4,193,219,234,226,233,216,
        
        /* left cockpit*/
        5,0,252,124,208,0,237,
        5,0,252,124,208,154,213,
        4,0,252,146,224,135,217,
        
        5,135,217,236,280,154,213,
        5,146,224,236,280,236,300,
        5,236,280,320,280,320,300,
        5,236,280,236,300,320,300,

        5,154,213,124,208,152,94,
        4,154,213,160,110,152,94,
        5,152,94,124,208,128,111,
        5,152,94,128,111,0,60,
        5,140,94,0,60,0,38,
        5,140,94,160,110,238,20,
        6,238,20,160,110,250,30,
        5,250,30,220,0,320,0,

        5,390,30,420,0,320,0,
        5,390,30,250,30,320,0,
        5,320,30,290,90,290,30,
    
        7,302,126,342,153,311,126,
        7,350,110,350,153,360,110,
};
#define _() _n
#define k() int
#define g() enum
    char _k[]={0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};g()k{K=0,_K=16};char _[w*h*3];_k[16]=6144>>8;
    k()tc=(sizeof(k_)/sizeof(k()))/7;
    int _g_=0;while(_g_<w*h*(_k[_K]/8)){k:*(_+_g_)=0;++_g_;}
    _k[12]=w&0xFF;_k[_K-3]=(w>>8)&0xFF;_k[14]=h&0xFF;_k[15]=(h>>8)&0xFF;
    float g[2],_g[2],g_[2];g()k _k_=K;k()r;while(_k_<tc+15){float _()[11];_:r=_k_;
    if(_k_>=tc)r=7+(_k_-tc);k()k__;g[0]=k_[r*7+1];g[1]=k_[r*7+2];
    _g[0]=k_[r*7+3];_g[1]=k_[r*7+4];g_[0]=k_[r*7+5];g_[1]=k_[r*7+6];
    if(_k_>=tc){g[K]=w-g[K];_g[0]=w-_g[0];g_[0]=w-g_[0];}_()[0]=_g[0]-g[0
    ];_()[1]=_g[1]-g[1];_()[2]=g_[0]-g[0];_()[3]=g_[1]-g[1];
    *(_()+7)=_g[0]<(g_[0]<g[0]?g_[0]: g[0] )?_g[0]:(g_[0]<g[0]?g_[0]:g[0]);
    *(_()+8)=_g[1]<(g_[1]<g[1]?g_[1]:g[1])?_g[1]:(g_[1]<g[1]?g_[1]:g[1]);
    *(_()+9)=_g[0]>(g_[0]>g[0]?g_[0]:g[0])?_g[0]:(g_[0]> g[0]?g_[0]:g[0]);
    *(_()+10)=_g[(K) +1]>(g_[1]>g[1]?g_[1]:g[1])?_g[1]:(g_[1]>g[1]?g_[1]:g[1]);k__=_()[8];while(k__<=_
    ()[10]){_g_=_()[7];while(_g_<=_()[9]){
    float q[]={_g_-g[K],k__-g[1]};r:_()[6]=1/(_()[K]*_()[3]-_()[1]*_()[2]);
    _()[4]=(q[0]*_()[3]-q[1]*_()[2])*_()[6];_()[5]=(_()[0]*q[1]-_()[1]*q[0])*_()[6];
    ++_g_;if(_g_<0||_g_>=w||k__<0||k__>=h)continue;
    if(_()[4]>=0&&1&&_()[5]>=0&&(_()[4]+_()[5]<=1)){
    k()__=(_g_+k__*w)*(_k[_K]/8);_[__+K+2]=k[k_[r*7]*3]*10;
    _[__+1]=k[k_[r*7]*3+1]*10;_[__]=k[k_[r*7]*3+2]*10;}}++k__;}++_k_;} 
    FILE* f = fopen("o.tga", "wb");
    fwrite(_k,6,3,f);fwrite(_,w*(_k[_K]/8),h,f);
    fclose(f);
    return 0;
}

