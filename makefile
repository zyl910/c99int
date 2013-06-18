# flags
CC = gcc
CFS = -Wall

# args
RELEASE =0
UNICODE =0
BITS =
CFLAGS =

# [args] ����ģʽ. 0����debugģʽ, 1����releaseģʽ. make RELEASE=1.
ifeq ($(RELEASE),0)
	# debug
	CFS += -g
else
	# release
	CFS += -O3 -DNDEBUG
	//CFS += -O3 -g -DNDEBUG
endif

# [args] UNICODEģʽ. 0����ansiģʽ, 1����unicodeģʽ. make UNICODE=1.
ifeq ($(UNICODE),0)
	# ansi
	CFS +=
else
	# unicode
	CFS += -D_UNICODE -DUNICODE
endif

# [args] ����λ��. 32����32λ����, 64����64λ����, ����Ĭ��. make BITS=32.
ifeq ($(BITS),32)
	CFS += -m32
else
	ifeq ($(BITS),64)
		CFS += -m64
	else
	endif
endif

# [args] ʹ�� CFLAGS ����µĲ���. make CFLAGS="-mavx".
CFS += $(CFLAGS)


.PHONY : all clean

# files
TARGETS = c99int
OBJS = c99int.o

all : $(TARGETS)

c99int : $(OBJS)
	$(CC) -o $@ $^ $(CFS)


c99int.o : c99int.c
	$(CC) -c $< $(CFS)


clean :
	rm -f $(OBJS) $(TARGETS) $(addsuffix .exe,$(TARGETS))
