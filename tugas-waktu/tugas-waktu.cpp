#include <stdio.h>
#include <time.h>
#include <string.h>

void tampilkan_kalender() {

	 time_t DETIK;
	 struct tm *info;
   char buffer[100];
	 char HARI[50];

	 time( &DETIK ); 
	 info = localtime( &DETIK );
   strftime(buffer,100," %d %B %Y - %H:%M:%S", info);

	strftime(HARI,50,"%A", info);
	if ( strcmp(HARI,"Monday") == 0 ) {
			printf("\n Hari ini adalah SENIN \n");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Tuesday") == 0 ) {
			printf("\n Hari ini adalah SELASA,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Wednesday") == 0 ) {
			printf("\n Hari ini adalah RABU,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Thursday") == 0 ) {
			printf("\n Hari ini adalah KAMIS,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Friday") == 0 ) {
			printf("\n Hari ini adalah JUM'AT,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Saturday") == 0 ) {
			printf("\n Hari ini adalah SABTU,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Sunday") == 0 ) {
			printf("\n Hari ini adalah MINGGU,");
			printf("%s |\n", buffer );
	}

}
int main ()
{
  time_t AWAL=0, AKHIR=0;

	time( &AWAL );
	while (1) {
		time( &AKHIR );
		if ( AKHIR - AWAL > 0 ) {
			tampilkan_kalender();
			AWAL = AKHIR;
		}


	}

   return(0);
}
