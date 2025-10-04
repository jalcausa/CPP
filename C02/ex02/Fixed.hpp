#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const num);
		Fixed(float const num);
		Fixed &operator=(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		bool operator>(const Fixed &copy) const;
		bool operator<(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;

		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif