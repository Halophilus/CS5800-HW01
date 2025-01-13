.PHONY = clean

all: bin rec_bin

bin: binary.cpp
	g++ binary.cpp -o binary
rec_bin: rec_binary.cpp
	g++ rec_binary.cpp -o rec_binary

clean:
	rm -f binary rec_binary
