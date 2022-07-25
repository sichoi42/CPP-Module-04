/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:33:28 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/25 17:00:17 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	test1(void)
{
	const Cat a;
	Cat b;

	b = a;
	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << std::endl;
	a.makeSound();
	b.makeSound();
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
}

void	test2(void)
{
	Animal	*a[10];

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Index " << i << std::endl;
		if (i & 1)
		{
			a[i] = new Dog();
		}
		else
		{
			a[i] = new Cat();
		}
	}
	Dog *d = new Dog(*dynamic_cast<Dog *>(a[1]));
	d->getBrain()->setIdea(0, "I want to get bone!");
	std::cout << d->getBrain()->getIdea(0) << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Index " << i << std::endl;
		delete a[i];
	}
	std::cout << "Delete Copied Dog" << std::endl;
	delete d;
}

int	main(void)
{
	test1();
	// test2();
	return (0);
}
