#include <stdio.h>
double A1();//円       　Task finish !!
double A2();//四則演算     Task finish !!
double A3();//パーセント     Task finish !!
int A4();//時間              Task finish !!
int A5();//距離               Task finish !!
int A6();//重さ                
double B1();//時間(秒)
double B2();//時間(分)
double B3();//時間(時)
double C1();//距離(mm)
double C2();//距離(cm)
double C3();//距離(m)
double C4();//距離(km)
double D1();//重さ(mg)
double D2();//重さ(g)
double D3();//重さ(kg)
double D4();//重さ(t)
//時間についての関数(B3まで)
double B1(){
    int A1;
    double A2,A3;
    printf("秒の時間を入力してください。\n");
    printf("秒=");
    scanf("%d",&A1);
    A2 = A1 / 60;
    A3 = A1 / 3600;
    printf("分変換...%lf\n",A2);
    printf("時変換...%lf\n",A3);
    return 0;
}
double B2(){
    double A1,A2;
    double A3,A4;
    printf("分の時間を入力してください。");
    printf("分=");
    scanf("%lf",&A1);
    A2 = A1 * 60;
    A4 = A1 / 60;
    printf("秒変換...%lf\n",A2);
    printf("時変換...%lf\n",A4);
    return 0;
}
double B3(){
    int A1,A2;
    int A3,A4;
    printf("時の時間を入力してください。");
    printf("時=");
    scanf("%d",&A1);
    A2 = A1 * 3600;
    A4 = A1 * 60;
    printf("秒変換...%d\n",A2);
    printf("分変換...%d\n",A4);
    return 0;
}
//距離についての関数(C4まで)
double C1(){
    double mm,cm,m,km;
    printf("mmの長さを入力してください。\n");
    printf("mm=");
    scanf("%lf",&mm);
    cm = mm / 10;
    m = cm / 100;
    km = m / 1000;
    printf("cm...%lf\n",cm);
    printf("m...%lf\n",m);
    printf("km...%lf\n",km);
    return 0;
}
double C2(){
    double mm,cm,m,km;
    printf("cmの長さを入力してください。\n");
    printf("cm=");
    scanf("%lf",&cm);
    mm = cm * 10;
    m = cm / 10;
    km = m / 1000;
    printf("mm...%lf\n",mm);
    printf("m...%lf\n",m);
    printf("km...%lf\n",km);
    return 0;
}
double C3(){
    double mm,cm,m,km;
    printf("mの長さを入力してください。\n");
    printf("m=");
    scanf("%lf",&m);
    cm = m * 100;
    mm = cm * 10;
    km = m / 1000;
    printf("mm...%lf\n",mm);
    printf("cm...%lf\n",cm);
    printf("km...%lf\n",km);
    return 0;
}
double C4(){
    double mm,cm,m,km;
    printf("kmの長さを入力してください。\n");
    printf("km=");
    scanf("%lf",&km);
    m = km * 1000;
    cm = m * 100;
    mm = cm * 10;
    printf("mm...%lf\n",mm);
    printf("cm...%lf\n",cm);
    printf("m...%lf\n",m);
    return 0;
}

double main(){
    printf("算数ツールです。\n");
    printf("各番号にツールが割り当てられてます。\n");
    printf("1:円周、直径、面積の計算\n");
    printf("2:わりざん、たしざん、かけざん、ひきざんの計算\n");
    printf("3:割合の計算\n");
    printf("4:時間の計算\n");
    printf("5:きょりの計算\n");
    printf("6:重さの計算\n");
    printf("番号を入力して下さい。\n");
    int num;
    scanf("%d",&num);
    while (num > 6 || num < 0) {
        printf("番号の値に誤りがあります。\n");
        printf("もう一度入力してください。\n");
        scanf("%d",&num);
    }
    switch (num) {
        case 1:
            A1();
        break;
        case 2:
            A2();
            break;
        case 3:
            A3();
            break;
        case 4:
            A4();
            break;
        case 5:
            A5();
            break;
        case 6:
            break;
            
            
        default:
            break;
    }
    return 0;
}

double A1(){
    printf("半径を入力してください。\n");
    printf("半径　＝　");
   /*A1 入力された半径
     A2　面積
     A3　直径
     A4　円周
     */
     
    double A1,A2,A3,A4;
    scanf("%lf",&A1);
    A2 = 3.14 * A1;
    A3 = A1 * 2;
    A4 = A3 * 3.14;
    printf("半径は%lfが入力されました。\n",A1);
    printf("面積は%lfです。\n",A2);
    printf("直径は%lfです。\n",A3);
    printf("円周は%lfです。\n",A4);
    
    return 0;
}

double A2(){
    /* A1 入力　A2 入力　A3 たしざん　A4 かけざん A5  B5 ひきざん　A6 B6 わりざん　A7 B7 あまりわりざん*/
    printf("たしざん、かけざん、ひきざん、わりざん、あまりのでるわりざんをします\n");
    printf("最大2つの数字の計算(11 X 11 や　12 X 1)ができます\n");
    printf("数字を入力してください。\n");
    printf("1つ目の数字は");
    double A1,A2,A3,A4,A5,A6,A7,A8,B2,B5,B6,B7;
    scanf("%lf",&A1);
    printf("2つ目の数字は");
    scanf("%lf",&A2);
    A3 = A1 + A2;
    A4 = A1 * A2;
    A5 = A1 - A2;
    B5 = A2 - A1;
    A6 = A1 / A2;
    B6 = A2 / A1;
    printf("たしざん...%lf\n",A3);
    printf("ひきざん(最初に入力した数字 - 次に入力した数字)...%lf\n",A5);
    printf("ひきざん(次に入力した数字 - 最初に入力した数字)...%lf\n",B5);
    printf("かけざん...%lf\n",A4);
    printf("わりざん(最初に入力した数字 / 次に入力した数字)...%lf\n",A6);
    printf("わりざん(次に入力した数字 / 最初に入力した数字)...%lf\n",B6);
    return 0;
}

double A3(){
    double A1,A2,A3,A4;
    printf("割合のパーセントを入力してください。\n");
    printf("★小数に変換せずに入力してください。\n");
    printf("パーセント=");
    scanf("%lf",&A1);
    A4 = A1 *0.01;
    printf("もとにする量を入力してください。");
    printf("もとにする量=");
    scanf("%lf",&A2);
    A3 = A4 * A2;
    printf("くらべられる量は%lfです",A3);
    
    return 0;
}
int A4(){
    int A1;
    double A2,A3;
    printf("時間の単位を質問します。\n");
    printf("秒:1");
    printf("分:2");
    printf("時間:3");
    printf("1,2,3のどれかの数字を入力してください。");
    scanf("%d",&A1);
    while (A1 > 3 || A1 < 1) {
        printf("入力された数字に誤りがあります");
        printf("再度入力してください。");
        scanf("%d",A1);
    }
    switch (A1) {
        case 1:
            B1();
            break;
        case 2:
            B2();
            break;
        case 3:
            B3();
            break;
        default:
            printf("エラーが発生しました。");
            break;
    }
    
    return 0;
}
int A5(){
    int A1;
    printf("mm,cm,m,kmの単位変換を行います。\n");
    printf("mm:1\n");
    printf("cm:2\n");
    printf("m:3\n");
    printf("km:4\n");
    printf("1,2,3,4のどれかの数字を入力してください。");
    scanf("%d",&A1);
    while (A1 > 4 || A1 < 1) {
        printf("入力する数字が誤っています。\n");
        printf("もう一度入力してください。\n");
        scanf("%d",&A1);
    }
    switch (A1) {
        case 1:
            C1();
            break;
        case 2:
            C2();
            break;
        case 3:
            C3();
            break;
        case 4:
            C4();
            break;
        default:
            break;
    }
    return 0;
}

int A6(){
    printf("mg,g,kg,の単位変換をします。\n");
    printf("");
    printf("");
    return 0;
    
}