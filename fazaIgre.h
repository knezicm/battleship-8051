#ifndef FAZA_IGRE_H_
#define FAZA_IGRE_H_

const enum fazeIgranja
{
    USPOSTAVLJANJE_KONEKCIJE = 0,
    SETOVANJE_BRODOVA,
    CEKANJE_SETOVANJA_PROTVNIKA,
    GADJANJE,
    PRIHVATANJE_POGOTKA,
    KRAJ_POBJEDA,
    KRAJ_IZGUBIO,
    CEKANJE_ODGOVORA
};

void initFazeIgre();

#endif
