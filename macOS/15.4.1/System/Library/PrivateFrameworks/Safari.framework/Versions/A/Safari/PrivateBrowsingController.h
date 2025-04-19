@class WBSDispatchSourceTimer;

@interface PrivateBrowsingController : NSObject {
    BOOL _shouldBeLockedIfPossible;
    BOOL _privateBrowsingRequiresAuthentication;
    BOOL _isPasscodeAuthenticationAvailable;
    WBSDispatchSourceTimer *_backgroundLockTimer;
    id _keybagLockStatusChangeObserver;
}

@property (class, readonly, nonatomic) PrivateBrowsingController *sharedController;

@property (readonly, nonatomic, getter=isEnabledInAnyWindow) BOOL enabledInAnyWindow;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) BOOL privateBrowsingRequiresAuthentication;
@property (readonly, nonatomic) BOOL canRequireAuthenticationForPrivateBrowsing;

- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_lockAutomaticallyIfNeeded;
- (BOOL)_shouldLock;
- (void)_touchIDAvailabilityMayHaveChanged;
- (BOOL)_updateLockedState;
- (void)_updatePrivateBrowsingRequiresAuthentication;
- (void)updateBackgroundLockTimer;

@end
