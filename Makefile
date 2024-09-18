# Define el objetivo por defecto
all: clean

clean:
    # Encuentra y elimina todos los archivos que son ejecutables y no tienen extensión
	@clear
	@find . -type f -executable -not -name '*.*' -exec rm {} +
	@echo "\033[0;32mEjecutables de c++ eliminados!\033[0m"

.PHONY: clean
