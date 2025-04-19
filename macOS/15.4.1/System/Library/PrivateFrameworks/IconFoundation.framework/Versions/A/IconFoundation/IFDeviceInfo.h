@interface IFDeviceInfo : NSObject

@property (readonly) int deviceClass;

+ (id)sharedInstance;

- (id)init;

@end
