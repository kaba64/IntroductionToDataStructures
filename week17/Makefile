CC := g++
TARGET_EXEC := out
CFLAGS  := -Wall
#filename := addone
SRCS := main.cpp
OBJS := main.o
FUNC := $(filename).cpp
OBJF := $(filename).o

$(TARGET_EXEC): $(OBJS) $(OBJF)
	$(CC) $^ -o $@
$(OBJS): $(SRCS)
	$(CC) -c $<
$(OBJF): $(FUNC)
	$(CC) -c $<
clean:
	rm $(OBJS) $(TARGET_EXEC) $(filename).o *~
