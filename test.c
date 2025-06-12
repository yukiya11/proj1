#include <signal.h>
#include <stdio.h>
int main(){
	int prc;
	scanf("%d",&prc);
	kill(prc,SIGUSR1);
	return 0;
}
