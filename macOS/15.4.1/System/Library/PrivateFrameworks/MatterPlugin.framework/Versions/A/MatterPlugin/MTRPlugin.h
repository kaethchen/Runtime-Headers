@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (id)init;
- (BOOL)start;
- (BOOL)stop;
- (void)_pairingStartedNotification:(id)a0;
- (void)_pairingStoppedNotification:(id)a0;

@end
