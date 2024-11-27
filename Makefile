DATE := $(shell date +%Y-%m-%d)  # Obtiene la fecha en formato YYYY-MM-DD
MESSAGE := "Commit del día $(DATE)"  # Mensaje del commit

all: clean

clean:
    # Encuentra y elimina todos los archivos que son ejecutables y no tienen extensión
	@clear
	@find . -type f \( -executable -not -name '*.*' -o -name 'a.out' \) -exec rm -rf {} +
	@echo "\033[0;32mEjecutables de c++ eliminados!\033[0m"

git:
	@clear
	@git add .
	@git commit -m $(MESSAGE)
	@git push
	@echo "\033[0;32mCodigo subido a GitHub!\033[0m"

.PHONY: clean git
