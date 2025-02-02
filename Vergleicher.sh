#!/bin/bash

#Benutzung: Vergleicher.sh <VERZEICHINS_SAPPEUR_PROJEKT>

export SPR_VERGLEICHER_VERZ=$1

ls *ad *ai *m4|xargs -n1 ./VergleicherEinzeln.sh 
cd testDaten
export SPR_VERGLEICHER_VERZ=../$1/testDaten
ls * |xargs -n1 ../VergleicherEinzeln.sh 
