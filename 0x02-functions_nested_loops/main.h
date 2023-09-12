int pc(char);

int pc(char c)
{
	return (write(1, &c, 1));
}
