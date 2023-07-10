# ifndef UNIFORM_H
# define UNIFORM_H

/// @brief Returns a random uniform number
/// @return double
double unif();

/// @brief A function for returning a random number between a and b
/// @param a : the first number
/// @param b : the last number
/// @return a random number
double unif(double a, double b);

/// @Returns a random integer betweet 1, and a
/// @param a : The last number in the sequence
/// @return a random number between 1 and a
long unif(long a);

/// @brief : setting the seed
void seed();

#endif