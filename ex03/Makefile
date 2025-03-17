CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = Materia

SRCS = AMateria.cpp \
		Character.cpp \
		Ice.cpp \
		Cure.cpp \
		main.cpp \
		MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I ./includes

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all