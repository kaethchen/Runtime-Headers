@interface BitmapRetriever : NSObject

+ (id)sharedInstance;

- (id)_getActivityBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 format:(int)a3 interface:(unsigned char)a4;
- (id)_getActivityBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 interface:(unsigned char)a4;
- (id)_rolledActivityBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 format:(int)a3 interface:(unsigned char)a4;
- (void)dumpActivityBitmap;
- (void)enumerateActivityBitmapsOnInterface:(unsigned char)a0 usingBlock:(id /* block */)a1;
- (void)getActivityBitmapsWithNames:(id)a0 currMachAbsTime:(unsigned long long)a1 startTime:(unsigned long long)a2 endTime:(unsigned long long)a3 options:(id)a4 reply:(id /* block */)a5;
- (void)tallyUpActivityBitmapsForInterface:(unsigned char)a0 queue:(id)a1 replyQueue:(id)a2 reply:(id /* block */)a3;

@end
