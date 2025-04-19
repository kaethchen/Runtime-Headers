@interface _GCCurrentSkylightSessionMonitor : NSObject

@property (readonly) int secureInputPid;

- (void)dealloc;
- (id)init;
- (void)_refreshSessionProperties;

@end
