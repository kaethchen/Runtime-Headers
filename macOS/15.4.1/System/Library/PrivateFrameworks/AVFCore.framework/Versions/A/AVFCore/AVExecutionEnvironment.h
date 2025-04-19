@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (id)currentPlatformIdentifier;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (id)sharedExecutionEnvironment;

@end
