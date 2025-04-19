@interface WLKLaunchConfiguration : NSObject

@property (nonatomic) BOOL useSharedURLSession;
@property (nonatomic) BOOL alwaysPrefetchAppConfiguration;

+ (id)sharedInstance;

@end
