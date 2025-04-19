@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringChainObserverPredicate : BKSHIDEventDeferringChainObserverPredicate

@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnvironment:(id)a0;
- (void)setDisplay:(id)a0;

@end
