#include "idt.h"
#include "device.h"

// static struct idt_entry idt[NUM_IRQS];

void init_idt(void)
{
	// Future implementation
}

void interrupt_handler(struct cpu_state cpu,
					   struct stack_state stack,
					   unsigned int irq)
{
	(void)cpu;	 // Mark as unused to suppress warnings
	(void)stack; // Mark as unused to suppress warnings
	(void)irq;	 // Mark as unused to suppress warnings

	unsigned char s1[] = "executing IRQ...";
	dev_write(0, s1, sizeof(s1));
}