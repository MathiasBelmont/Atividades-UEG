#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
int main(){
	int Um, Dois, Tres, Quatro, Cinco, Seis;
	for (Um = 1; Um <= 60; Um++){
		for (Dois = Um + 1; Dois <= 60; Dois++){
			for (Tres = Dois + 1; Tres <= 60; Tres++){
				for (Quatro = Tres + 1; Quatro <= 60; Quatro++){
					for (Cinco = Quatro + 1; Cinco <= 60; Cinco++){
						for (Seis = Cinco + 1; Seis<=60; Seis++){
							printf("%d %d %d %d %d %d\n", Um, Dois, Tres, Quatro, Cinco, Seis);
							
						}
					}
				}
			}
		}
	}
}
