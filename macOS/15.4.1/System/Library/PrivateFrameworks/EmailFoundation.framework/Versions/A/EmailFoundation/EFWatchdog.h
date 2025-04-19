@class NSString;

@interface EFWatchdog : NSObject

@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier;

- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (id)initWithMonitoredBundleIdentifier:(id)a0;

@end
