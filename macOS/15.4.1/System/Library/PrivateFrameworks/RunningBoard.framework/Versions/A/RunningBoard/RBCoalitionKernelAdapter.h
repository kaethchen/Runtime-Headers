@interface RBCoalitionKernelAdapter : NSObject <RBCoalitionKernelAdapting>

- (long long)applyCoalitionWithID:(unsigned long long)a0 coalitionLevel:(unsigned long long)a1;
- (long long)coalitionInfoForPID:(int)a0 outCoalitionInfo:(out struct coalition_info { unsigned long long x0; unsigned long long x1; BOOL x2; } *)a1;
- (unsigned long long)coalitionLevelForID:(unsigned long long)a0;

@end
