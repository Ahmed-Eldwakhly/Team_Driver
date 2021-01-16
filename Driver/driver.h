#define GPIOA_base		(unsigned long)0x40010800
#define RCC_base			(unsigned long)0x40021000


#define GPIOA_CRL			(*( (volatile unsigned long*)(GPIOA_base + 0x00) ))
#define GPIOA_CRH			(*( (volatile unsigned long*)(GPIOA_base + 0x04) ))
#define GPIOA_IDR			(*( (volatile unsigned long*)(GPIOA_base + 0x08) ))
#define GPIOA_ODR			(*( (volatile unsigned long*)(GPIOA_base + 0x0C) ))

#define RCC_APB2ENR		(*( (volatile unsigned long*)(RCC_base + 0x18) ))

#define PA	0

//dir
#define I			0
#define O10		1
#define O2		2
#define O50		3

//conf
#define I_AN	0
#define I_F		1
#define I_PP	2
#define I_res	3

#define O_GP_PP		0
#define O_GP_OD		1
#define O_AF_PP		2
#define O_AF_OD		3


void INIT_GPIO(unsigned short port, unsigned short pin, unsigned short dir, unsigned short config);

void W_PIN(unsigned short port,unsigned short pin,unsigned short value);

unsigned short R_PIN(unsigned short port, unsigned short pin);





