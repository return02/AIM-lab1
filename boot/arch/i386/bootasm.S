/* Copyright (C) 2016 David Gao <davidgao1001@gmail.com>
 *
 * This file is part of AIM.
 *
 * AIM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AIM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef HAVE_CONFIG_H
#define HAVE_CONFIG_H
#endif

#ifdef HAVE_CONFIG_H
#include <config.h>
#include "mmu.h"
#include "asm.h"
#endif /* HAVE_CONFIG_H */

.globl _start

.code16
_start:
	cli
	xorw %ax,%ax
	movw %ax,%ds
	movw %ax,%es
	movw %ax,%ss
seta201:
	inb $0x64, %al
	testb $0x2, %al
	jnz seta201

	movb $0xd1, %al
	outb %al, $0x64

seta202:
	inb $0x64, %al
	testb $0x2, %al
	jnz seta202

	movb $0xdf, %al
	outb %al, $0x60

	lgdt gdtdesc
	movl %cr0, %eax
	orl $CR0_PE, %eax
	movl %eax, %cr0

	ljmp $(SEG_KCODE<<3), $start32

.code32
start32:
	movw $(SEG_KDATA<<3), %ax
	movw %ax,%ds
	movw %ax,%es
	movw %ax,%ss
	
	movw $0x0, %ax
	movw %ax,%fs
	movw %ax,%gs
	
	movl $_start, %esp
	call bootmain
	
/*	movw $0x8a00, %ax
	movw %ax, %dx
	outw %ax, %dx
	movw $0x8ae0, %ax 
	outw %ax, %dx
spin:
	jmp  spin*/

.p2align 2
gdt:
	SEG_NULLASM
	SEG_ASM(STA_X|STA_R, 0x0, 0xffffffff)
	SEG_ASM(STA_W, 0x0, 0xffffffff)

gdtdesc:
	.word   (gdtdesc - gdt - 1)
	.long   gdt 
