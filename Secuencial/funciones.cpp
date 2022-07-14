#include "funciones.h"
#include <iostream>
#include<fstream>
#include<sstream>
#include <math.h>

using namespace std;


//string correctas[12];

string correctas[12] = {"\"A\"","\"E\"","\"C\"","\"B\"","\"B\"","\"D\"","\"A\"","\"B\"","\"E\"","\"C\"","\"B\"","\"D\""};
//string correctas[0]={"\"A\""};
//Correctas[1] = "\"E\"";
//Correctas[2] = "\"C\"";
//Correctas[3] = "\"B\"";
//Correctas[4] = "\"B\"";
//Correctas[5] = "\"D\"";
//Correctas[6] = "\"A\"";
//Correctas[7] = "\"B\"";
//Correctas[8] = "\"E\"";
//Correctas[9] = "\"C\"";
//Correctas[10] = "\"B\"";
//Correctas[11] = "\"D\"";




void puntaje_total(string estudiante[])
{
    int Rcorrectas = 0;
    int Rincorrectas = 0;
    int Romitidas = 0;
    float puntaje = 0; 
    for(int i=1;i<13;i++)
    {
        if(estudiante[i] == correctas[i-1])
        {
            correctas++;
        }
        else
        {
            if(estudiante[i] == "\"-\"") 
            {
                Romitidas++;
            }
            else
            {
                Rincorrectas++;
            }  
        }
    }
    puntaje = (Rcorrectas*0.5)-(Rincorrectas*0.12);
}

void matematicas(string estudiante[])
{
    //fstream CreateFile("matematicas.csv",ios::out);
    //CreateFile<<"Token estudiante;Puntaje matematicas;Puntaje"<<endl;
    int RMcorrectas = 0;
    int RMincorrectas = 0;
    int RMomitidas = 0;
    float Mpuntaje = 0; 
    for(int i=1;i<5;i++)
    {
        if(estudiante[i] == correctas[i-1])
        {
            RMcorrectas++;
        }
        else
        {
            if(estudiante[i] == "\"-\"") 
            {
                RMomitidas++;
            }
            else
            {
                RMincorrectas++;
            }  
        }
    }
    Mpuntaje = (RMcorrectas*0.5)-(RMincorrectas*0.12);
}

void ciencias(string estudiante[])
{
    //fstream CreateFile("ciencias.csv",ios::out);
    //CreateFile<<"Token estudiante;Puntaje ciencias;Puntaje"<<endl;
    int RCcorrectas = 0;
    int RCincorrectas = 0;
    int RComitidas = 0;
    float Cpuntaje = 0; 
    for(int i=5;i<9;i++)
    {
        if(estudiante[i] == correctas[i-1])
        {
            RCcorrectas++;
        }
        else
        {
            if(estudiante[i] == "\"-\"") 
            {
                RComitidas++;
            }
            else
            {
                RCincorrectas++;
            }  
        }
    }
    Cpuntaje = (RCcorrectas*0.5)-(RCincorrectas*0.12);
}

 void humanidades(string estudiante[])
 {
    //fstream CreateFile("humanidades.csv",ios::out);
    //CreateFile<<"Token estudiante;Puntaje humanidades;Puntaje"<<endl;
    int RHcorrectas = 0;
    int RHincorrectas = 0;
    int RHomitidas = 0;
    float Hpuntaje = 0; 
    for(int i=9;i<13;i++)
    {
        if(estudiante[i] == correctas[i-1])
        {
            RHcorrectas++;
        }
        else
        {
            if(estudiante[i] == "\"-\"") 
            {
                RHomitidas++;
            }
            else
            {
                RHincorrectas++;
            }  
        }
    }
    Hpuntaje = (RHcorrectas*0.5)-(RHincorrectas*0.12);
 }