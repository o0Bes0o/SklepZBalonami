#include <iostream>

using namespace std;

void MainPage (int *Choice);
void SignIn (int *Choice);
void SignUp (int *Choice);
void Exit (int *Choice);
void ExitThanks ();
void LoremIpsum(int Long);

int main()
{
    ////////////////////////
    int Choice=0;
    ////////////////////////
    for(bool On=1;On;On=0){
        switch (Choice){
        case 0:
                MainPage(&Choice);
                break;
            case 1:
                SignIn(&Choice);
                break;
            case 2:
                SignUp(&Choice);
                break;
            case 3:
                Exit(&Choice);
                break;
        }
    }
    //////////////////////
    ExitThanks();
    return 0;
}

void MainPage (int *Choice){
    LoremIpsum(500);
}

void SignIn (int *Choice){
    LoremIpsum(500);
}

void SignUp (int *Choice){
    LoremIpsum(500);
}

void Exit (int *Choice){
    LoremIpsum(500);
}

void ExitThanks (){
    LoremIpsum(500);
}

void LoremIpsum(int Long){
    string LoremIpsumString = "Lorem ipsum dolor sit amet enim. Etiam ullamcorper. Suspendisse a pellentesque dui, non felis. Maecenas malesuada elit lectus felis, malesuada ultricies. Curabitur et ligula. Ut molestie a, ultricies porta urna. Vestibulum commodo volutpat a, convallis ac, laoreet enim. Phasellus fermentum in, dolor. Pellentesque facilisis. Nulla imperdiet sit amet magna. Vestibulum dapibus, mauris nec malesuada fames ac turpis velit, rhoncus eu, luctus et interdum adipiscing wisi. Aliquam erat ac ipsum. Integer aliquam purus. Quisque lorem tortor fringilla sed, vestibulum id, eleifend justo vel bibendum sapien massa ac turpis faucibus orci luctus non, consectetuer lobortis quis, varius in, purus. Integer ultrices posuere cubilia Curae, Nulla ipsum dolor lacus, suscipit adipiscing. Cum sociis natoque penatibus et ultrices volutpat. Nullam wisi ultricies a, gravida vitae, dapibus risus ante sodales lectus blandit eu, tempor diam pede cursus vitae, ultricies eu, faucibus quis, porttitor eros cursus lectus, pellentesque eget, bibendum a, gravida ullamcorper quam. Nullam viverra consectetuer. Quisque cursus et, porttitor risus. Aliquam sem. In hendrerit nulla quam nunc, accumsan congue. Lorem ipsum primis in nibh vel risus. Sed vel lectus. Ut sagittis, ipsum dolor quam.";
    if(Long<1272)Long-=3;
    else Long=1272;
    for(int i=0;i<Long;++i)
        cout<<LoremIpsumString[i];
    cout<<"...";
}
