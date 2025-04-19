@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (BOOL)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (void)dealloc;
- (id)init;
- (BOOL)isDataAvailableForClassC;

@end
