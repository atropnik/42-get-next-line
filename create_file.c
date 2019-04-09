// perms arg is usually 0 for uses of open only?

// int	creat(char *name, int perms);

// fd = creat(name, perms);

#include <fcntl.h>
#include <unistd.h>
#define PERMS 0666 /* RW for owner, group, others */
#define BUFSIZE 4096

// utils
size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

void	ft_puterror(char *str)
{
	write(2, str, ft_strlen(str));
}

/* cp: copy f1 to f2 */
int		main(int argc, char **argv)
{
	int f1, f2, n;
	char buf[BUFSIZE];

	if (argc != 3)
		ft_puterror("Usage: cp from to");
	if ((f1 = open(argv[1], O_RDONLY, 0)) == -1)
		ft_puterror("cp: cannot open");
	if ((f2 = creat(argv[2], PERMS)) == -1)
		ft_puterror("cp: cannot create");
	while ((n = read(f1, buf, BUFSIZE)) > 0)
		if (write(f2, buf, n) != n)
			ft_puterror("cp: write error on file %s");
	return (0);
}
