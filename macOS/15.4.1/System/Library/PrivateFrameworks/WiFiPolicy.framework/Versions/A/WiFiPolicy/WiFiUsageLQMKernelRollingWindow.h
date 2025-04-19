@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (void)initialize;
+ (void)addSample:(id)a0 To:(id)a1;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;
+ (BOOL)isOngoing;
+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;
+ (unsigned long long)parseKernelBlobInto:(id)a0;

@end
