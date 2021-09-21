#include<stdio.h>
#include<math.h>
#include<locale.h>
int I,J,J1,N5,J5,Y,PR1,PR2, N8;
float DK, DW, NBIX, FI, DELT, DEL, LAMP, RP, CP, ISO, IGO, EP, DLZ, IGOR,
KMO, DKS, KPZ, SIGS, FO, Q, MIP, K1, K2, KP1, DLKC, TET, MSU, KW,
SHG, IOK, ALFOK, KP2, KK1, KK2, K11, K22;

float EPSI, FF9, FF10, FF11, FF12,  RG, AZ,  D1, D2, AZR,
DLL, WW, PP, PPP, TT, RORO, WSWS, TSTS, ZSZS, ROSS, DL, KP, ZPLO, TSO, TO, RSO,
Z, TICP, CS, LAMG, CG, MIG, LAM, MI, R, C, UP, US, UG , U, BB1, BB2, BB3,
BB4, BB5, ALF, A, B, D, E, DIS, DLP, WSP, TSP, WPLP, ROSP, DSP, ZSP, ZPLP, WP,
PP, TP, ROP, FP, AAA, P15, P16, P17, WSO, ZO, DSO, ZSO, BP, N6, N7 ,N9,
GP, CO, RES, PG, WES,REK, CXS, ALS, ALK, OT, MAX, GAM, RAD, DIP, SINA,
P9, DIPS, P20, P21, P22,DX, EBAT;

float FU[14],DF[14], OTN[14];
FILE *results, *data1, *data2;




void number1074(void)
{
    FU[11]=FU[9]/RG/FU[10];
    FU[9]=FF9;
    FU[12]=DK/2;
    FF11=FU[11];
    FF12=FU[12];
    AZ=pow(DK,2)/(NBIX*pow(DW,2));
    //printf("AZ=%f , EBAT=%f\n",AZ,EBAT); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt11
    number3();
}

void number3 (void)
{
    //printf("FI=%f , D1=%f\n",FI,D1); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt11
	AZR=(sqrt(2.)*(1.-FI))/(FI*sqrt(FI));
	if (fabsf((AZ-AZR)/AZ) < DEL)
        {
         number2();
        }
    else
    {
        FI=FI-DELT;
        number3();
    }
}

void number2 (void)
{
    D1=DK*sqrt(1.-FI);
    D2=D1;
    //printf("FI=%f , D1=%f\n",FI,D1); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
    if (PR1==5)
    {
        number1076();
    }
    else
    {
        printf("¬À»ﬂÕ»≈  ¿ »’ œ¿–¿Ã≈“–Œ¬ Õ≈Œ¡’Œƒ»ÃŒ »—ÀÀ≈ƒŒ¬¿“‹?\n");
        printf("------------------------------------------------\n");
        printf("1.T=f(KW). [ƒ¿/Õ≈“] [1/0]\n");
        scanf("%i", &Y);
        if (Y==1)
        {
            PR1=1;
            number1076();
        }
        else
        {
            number1060();
        }
    }
}


void number1060(void)
{
    printf("2.T=f(DKS). [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        PR1=2;
        number1076();
    }
    else
    {
        number1061();
    }
}

void number1061(void)
{
    printf("3.T=f(MSU). [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        PR1=3;
        number1076();
    }
    else
    {
        number1062();
    }
}

void number1062(void)
{
    printf("4.T=f(TG). [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        PR1=4;
        number1076();
    }
    else
    {
        number1063();
    }
}

void number1063(void)
{
    printf("5.T=f(KW). [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        PR1=5;
        number1076();
    }
    else
    {
        number1064();
    }
}

void number1064(void)
{
    printf("¬€œŒÀÕ»“‹ –¿—◊≈“ œ√√. [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        PR1=6;
        number1076();
    }
    else
    {
        number1094();
    }
}

void number1094(void)
{
    printf("◊“Œ ∆≈ “Œ√ƒ¿ ≈Ÿ≈?\n");
}

void number1076 (void)
{
    printf("FI=%f , D1=%f\n",FI,D1); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt

	data2=fopen("LABP.DAT","r");
	fscanf(data2, "%f %f %f %f %f %f", &FU[4], &FU[2], &FU[5], &FU[1], &FU[6], &FU[14]);
	fclose(data2);
	FU[9]=FF9;
	KPZ=DLKC/5;
	KP1=(DLZ-DLKC)/5;
	K1=KK1;
	K2=KK2;
	FU[10]=FF10;
	FU[11]=FF11;
	FU[12]=FF12;
	FU[13]=(DK-D2)/2.;
	FU[7]=KW/(15.+KW);
	 //printf("FI=%f , D1=%f\n",FI,D1); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
	//FU[7]=KW/(1+KMO+KW);
	//FU[7]=KW/(1+ALFOK*KMO+KW);
	FU[3]=(FU[7]*MSU)/(FU[4]*3.14*DK*FU[13]);
	//Fu7, Fu4- ‚ÂÌ˚Â ÁÌ‡˜ÂÌËˇ,msu,Dk -‚‚Ó‰ËÏ˚Â ÁÌ‡˜ÂÌËˇ
    //printf("MSU=%f, FU[4]=%f, FU[7]=%f, DK=%f, D1=%f\n", MSU, FU[4], FU[7] , DK, D2); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt

	FU[8]=(MSU*(1.-FU[7])*4.)/(FU[11]*3.14*pow(DK,2));
	//printf("MSU=%f, FU[7]=%f, FU[11]=%f, DK=%f", MSU, FU[7], FU[11] , DK); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt

	DLL=0;
	WW=FU[8];
	PP=FU[9];
	PPP=FU[9];
	TT=FU[10];
	RORO=FU[11];
	WSWS=FU[3];
	TSTS=FU[2];
	ZSZS=FU[7];
	ROSS=FU[4];
	DL=0.0001;
	KP=0;
	J1=0;
	ZPLO=FU[7];
	TSO=FU[2];
	TO=FU[10];
	RSO=FU[4];
	if (PR2==1)
	{
		fprintf(results, "» — ’ Œ ƒ Õ € ≈ ƒ ¿ Õ Õ € ≈   ƒ ¿ Õ Õ € ≈\n"); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
        fprintf(results, "MSU=%f, T=%f, KW=%f, DKS=%f, DLZ=%f, EPSI=%f, TET=%f\n", MSU, FU[10], KW, DKS, DLZ, EPSI, TET); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
	}
	else
    {
        fprintf(results, "\n– ¿ — ◊ ≈ “ œ ¿ – Œ √ ¿ « Œ √ ≈ Õ ≈ – ¿ “ Œ – ¿\n"); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
        PR2=1;
        fprintf(results, "» — ’ Œ ƒ Õ € ≈ ƒ ¿ Õ Õ € ≈   ƒ ¿ Õ Õ € ≈\n"); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
        fprintf(results, "MSU=%f, T=%f, KW=%f, DKS=%f, DLZ=%f, EPSI=%f, TET=%f\n", MSU, FU[10], KW , DKS, DLZ, EPSI, TET); // ¬˚‚Ó‰ ‚ Ù‡ÈÎ txt
    }
    number5();
}




void number5 (void)
{
    DX=SHG;
    Z=(FU[9]-10.E+5)/30.E+5;
    TICP=452.04+70.14*Z-17.42*Z*(Z-1.)+4.1*Z*(Z-1.)*(Z-2.)-0.818*Z*(Z-1.)*(Z-2.)*(Z-3.);
    CS=4281.+5.1*(FU[2]-423.);
    LAMG=0.1+0.616E-4*(FU[10]-700.);
    CG=1256.+0.38*(FU[10]-1000.);
    MIG=0.3E-4+0.183E-7*(FU[10]-700.);
    LAM=LAMG*(1.-FU[14])+FU[14]*LAMP;
    MI=MIG*(1.-FU[14])+FU[14]*MIP;
    R=RG*(1.-FU[14])+FU[14]*RP;
    C=CG*(1.-FU[14])+FU[14]*CP;
    UP=ISO+CS*(TICP-TSO)+TET+CP*(FU[10]-TICP);
    US=ISO+CS*(FU[2]-TSO);
    UG=IGO-CG*(TO-FU[10]);
    U=UP*FU[14]+UG*(1.-FU[14]);
    BB1=(0.024*LAM)/DK;
    BB2=pow((FU[11]*FU[8]*DK)/MI,0.8);
    BB3=pow(((C*MI)/LAM),0.4);
    BB4=pow((FU[2]/FU[10]),(-0.7));
    BB5=1.+pow((DL/DK),(-0.7))*pow((FU[2]/FU[10]),(0.7));
    ALF=BB1*BB2*BB3*BB4*BB5;

    if (FU[2]<TICP)
    {
        DF[2]=(ALF*(FU[10]-FU[2]))/(FU[13]*CS*FU[4]*FU[3]);
        DF[4]=-(7E-3*(FU[2]-TSO)*DF[2])/sqrt(1.-7E-6*pow((FU[2]-TSO),2));
        DF[13]=0;
        DF[7]=0;
        DF[3]=-FU[3]*(DF[4]/FU[4]+DF[13]/FU[13]);
        DIS=CS*DF[2];
    }
    else
    {
        DF[3]=0;
        DF[2]=0;
        DF[4]=0;
        DF[7]=-(3.14*DK*ALF*(FU[10]-TICP))/(MSU*(TET+CP*(FU[10]-TICP)));
        DF[13]=DF[7]/(3.14*DK*FU[3]*FU[4]);
        DIS=0;
    }
    number20();
}

void number20 (void)
{
    DF[14]=-DF[7]*((1.-ZPLO)/pow((1.-FU[7]),2));
    A=((FU[3]-FU[8])*DF[7]+FU[7]*DF[3])/(1.-FU[7]);
    B=(DF[7]*(US-U+pow((FU[3]),2)/2-pow(FU[8],2)/2)+FU[7]*DIS+FU[7]*FU[3]*DF[3]+(UP-UG)*(1.-FU[7])*DF[14])/(C*(1.-FU[7]));
    D=((RP-RG)/R)*DF[14];
    E=DF[7]/(1.-FU[7]);
    DF[8]=(D-E-B/FU[10]+A*FU[11]*FU[8]/FU[9])/(1./FU[8]-FU[11]*FU[8]/FU[9]+FU[8]/(C*FU[10]));
    DF[11]=-FU[11]*E-FU[11]/FU[8]*DF[8];
    DF[9]=-A*FU[11]*FU[8]-FU[11]*FU[8]*DF[8];
    DF[10]=-B-FU[8]/C*DF[8];
    DF[1]=0;
    DF[5]=0;
    DF[6]=0;
    DF[12]=0;
    number61();
}

void number61(void)
{
    J=0;
    for(int I=1; I<=14; I++)
    {
        OTN[I]=DF[I]*DX/FU[I];
        if (OTN[I]<EP) J=J+1;
        else DX=DX/10.;
    }

    if (J==14)
    {
        number51();
    }
    else
    {
        number61();
    }
}

void number51(void)
{
    for(int I=1; I<=14; I++)
    {
        FU[I]=FU[I]+DF[I]*DX;
    }
     number50();
}

void number50(void)
{

    KP=KP+DX;
    DL=DL+DX;
    if (KP<KPZ)
    {
        number5();
    }
    else
    {
        KP=0;
        if (J1==1)
        {
            number70();
        }
        else
        {
            J1=1;
            fprintf(results,"– ≈ « ” À ‹ “ ¿ “ €   – ¿ — ◊ ≈ “ ¿\n");
            fprintf(results,"œ À ≈ Õ   ¿\n");
            fprintf(results,"DL         W         P                 T         RO         WPL         TS         ZPL         ROS         DS         WS         ZS         RK         MAX\n");
            fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f\n", DLL, WW, PP, TT, RORO, WSWS, TSTS, ZSZS, ROSS);
            number70();
        }
    }
}
void number70(void)
{
    //printf("%f, %f, %f, %f, %f, %f, %f, %f , %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4]);
    fprintf(results, "%3.3e, %3.3e, %3.3e, %3.3e, %3.3e, %3.3e, %3.3e, %3.3e, %3.3e\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4]);
    if (DL<DLKC)
    {
        number5();
    }
    else
    {
        printf("«¿ ŒÕ◊≈Õ –¿—◊≈“ ƒŒ  ŒÀ‹÷¿ —¡–Œ—¿\n");
        printf("--------------------------------\n");
        printf("–≈«”À‹“¿“€ –¿—◊≈“¿\n");
        printf("DL=%f, P=%f, T=%f, WS=%f\n", DL, FU[9], FU[10], FU[1]);
        printf("TS=%f, W=%f, ROS=%f, ZS=%f\n", FU[2], FU[8], FU[4], FU[6]);
        printf("œŒÀ”◊≈ÕÕ€≈ –≈«”À‹“¿“€ ”—“–¿»¬¿ﬁ“ [ƒ¿/Õ≈“] [1/0]=\n");
        scanf("%i", &Y);
        if (Y==1)
        {
           number1007();
        }
        else
        {
           number1008();
        }
    }
}


void number1008(void)
{
    printf("—Ã.»—’.ƒ¿ÕÕ€≈-”Õ»◊“Œ∆“≈ ‘¿…À –≈«-“Œ¬:LAB.REZ\n");
}
void number1007(void)
{
    DLP=DL;
    WSP=FU[1];
    TSP=FU[2];
    WPLP=FU[3];
    ROSP=FU[4];

    DSP=0;//DSP=FU[5];
    ZPLP=FU[7];//ZPLP=0;
    ZSP=0;//ZSP=FU[7];

    WP=FU[8];
    PP=FU[9];
    TP=FU[10];
    ROP=FU[11];
    FP=FU[12];
    AAA=pow(DK,2)/pow(DKS,2);
    if (FU[2]<=463)
    {
        SIGS=9.977476E-02-2.867105E-05*FU[2]-2.174555E-07*pow(FU[2],2);
        //SIGS=(9.977476*pow(10,-02))-(2.867105*pow(10,-05))*FU[2]-(2.174555*pow(10,-07))*pow(FU[2],2);
    }
    else if (FU[2]<643)
    {
        SIGS=2.032531E-01-4.414586E-04*FU[2]+1.956456E-07*pow(FU[2],2);
        //SIGS=(2.032531*pow(10,-01))-(4.414586*pow(10,-04))*FU[2]+(1.956456*pow(10,-07))*pow(FU[2],2);
    }
    else
    {
        SIGS=4.7E-04;
    }
    number1103();
}

void number1103(void)
{
    P15=pow((SIGS*FU[4]),0.5)/(FU[11]*fabsf(AAA*FU[8]-FU[3]));
    P16=pow((8.06E-8/(SIGS*FU[4])),0.425);
    P17=pow((1./(1.-FU[6]-FU[7])),0.425);
    FU[5]=(1.E-3*P15+0.6E-4*P16)*P17;
    FU[1]=FU[3];
    FU[12]=DK/2;
    WSO=FU[1];
    ZO=FU[7];
    FU[6]=ZO;
    DSO=FU[5];
    ZSO=FU[6];
    RSO=FU[4];
    FU[7]=0.0001;
    BP=0;
    J5=0;
    N6=0;
    N7=0;
    N8=0;
    N9=0;
    number2000();
}

void number2000(void)
{
    GP=(ZO-FU[6]-FU[7])/(1.-FU[7]-FU[6]);
    LAM=LAMG*(1.-GP)+GP*LAMP;
    CO=FO-Q*log((Q+FO)/Q);
    MI=MIG*(1.-GP)+GP*MIP;
    R=RG*(1.-GP)+GP*RP;
    C=CG*(1.-GP)+GP*CP;
    US=ISO+CS*(FU[2]-TSO);
    Z=(FU[9]-10.E+5)/30.E+5;
    TICP=452.04+70.14*Z-17.42*Z*(Z-1.)+4.1*Z*(Z-1.)*(Z-2.)-0.818*Z*(Z-1.)*(Z-2.)*(Z-3.);
    UP=ISO+CS*(TICP-TSO)+TET+CP*(FU[10]-TICP);
    UG=IGO+CG*(FU[10]-TO);
    U=GP*UP+UG*(1.-GP);
    RES=FU[11]*(FU[8]-FU[1])*FU[5]/MI;
    RES=fabsf(RES);
    PG=C*MI/LAM;
    WES=(FU[11]*pow((FU[8]-FU[1]),2))*FU[5]/(2.*SIGS);
    if (WES>50)
    {
     WES=50;
    }
    REK=(FU[11]*(FU[8]-FU[3])*2.*FU[12])/MI;
    REK=fabsf(REK);
    if (RES<0.1)
    {
        number2100();
    }
    else
    {
        CXS=(27./pow(RES,0.84))*exp(0.03*pow(WES,1.5));
        number2200();
    }
}

void number2100(void)
{
    CXS=240.;
    RES=0.1;
    REK=0.1;
    number2200();
}
void number2200(void)
{
  ALS=(LAM*(1.56+0.62*pow(RES,0.5)*pow(PG,0.38)))/FU[5];
  ALK=(LAM*(1.56+0.62*pow(REK,0.5)*pow(PG,0.38)))/(2.*FU[12]);
  OT=FU[8]/sqrt(C*R*FU[10]/(C-R));
  MAX=OT;
  if (N9==1)
  {
      number4100();
  }
  else if (OT<0.9)
  {
      number4000();
  }
  else
  {
    printf("Õ¿…ƒ≈ÕŒ Ã»Õ»Ã¿À‹ÕŒ≈ —≈◊≈Õ»≈\n");
    printf("---------------------------\n");
    N9=1;
    if(FU[2]<=463)
    {
        SIGS=9.977476E-02-2.867105E-05*FU[2]-2.174555E-07*pow(FU[2],2);
        number1106();
    }
    else if (FU[2]<643)
    {
        SIGS=2.032531E-01-4.414586E-04*FU[2]+1.956456E-07*pow(FU[2],2);
        number1106();
    }
    else
    {
        SIGS=4.7E-04;
        number1106();
    }
  }
}
void number1106(void)
{
    P15=pow((SIGS*FU[4]),0.5)/(FU[11]*fabsf(FU[8]-FU[3]));
    P16=pow((8.06E-8/(SIGS*FU[4])),0.425);
    P17=pow((1./(1.-FU[6]-FU[7])),0.425);
    FU[5]=(1.E-3*P15+0.6E-4*P16)*P17;
    FU[6]=FU[6]+FU[7];
    ZSO=FU[6];
    DSO=FU[5];
    FU[7]=0.0001;
    GAM=0;
    fprintf(results, "Ã » Õ » Ã ¿ À ‹ Õ Œ ≈  — ≈ ◊ ≈ Õ » ≈\n");
    fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);
    printf("–≈«”À‹“¿“€ –¿—◊≈“¿:\n");
    printf("DL=%f, P=%f, T=%f, MAX=%f, RK=%f,\n", DL, FU[9], FU[10], MAX,FU[12]);
    number5000();
}
void number4100(void)
{
    DF[12]=K2;
    GAM=0;
    RAD=FU[12];
    number5000();
}
void number4000(void)
{
    DF[12]=K1;
    GAM=1.;
    RAD=DK/2;
    number5000();
}

void number5000(void)
{

    if ((FU[2]-TICP)<0)
    {
        number6000();
    }
    else if ((FU[2]-TICP)==0)
    {
        number6100();
    }
    else if ((FU[2]-TICP)>0)
    {
        number6100();
    }
}
void number6000(void)
{
    DF[2]=+6.*ALS*(FU[10]-FU[2])/(CS*FU[4]*FU[5]*FU[1]);
    DF[4]=-(7.E-3*(FU[2]-TSO)*DF[2])/sqrt(1.-7.E-6*pow((FU[2]-TSO),2));
    DF[5]=-FU[5]*DF[4]/(3.*FU[4]);
    DIS=0;
    DIP=0;
    number7000();
}
void number6100(void)
{
    DF[2]=0;
    DF[4]=0;
    DF[5]=-(2.*ALS*(FU[10]-TICP))/(FU[4]*FU[1]*(TET+CP*(FU[10]-TICP)-CS*(FU[2]-TICP)));
    DIS=((3.*ZSO*FU[4]*FU[5]*FU[5])*DF[5])/(RSO*DSO*DSO*DSO)*pow(FU[12]/RAD,2);
    SINA=fabsf(DF[12])/sqrt(1.+fabsf(pow(DF[12],2)));
    if (DF[12]==0)
    {
       number7000();
    }
    else
    {
        DIP=(6.28*FU[12]*(FU[10]-TICP)*ALK*DF[12]*GAM)/((SINA*(TET+CP*(FU[10]-TICP)-CS*(FU[2]-TICP)))*MSU);
        if(FU[10]<=FU[2])
        {
            number7201();
        }
        else
        {
           number7000();
        }
    }

}
void number7000(void)
{

    DF[1]=(CXS*FU[11]*fabsf(FU[8]-FU[1])*(FU[8]-FU[1]))/(FU[4]*FU[5]*FU[1]);
    DIPS=-(DF[12]*FU[5]*FU[5]*FU[5]*FU[1]*ZSO*FU[12]*FU[4]*GAM)/(RSO*DSO*DSO*DSO*CO*(Q+FU[12])*WSO);
    DF[3]=((FU[1]-FU[3])*DIPS-FU[3]*DIP)/FU[7];
    if (FU[6]<0.0001)
    {
        number7100();
    }
    else
    {
        number7200();
    }
}

void number7201(void)
{
    DF[2]=6*ALS*(FU[10]-FU[2])/(CS*FU[4]*FU[5]*FU[1]);
    number7000();
}

void number7100(void)
{
    DIPS=0;
    DIS=0;
    number7200();
}
void number7200(void)
{
    DF[7]=DIPS+DIP;
    DF[6]=DIS-DIPS;
    A=((FU[3]-FU[8])*DIP+(FU[1]-FU[8])*DIS+(FU[3]-FU[1])*DIPS+FU[6]*DF[1]+FU[7]*DF[3])/(1.-FU[6]-FU[7]);
    P20=US-U+(FU[1]*FU[1]/2.)-(FU[8]*FU[8])/ 2.;
	P21=((UG-UP)*(1.-ZSO))/(1.-FU[6]-FU[7]);
	P22=US-U+(FU[3]*FU[3])/2.-(FU[8]*FU[8])/2.;
	B=(DIS*(P20+P21)+DIP*(P22+P21)+DIPS*((FU[3]*FU[3])/2.-(FU[1]*FU[1])/2.)+(FU[7]+FU[6])*CS*DF[2]+FU[6]*FU[1]*DF[1]+FU[7]*FU[3]*DF[3])/(C*(1.-FU[6]-FU[7]));
	D=((RP-RG)*(1.-ZSO)*(DIS+DIP))/((pow((1.-FU[6]-FU[7]),2))*R);
	E=(2.*DF[12])/FU[12]+(DIS+DIP)/(1.-FU[6]-FU[7]);
	DF[8]=(D-E-B/FU[10]+(A*FU[11]*FU[8]/FU[9]))/(1./FU[8]-FU[11]*FU[8]/FU[9]+FU[8]/C/FU[10]);
	if (OT>1.10)
    {
        number9400();
    }
    else if (OT<0.90)
    {
        number9400();
    }
    else
    {
        DF[8]=1E+5;
        E=D-B/FU[10]+(A*FU[11]*FU[8])/FU[9]-DF[8]*(1./FU[8]-(FU[11]*FU[8]/FU[9])+(FU[8]/(C*FU[10])));
        DF[12]=(E-((DIS+DIP)/(1.-FU[6]-FU[7])))*FU[12]/2.;
        number9400();
    }

}



void number9400(void)
{
    DF[9]=-A*FU[11]*FU[8]-FU[11]*FU[8]*DF[8];
	DF[10]=-B-(FU[8]*DF[8])/C;
	DF[11]=-FU[11]*E-(FU[11]*DF[8])/FU[8];
    DX=SHG;
    number8000();
}

void number8000(void)
{
    N5=0;
    if (FU[14]<1E-4) DF[14]=0;
    if (FU[7]<1E-4) DF[7]=0;
    if (FU[6]<1E-4) DF[6]=0;
    if (FU[5]<1E-6) DF[5]=0;
    if (FU[3]<1E-3) DF[3]=0;
    for(int I=1; I<=12; I++)
    {
        OTN[I]=DF[I]*DX/FU[I];
        //if (OTN[I]<EP) N5=N5+1;
        //else DX=DX/10.;
        if ((fabsf(OTN[I])-EP)<0) N5=N5+1;
        else if ((fabsf(OTN[I])-EP)==0) DX=DX/10;
        else if ((fabsf(OTN[I])-EP)>0) DX=DX/10;
        //printf("OTN[I]=%d\n",(EP));
        //printf("DX=%.100f\n", DX);
    }

    if(N5==12)
    {
        number13000();
    }
    else
    {
        number8000();
    }
}

void number13000(void)
{

    //printf("DX=%.60f\n", DX);
    //DX=0.0000001;
    for(int I=1; I<=12; I++)
    {
        FU[I]=FU[I]+DF[I]*DX;
        //printf("FU=%f\n, ", FU[I]);
        //printf("DF[%i]=%f\n", I,DF[I]);
    }
    BP=BP+DX;
    DL=DL+DX;
    printf("\n");
    //printf("BP=%f, DX=%f, DL=%f\n", BP, DX, DL);
    if (DL>DLZ)
    {
        number18003();
    }
    else
    {
        number18004();
    }
}

void number18003(void)
{
   if(J5==1)
   {
       number18004();
   }
   else
   {
    printf("«¿ ŒÕ◊≈Õ –¿—◊≈“ ÷»À»Õƒ–»◊≈— Œ… ◊¿—“»\n");
    printf("------------------------------------\n");
    KP1=KP2;
    printf("–≈«”À‹“¿“€ –¿—◊≈“¿\n");
    printf("DL=%f, P=%f, T=%f, WS=%f\n", DL, FU[9], FU[10], FU[3]);
    printf("TS=%f, W=%f, ROS=%f, ZS=%f\n", FU[2], FU[8], FU[4], FU[7]);
    printf("œŒÀ”◊≈ÕÕ€≈ –≈«”À‹“¿“€ ”—“–¿»¬¿ﬁ“ [ƒ¿/Õ≈“] [1/0]\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        number1009();
    }
    else
    {
        number1008();
    }
   }

}
void number1009(void)
{
    J5=1;
    K1=K11;
    K2=K22;
    fprintf(results, "  Œ Õ ≈ ÷   ÷ » À » Õ ƒ – » ◊ ≈ —   Œ …   ◊ ¿ — “ »\n");
    fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);
    BP=0;
    number18004();
}
void number18004(void)
{
    printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);

    //printf("PPP=%f, FU[9]=%f, EPSI=%f\n", PPP, FU[9], EPSI);

    //printf("BP=%f, KP1=%f\n", BP, KP1);
    if((PPP/FU[9])>=EPSI)
    {
      number17000();
    }
    else if (BP<KP1)
    {
      number2000();
    }
    else
    {
        BP=0.;
        if (N8==1)
        {
           number16400();
        }
        else
        {
            fprintf(results, "  Œ À ‹ ÷ Œ   — ¡ – Œ — ¿\n");
            fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DLP, WP, PP, TP, ROP, WPLP, TSP, ZPLP, ROSP, DSP, WSP, ZSP, FP);
            number16400();
        }


    }

}
void number16400(void)
{
    //printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);
    fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);
    N8=1;
    number2000();
}
void number17000(void)
{
    fprintf(results, "%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", DL, FU[8], FU[9], FU[10], FU[11], FU[3], FU[2], FU[7], FU[4], FU[5], FU[1], FU[6], FU[12], MAX);
    if (N9!=1)
    {
        number1100();
    }
    else
    {
        printf(" ŒÕ≈÷ –¿—◊≈“¿ —ŒœÀŒ¬Œ√Œ Õ¿—¿ƒ ¿\n");
        number1100();
    }
}
void number1100(void)
{
    printf("–¿—◊≈“ «¿ ŒÕ◊≈Õ ? [ƒ¿/Õ≈“] [1/0]=\n");
    scanf("%i", &Y);
    if (Y==1)
    {
        number1075();
    }
    else if (PR1==6)
    {
       number1064();
    }
    else if (PR1!=1)
    {
        number1070();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ KW=\n");
        scanf("%f", &KW);
        number1076();
    }
}

void number1070(void)
{
    if (PR1!=2)
    {
        number1071();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ DKS=\n");
        scanf("%f", &DKS);
        number1076();
    }
}

void number1071(void)
{
    if (PR1!=3)
    {
        number1072();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ MSU=\n");
        scanf("%f", &MSU);
        number1076();
    }
}

void number1072(void)
{
    if (PR1!=4)
    {
        number1073();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ DLZ=\n");
        scanf("%f", &DLZ);
        number1076();
    }
}

void number1073(void)
{
    if (PR1!=5)
    {
        number1093();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ TG=\n");
        scanf("%f", &FU[10]);
        number1074();
    }
}

void number1093(void)
{
    if (PR2!=1)
    {
        number1075();
    }
    else
    {
        printf("«¿ƒ¿…“≈ ÕŒ¬Œ≈ «Õ¿◊≈Õ»≈ KW=\n");
        scanf("%f", &KW);
        number1076();
    }
}

void number1075(void)
{
    printf("«¿ ŒÕ◊≈Õ –¿C◊≈“ œ ¿ – Œ √ ¿ « Œ √ ≈ Õ ≈ – ¿ “ Œ – ¿\n");
}
int main() {
setlocale(LC_ALL, "Russian");
data1=fopen("LAB.DAT","r");
fscanf(data1, "%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f", &LAMP, &RP, &RG, &CP, &ISO, &EP, &SHG, &FO, &Q, &MIP, &KP2, &DW, &NBIX, &FI, &DELT, &DEL, &FU[4], &FU[2], &FU[1], &FU[6], &FU[14], &KK1, &KK2);
fclose(data1);
/*

printf("===============================================\n");
printf(" À ¿ ¡ ¿ – ¿ “ Œ – Õ ¿ ﬂ – ¿ ¡ Œ “ ¿ \n");
printf("===============================================\n");
printf("»ÒÒÎÂ‰Ó‚‡ÌËÂ ‚ÎËˇÌËˇ „ÂÓÏÂÚË˜ÂÒÍËı Ë ÂÊËÏÌ˚ı\n");
printf("Ô‡‡ÏÂÚÓ‚ Ì‡ ÔÓˆÂÒÒ˚ ‚ ËÒÔ‡ËÚÂÎ¸ÌÓÈ Í‡ÏÂÂ\n");
printf(" 3-ı ÍÓÏÔÌÂÌÚÌÓ„Ó Ô‡Ó„‡ÁÓ„ÂÌÂ‡ÚÓ‡\n");
printf(" ◊ËÒÎÂÌÌ˚È ˝ÍÒÔÂÂÏÂÌÚ\n");
printf("\n");

printf("1. ’¿–- » Œ—ÕŒ¬ÕŒ√Œ “ŒœÀ»¬¿ IGOR, IOK, KMO, ALFOK\n");
printf("-------------------------------------------------\n");
printf("IGOR-›Õ“¿À‹œ»ﬂ √Œ–ﬁ◊≈√Œ,IOK-›Õ“¿À‹œ»“»ﬂ Œ »—À»“≈Àﬂ\n");
printf("KMO-—“≈’≈ŒÃ≈“–»◊≈— Œ≈ —ŒŒ“ÕŒÿ≈Õ»≈  ŒÃœŒÕ≈Õ“Œ¬\n");
printf("ALFOK- Œ›‘‘»÷»≈Õ“ »«¡€“ ¿ Œ »—À»“≈Àﬂ\n");
printf("«¿ƒ¿…“≈ ¬»ƒ “ŒœÀ»¬¿, Õ¿  Œ“Œ–ŒÃ –¿¡Œ“¿≈“ œ√√\n");
printf("IOK:\n");
scanf("%f", &IOK);
printf("IGOR:\n");
scanf("%f", &IGOR);
printf("KMO:\n");
scanf("%f", &KMO);
printf("ALFOK:\n");
scanf("%f", &ALFOK);

printf("2. √≈ŒÃ≈“–»◊≈— »≈ –¿«Ã≈–€ œ√√:DK,DKS,DLKC,DLZ,K1,K2\n");
printf("---------------------------------------------------\n");
printf("DK-ƒ»¿Ã≈“–  ¿Ã≈–€,DKS-ƒ»¿Ã≈“–  ŒÀ‹÷¿ —¡–Œ—¿,Ã≈“–\n");
printf("DLKC-ƒÀ»Õ¿ »—œ¿–»“≈À‹ÕŒ…  ¿Ã≈–€ ƒŒ  ŒÀ‹÷¿ —¡–Œ—¿,M\n");
printf("DLZ-ƒÀ»Õ¿ ÷»À»Õƒ–»◊≈— Œ… ◊¿—“» œ√√¡,Ã≈“–\n");
printf("K1,K2-√≈ŒÃ≈“–»ﬂ —ŒœÀŒ¬Œ√Œ Õ¿—¿ƒ ¿,–¿ƒ»¿Õ¿’\n");
printf("«¿ƒ¿…“≈ »’ «Õ¿◊≈Õ»ﬂ\n");
printf("DK:\n");
scanf("%f", &DK);
printf("DKS:\n");
scanf("%f", &DKS);
printf("DLKC:\n");
scanf("%f", &DLKC);
printf("DLZ:\n");
scanf("%f", &DLZ);
printf("K1:\n");
scanf("%f", &K11);
printf("K2:\n");
scanf("%f", &K22);

printf("3. –¿¡Œ◊»≈ ’¿–- » œ√√:P,TG,MSUM,KW,EPSI\n");
printf("---------------------------------------\n");
printf("P-ƒ¿¬À≈Õ»≈ ¬ »—œ¿–»“≈À‹ÕŒ…  ¿Ã≈–≈, Ì/Ï\n");
printf("TG-“≈Ãœ≈–¿“”–¿ √¿«¿, ÂÎ¸‚ËÌ\n");
printf("MSUM-—”ÃÃ¿–Õ€… –¿—’Œƒ œ¿–Œ√¿«¿, Í„/ÒÂÍ\n");
printf("KW-Œ“ÕŒ—»“≈À‹Õ€… –¿—’Œƒ ∆»ƒ Œ—“»\n");
printf("EPSI-—“≈œ≈Õ‹ –¿—ÿ.√¿«¿ ¬ —ŒœÀŒ¬ŒÃ Õ¿—¿ƒ ≈\n");
printf("«¿ƒ¿…“≈ »’ «Õ¿◊≈Õ»ﬂ\n");
printf("P:\n");
scanf("%f", &FU[9]);
printf("TG:\n");
scanf("%f", &FU[10]);
printf("MSUM:\n");
scanf("%f", &MSU);
printf("KW:\n");
scanf("%f", &KW);
printf("EPSI:\n"); //ÌÂÚ epsi ‚ Ó·¸ˇÎÂÌËË ÔÂÂÏÂÌÌ˚ı
scanf("%f", &EPSI);
*/

IGOR=-1948E3;
IOK=1.04;
KMO=14.69;
ALFOK=1.;

DK=80E-3;
DKS=30E-3;
DLKC=0.8;
DLZ=1.2;
K11=-1;
K22=0.268;

FU[9]=5E5;
FU[10]=2380;
MSU=0.3;
KW=15.;
EPSI=10;

IGO=(IGOR+KMO*ALFOK*IOK)/(1+ALFOK*KMO);
P9=FU[9]/1E5;
if (P9<=10)
TET=22.9E5+1935*pow(P9,2)-46.06E3*P9;
else if (P9<=50)
TET=21.42E5+80.68*pow(P9,2)-13.92E3*P9;
else if (P9<=140)
TET=19.68E5+2.54*pow(P9,2)-6.66E3*P9;
else
TET=-43.04E3+19.72E3*pow(P9,2)-83.79*P9;

FF9=FU[9];
FF10=FU[10];
K1=KK1;
K2=KK2;
PR1=0;
PR2=0;
results=fopen("LABREZ.DAT","w");
number1074();
}
