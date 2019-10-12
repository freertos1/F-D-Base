#include "stdint.h"
#include "stm32port.h" //provide the context swich function
#include "task.h"
#include "core.h"

void schemdul();
void creattask(Function_t f1,u8_t priority,u8_t timepriority);
void abs_schemdule();
void mo_schemdule();


