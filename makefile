main:	main.cpp
	clang++ main.cpp -o main -stdlib=libc++ -march=native -fuse-ld=lld  -Iblaze

clean:	main
	rm main
