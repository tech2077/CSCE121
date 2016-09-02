SOURCES := $(wildcard *.cpp)
OBJS := $(SOURCES:.cpp=.o)
BINS := $(SOURCES:.cpp=)

CC := g++
CXXFLAGS+=-std=c++17 -Wall -Wextra -pedantic -fsanitize=address,undefined

all: $(BINS)

.PHONY: clean

clean:
	$(RM) $(OBJS) $(BINS)