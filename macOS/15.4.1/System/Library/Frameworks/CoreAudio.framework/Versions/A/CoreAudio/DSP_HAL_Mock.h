@interface DSP_HAL_Mock : NSObject

+ (BOOL)hasTestHooks;
+ (unsigned int)mockDSPPropertyCooldownMilliseconds;
+ (void)setTestHooks:(void *)a0;

- (id)createFactory:(int)a0;

@end
