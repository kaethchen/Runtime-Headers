@interface CLPermissiveTimer : CLTimer

- (void)invalidate;
- (void)dbgAssertInside;
- (void)shouldFire;

@end
