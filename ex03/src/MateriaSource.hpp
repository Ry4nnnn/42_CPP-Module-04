#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define MAX_MAT 4

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_materia[MAX_MAT];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &a);
		MateriaSource	&operator=(const MateriaSource &a);
		~MateriaSource();

		void	learnMateria(AMateria *aMateria);
		AMateria	*createMateria(std::string const &type);
};

#endif