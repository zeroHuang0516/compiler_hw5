float test(int aa, float bb)
{
	float dd;
	dd = aa + bb;
	return dd;
}

int main()
{
	float c = 3;
	write(test(3, 3));
	write("\n");
	write(test(6, 3.0));
	write("\n");
	write(test(6,3));
	write("\n");
	write(test(6, c));
	write("\n");
	return 0;
}
