@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {
    NSString *_bundleIdentifier;
    UISApplicationStateClient *_client;
}

@property (nonatomic, setter=_setUsesBackgroundNetwork:) BOOL _usesBackgroundNetwork;
@property (nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
@property (copy, nonatomic) id badgeValue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_setMinimumBackgroundFetchInterval:(double)a0;
- (id)initForCurrentApplication;

@end
