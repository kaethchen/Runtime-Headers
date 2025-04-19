@class NSTimer;

@interface BKUILockScreenAssertionHandler : NSObject

@property (retain) NSTimer *displayLockAssertionTimer;
@property (nonatomic) BOOL screenLockBlocked;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_lockScreenFormattedErrorForError:(long long)a0;
- (void)allowScreeLock;
- (void)preventScreenLock;

@end
