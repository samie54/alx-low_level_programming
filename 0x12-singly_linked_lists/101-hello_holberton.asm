section			.text
         global    main
         extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret

format             .data
       message db `Hello, Holberton\n`,0xa, 0
