@interface AXVLiveCaptionsEnablementAlertController : NSObject

@property (class, readonly, nonatomic) AXVLiveCaptionsEnablementAlertController *sharedInstance;

- (void)enableWithAlertIfNeeded;

@end
