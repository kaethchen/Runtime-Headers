@interface MXInitialization : NSObject

+ (void)initialize;
+ (void)start;
+ (void)notifyMXIsFullyInitialized;
+ (void)waitUntilMXIsFullyInitialized;

@end
