@interface SRDRemoteIFClientWakeStore : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)getXPCEvent;
- (void)setXPCEvent:(id)a0;

@end
