# compiler
CXX := g++

# diretórios
INCDIR := ./include/core
SRCDIR := ./src/core
OBJDIR := ./obj/core
BINDIR := ./bin
INCDIR := ./

# flags de compilação
CXXFLAGS := -I$(INCDIR) -MMD

SRC := $(wildcard $(SRCDIR)/*.cpp)
OBJ := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
DEPS := $(OBJ:.o=.d)

-include $(DEPS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(BINDIR)/programa: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f $(BINDIR)/programa $(OBJ) $(DEPS)

