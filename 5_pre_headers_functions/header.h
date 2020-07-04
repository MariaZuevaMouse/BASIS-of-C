
int isPrime(int number) {

	int d = 0, i = 1;
	while (i <= number) {
		if (number%i++ == 0)
			d++;
		else
		{
			continue;
		}
		if (d == 3)break;
	}
	//if (d == 2) return 1; else return 0;
	//returt (d==2) ? 1: 0;
	return (d == 2);
}

