@interface CSDeviceListener : NSObject

@property (readonly, nonatomic) BOOL onBattery;

+ (id)sharedListener;

- (id)init;

@end
