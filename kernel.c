#define VGA_MEMORY 0xb8000
#define FILL 0x0f

int
kmain ()
{
  char msg[] = "sapatinhos v0.64";
  char* vga = (char *)VGA_MEMORY;
  int i = -1;
 
  while (msg[++i])
    {
      vga[2*i] = msg[i];
      vga[2*i + 1] = FILL; 
    }
    
    while(1){} 
}
