#include "blk.h"


extern struct blk_dev_struct blk_dev[NR_BLK_DEV];
extern struct request request[NR_REQUEST];
extern struct task_struct * wait_for_request;


/*
 * Add entries as needed. Currently the only block devices
 * supported are hard-disks and floppies.
 */

extern inline void unlock_buffer(struct buffer_head * bh)
{
	/**if (!bh->b_lock)
		printk("DEVICE_NAME: free buffer being unlocked\n");
    bh->b_lock=0;
	wake_up(&bh->b_wait);**/
}


extern inline void end_request(int uptodate)
{
	/**DEVICE_OFF(CURRENT1->dev);
	if (CURRENT1->bh) {
		CURRENT1->bh->b_uptodate = uptodate;
		unlock_buffer(CURRENT1->bh);
	}
	if (!uptodate) {
		printk( "DEVICE_NAME I/O error\n\r");
		printk("dev %04x, block %d\n\r",CURRENT1->dev,
			CURRENT1->bh->b_blocknr);
	}
	wake_up(&CURRENT1->waiting);
	wake_up(&wait_for_request);
	CURRENT1->dev = -1;
	CURRENT1 = CURRENT1->next;**/
}

extern inline void end_request1(int uptodate)
{
	/**DEVICE_OFF(CURRENT1->dev);
	if (CURRENT1->bh) {
		CURRENT1->bh->b_uptodate = uptodate;
		unlock_buffer(CURRENT1->bh);
	}
	if (!uptodate) {
		printk( "DEVICE_NAME I/O error\n\r");
		printk("dev %04x, block %d\n\r",CURRENT1->dev,
			CURRENT1->bh->b_blocknr);
	}
	wake_up(&CURRENT1->waiting);
	wake_up(&wait_for_request);
	CURRENT1->dev = -1;
	CURRENT1 = CURRENT1->next;**/
}

extern inline void end_request2(int uptodate)
{/**
	DEVICE_OFF(CURRENT2->dev);
	if (CURRENT2->bh) {
		CURRENT2->bh->b_uptodate = uptodate;
		unlock_buffer(CURRENT2->bh);
	}
	if (!uptodate) {
		printk("DEVICE_NAME I/O error\n\r");
		printk("dev %04x, block %d\n\r",CURRENT2->dev,
			CURRENT2->bh->b_blocknr);
	}
	wake_up(&CURRENT2->waiting);
	wake_up(&wait_for_request);
	CURRENT2->dev = -1;
	CURRENT2 = CURRENT2->next;**/
}

extern inline void end_request3(int uptodate)
{
	/**DEVICE_OFF(CURRENT3->dev);
	if (CURRENT3->bh) {
		CURRENT3->bh->b_uptodate = uptodate;
		unlock_buffer(CURRENT3->bh);
	}
	if (!uptodate) {
		printk("DEVICE_NAME I/O error\n\r");
		printk("dev %04x, block %d\n\r",CURRENT3->dev,
			CURRENT3->bh->b_blocknr);
	}
	wake_up(&CURRENT3->waiting);
	wake_up(&wait_for_request);
	CURRENT3->dev = -1;
	CURRENT3 = CURRENT3->next;**/
}
