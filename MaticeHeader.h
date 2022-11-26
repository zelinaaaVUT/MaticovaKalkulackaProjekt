#pragma once

void UlozeniDoSouboru();
int NacteniZeSouboru(int PoradiMaticeVSouboru,int matice[10][10]);
void VytvoreniMatice(int velikost, int matice[10][10]);
void VypsaniMatice(int velikost, int matice[10][10]);
void SoucetMatic(int velikost, int maticeA[10][10], int maticeB[10][10]);
void RozdilMatic(int velikost, int maticeA[10][10], int maticeB[10][10]);
void NasobeniSkalarem(int velikost, int maticeJedna[10][10], int skalar);
void NasobeniMatic(int velikost, int maticeJedna[10][10], int maticeDva[10][10]);
void DeterminantMatice(int velikost, int maticeJedna[10][10]);
void VypsaniSouboru(int matice[10][10]);