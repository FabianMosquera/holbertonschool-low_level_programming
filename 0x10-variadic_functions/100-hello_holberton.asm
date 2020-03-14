title helloWorld

include Irvine32.Inc

.data
msg byte "Hello, Holberton", 0

.code
main proc
	      mov edx, offset msg
	      call writestring
        
     exit
main endp
     end main
