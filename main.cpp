#include <iostream>
#include <bits/stdc++.h>
#include <conio.H>
//#define STD 3
//#define SUB 2

using namespace std;

int main()
{
    int STD,SUB;
    cout<<"enter student numbers: ";
    cin>> STD;
    cout<<"enter subjects numbers: ";
    cin>> SUB;

    float marks[STD][SUB];
    int i,j,ran=0,index=0;
    char oper;
    for (i=0; i<STD; i++)
    {
        for (j=0; j<SUB; j++)
        {
            cout<< " enter marks for subj no " << j+1 << ":";
            cin>> marks[i][j];
        }
    }
    do
    {
        float totals[STD]= {0};
        float avg[SUB]= {0};
        cout<< "\nenter t for total of marks, a for each subject average or e for exit: ";
        cin>> oper;

        switch (oper)
        {
        case 't':
            for (i=0; i<STD; i++)
            {
                for (j=0; j<SUB; j++)
                    totals[i]+=marks[i][j];
            }
// print totals
            for (i=0; i<STD; i++)
            {
                cout<< "\nStudent no "<<i+1<<" : "<<totals[i];
                if (totals[i]>ran)
                {
                    ran=totals[i];
                    index=i;
                }
            }
            cout<< "\nFirst Student is No. "<<index+1<<" and get "<<ran;

            break;

        case 'a':
            for (j=0; j<SUB; j++)
            {

                for (i=0; i<STD; i++)
                    avg[j]+=marks[i][j];

            }
            // print avg
            for (j=0; j<SUB; j++)
            {

                cout<< "\n average of subj. No "<< j+1<< " is "<< avg[j]/STD;
            }

            break;

        default:
            cout << "invalid";
        }
    }
    while (oper!='e');

    return 0;
}
