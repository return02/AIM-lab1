ENTRY(_start)
SECTIONS
{
        . = 0x7c00;
        .text :
        {
  *bootasm.o(.text)
           *(.text);
        }
        .data :
 {
  *(.data);
 }
        .bss :
        {
  *(.bss)
 }
        _end = .;
}
