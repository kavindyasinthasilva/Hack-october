#include <stdio.h>
#include <stdlib.h>

int abs (int n){
	if (n>= 0)
		return n;
		
	else
		return (-n);
	}
	
void sort (int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n-1; i++) 
		for (j = i+1; j < n; j++) 
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				}
				
/*	printf ("\nOrder: ");
	for (i = 0; i < n; i++)
		printf ("%d, ", arr[i]);
*/	}

void fcfs (int req[], int n, int hp){
	int i, res = 0;
	res = abs (req[0] - hp);
	for (i = 1; i < n; i++)
		res += abs (req[i] - req[i-1]);
		
	printf ("\nTotal head movement: %d", res);
	}
	
void scan (int req[], int n, int hp, int h, int l){
	int i, res = 0, j, k;
	sort (req, n);
	
	for (i = 0; i < n; i++) 
		if (req[i] >= hp) {
			res = abs (req[i] - hp);
			break;
			}
	printf ("\n%d", i);
			
	for (j = i+1; j < n; j++) 
		res += abs (req[j] - req[j-1]);
		
	res += abs (h - req[n-1]);
	res += abs (h - req[i-1]);
	
	for (k = i-1; k > 0; k--)
		res += abs (req[k] - req[k-1]);
		
	printf ("\nTotal head movement: %d", res);
	}
	
void cscan (int req[], int n, int hp, int h, int l){
	int i, res = 0, j, k;
	sort (req, n);
	
	for (i = 0; i < n; i++)
		if (req[i] >= hp) {
			res = abs (req[i] - hp);
			break;
		}
	printf ("\n%d", i);		
		
	for (j = i+1; j < n; j++)
		res += abs (req[j] - req[j-1]);
		
	res += abs (h - req[n-1]);
	res += (h-l);
	res += abs (req[0] - l);
	
	for (k = 1; k < i; k++)
		res += abs (req[k] - req[k-1]);
		
	printf ("\nTotal head movement: %d", res);
	}
	
void main (){
	int request[20], hp, h, l, n, i, req[20], ch = 1;
	
	printf  ("\nEnter headpointer location, upper and lower limit of cylindder: ");
	scanf ("%d %d %d", &hp, &h, &l);
	
	printf ("\nEnter no of requests: ");
	scanf ("%d", &n);
	
	printf ("\nEnter requests: ");
	for (i = 0; i < n; i++) 
		
		scanf ("%d", &request[i]);
	
	while (ch != 4) {
		for (i = 0; i < n; i++)
			req[i] = request[i];
		
		printf ("\n\tMENU: \n1. FCFS \n2. SCAN \n3. C-SCAN \n4. EXIT \nEnter ch:");
		scanf ("%d", &ch);
		
		switch (ch) {
			case 1: fcfs (req, n, hp);
				break;
				
			case 2: scan (req, n, hp, h, l);
				break;
				
			case 3: cscan (req, n, hp, h, l);
				break;
				
			case 4: exit (0);
				break;
				
			default: printf ("\nWrong choice");
			}
		}
	}
