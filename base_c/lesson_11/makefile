# Компилятор и флаги
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = 

# Имz исполняемого файла
TARGET = program.exe

# Директории
SRC_DIR = src
BUILD_DIR = build

# Исходные файлы
SRCS = 	$(SRC_DIR)/main.c $(SRC_DIR)/temp_api.c
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# Основная цель по умолчанию
all: $(BUILD_DIR) $(TARGET)

# Создание директории для объектных файлов
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Сборка основного приложения
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# Компиляция .c файлов в .o файлы
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Правило для запуска приложения
run: $(TARGET)
	./$(TARGET)

# Правило для очистки
clean:
	rm -rf $(BUILD_DIR) $(TARGET) $(TARGET_TEST)

# Правило для пересборки
rebuild: clean all

# Правило для отладки (добавляем флаг -g)
debug: CFLAGS += -g
debug: clean all

# Правило для релизной сборки (оптимизация)
release: CFLAGS += -O2 -DNDEBUG
release: clean all

# Файлы зависимостей (для автоматического пересоздания при изменении .h файлов)
-include $(OBJS:.o=.d)

# Генерация зависимостей
$(BUILD_DIR)/%.d: $(SRC_DIR)/%.c
	@mkdir $(BUILD_DIR)
	@$(CC) $(CFLAGS) -MM -MT "$(BUILD_DIR)/$*.o $(BUILD_DIR)/$*.d" $< > $@

# Справка
help:
	@echo "Доступные команды:"
	@echo "  mingw32-make all       - собрать проект (по умолчанию)"
	@echo "  mingw32-make run       - собрать и запустить"
	@echo "  mingw32-make clean     - очистить проект"
	@echo "  mingw32-make rebuild   - полная пересборка"
	@echo "  mingw32-make debug     - собрать с отладочной информацией"
	@echo "  mingw32-make release   - собрать с оптимизацией"
	@echo "  mingw32-make help      - показать эту справку"

.PHONY: all run clean rebuild debug release help