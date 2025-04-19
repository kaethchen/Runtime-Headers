@interface _LTDANEServiceHardwareProvider : NSObject <_LTDANEServiceDataProvider>

+ (BOOL)isAvailable;
+ (id)subType;
+ (void)logCapabilities;

@end
