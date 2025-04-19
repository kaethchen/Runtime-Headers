@interface PXDelayEventCoalescer : PXEventCoalescer

- (id)init;
- (id)initWithDelay:(double)a0;
- (void)inputEvent;
- (void)_handleTimer;

@end
