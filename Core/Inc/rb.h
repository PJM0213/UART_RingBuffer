/*
 * rb.h
 *
 *  Created on: Feb 15, 2023
 *      Author: wjdan
 */

#ifndef INC_RB_H_
#define INC_RB_H_

#ifdef __cplusplus

extern "C"
{
#endif

// buffer type
typedef struct{
    unsigned short size; // serial buffer in bytes (power 2)
    unsigned short wrIdx;
    unsigned short rdIdx;
    unsigned char *data;
} RingFifo_t;

extern unsigned char RB_init(RingFifo_t * ptRB, unsigned short size);
extern void RB_clear(RingFifo_t * ptRB);
extern void RB_write(RingFifo_t * ptRB, unsigned char data);
extern unsigned char RB_read(RingFifo_t * ptRB);
extern unsigned char RB_isempty(RingFifo_t * ptRB);
extern unsigned char RB_isfull(RingFifo_t * ptRB);
extern unsigned short RB_count(RingFifo_t * ptRB);

#ifdef __cplusplus

}

#endif

#endif /* INC_RB_H_ */
