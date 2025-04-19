@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject

@property (readonly, nonatomic) BOOL walletAccessoryConnected;
@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (void)dealloc;
- (id)init;

@end
