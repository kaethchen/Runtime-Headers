@interface LACBATS : NSObject

@property (readonly, nonatomic) BOOL wasLaunchedByBATS;
@property (readonly, nonatomic) BOOL isRunningInBATS;

+ (id)sharedInstance;
+ (BOOL)_isBATSEnvironmentSet;

- (id)init;

@end
