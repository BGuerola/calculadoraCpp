# Variables
CXX := g++
SRCDIR := .
BUILDDIR := build
TARGET := calculadora
LIBS := -lsfml-graphics -lsfml-window -lsfml-system
INCDIR := include
CXXFLAGS := -std=c++11 -Wall -I$(INCDIR)

# Archivos fuente
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)

# Archivo de fuente para la fuente Arial
FONT_SOURCE := arial.ttf

# Directorio de destino para el archivo de fuente
FONT_DEST_DIR := $(BUILDDIR)

# Compilación
$(BUILDDIR)/$(TARGET): $(OBJS) copy_font
	@mkdir -p $(@D)
	$(CXX) $(OBJS) -o $@ $(LIBS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Regla para copiar la fuente Arial
copy_font:
	@mkdir -p $(FONT_DEST_DIR)
	@cp $(FONT_SOURCE) $(FONT_DEST_DIR)/$(FONT_SOURCE)

# Limpieza
clean:
	@rm -rf $(BUILDDIR)

.PHONY: clean copy_font