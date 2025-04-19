@class NSDictionary;

@interface LNAvailabilityChecker : NSObject

@property (readonly, nonatomic) NSDictionary *availabilityAnnotations;

+ (BOOL)isInternalInstall;
+ (id)currentBuildVersion;

- (void).cxx_destruct;
- (id)currentSystemVersion;
- (BOOL)availableForCurrentPlatformVersion;
- (id)initWithAvailabilityAnnotations:(id)a0;
- (id)availabilityWithPlatform:(id)a0 platformVersion:(id)a1;
- (id)currentPlatformName;

@end
