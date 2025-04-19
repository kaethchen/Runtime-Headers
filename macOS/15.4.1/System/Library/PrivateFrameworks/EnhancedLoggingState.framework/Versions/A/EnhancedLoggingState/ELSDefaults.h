@interface ELSDefaults : NSObject

@property (readonly, nonatomic) unsigned long long cloudKitEnvironment;

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)_getCloudKitEnvironment;

@end
