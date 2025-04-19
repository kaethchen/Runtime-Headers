@interface AppleDeviceQuerySingletonArmory : NSObject

+ (id)sharedInstance;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)initData;

@end
