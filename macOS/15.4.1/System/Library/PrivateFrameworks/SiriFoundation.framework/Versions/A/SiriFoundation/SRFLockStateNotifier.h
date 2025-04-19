@interface SRFLockStateNotifier : NSObject

@property (getter=isLocked) BOOL locked;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
