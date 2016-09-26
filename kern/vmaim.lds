ENTRY(master_early_entry)
SECTIONS
{
 . = 0x20000;
        .text :
        {
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
