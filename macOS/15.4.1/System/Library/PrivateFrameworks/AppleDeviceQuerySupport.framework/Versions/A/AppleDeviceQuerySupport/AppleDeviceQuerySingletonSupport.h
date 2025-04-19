@interface AppleDeviceQuerySingletonSupport : NSObject

+ (id)sharedInstance;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)initData;

@end
