UNAME_S  := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
CC       := cc
else
CC       := gcc
endif
CFLAGS   := -Wall -Wextra -O2 -std=c11 -Iinclude
LDFLAGS  :=

SRCS     := $(shell find src -name '*.c')
OBJS     := $(SRCS:src/%.c=build/%.o)
BIN      := bin/perceptron



all: $(BIN)

$(BIN): $(OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

debug: CFLAGS += -g -O0
debug: clean all

release: CFLAGS += -O3
release: clean all

clean:
	rm -rf build

fclean: clean
	rm -rf bin

.PHONY: all clean fclean debug release