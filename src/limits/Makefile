CC = cc
override CFLAGS += -Wall -g -O0
override LIBS +=-lc
SOURCE := $(wildcard $(TARGET)/*.c)
OBJS := $(patsubst %.c, %.o, $(SOURCE))
BIN = $(shell pwd)/bin

$(OBJS): $(SOURCE)
	$(CC) $(INCLUDE) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	@mkdir -p $(BIN)
	@echo $(SOURCE)
	$(CC) $(INCLUDE) $(LIBS) $< -o $(BIN)/$@

.PHONY: sysconf_limit
