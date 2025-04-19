@interface RBMutableProcessAppNapState : RBProcessAppNapState

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setInactive:(BOOL)a0;
- (void)setPreventBackgroundSockets:(BOOL)a0;
- (void)setPreventDiskThrottle:(BOOL)a0;
- (void)setPreventLowPriorityCPU:(BOOL)a0;
- (void)setPreventSuppressedCPU:(BOOL)a0;
- (void)setPreventTimerThrottle:(unsigned char)a0;
- (void)unionState:(id)a0;

@end
