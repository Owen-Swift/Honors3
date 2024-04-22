section .text
	global _start
	
_start:
	mov eax, 1
	int 0x80
	
section .data
	nums dd 1,2,3,4,5,6,7,8,9,10