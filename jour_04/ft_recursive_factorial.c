int	ft_recursive_factorial(int nb)
{
  if (!nb)
    return (0);
  if (nb <= 1)
    return (1); 
  return (nb * ft_recursive_factorial(nb - 1));
}