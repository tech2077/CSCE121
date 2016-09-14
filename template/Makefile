SOURCES := $(wildcard *.cpp)
OBJS := $(SOURCES:.cpp=.o)
BINS := $(SOURCES:.cpp=)

CXX := g++-6
CXXFLAGS+=-std=c++17 -Wall -Wextra -pedantic -fsanitize=address,undefined

all: $(BINS)

.PHONY: clean

clean:
	$(RM) $(OBJS) $(BINS)
