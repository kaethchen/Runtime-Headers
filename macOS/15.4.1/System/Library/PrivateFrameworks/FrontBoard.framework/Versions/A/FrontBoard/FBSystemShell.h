@class RBSAssertion, NSString, BSCompoundAssertion, NSMutableSet, NSMutableArray, FBSystemShellInitializationContext;

@interface FBSystemShell : NSObject <BSDescriptionProviding> {
    id _observerToken;
    RBSAssertion *_runningAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
    BSCompoundAssertion *_lock_temporaryWatchdogAssertion;
}

@property (readonly, nonatomic) unsigned long long _state;
@property (readonly, nonatomic) FBSystemShellInitializationContext *initializationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:(id)a0;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)_setState:(unsigned long long)a0;
- (void)_addBlockToExecuteWhenReady:(id /* block */)a0;
- (void)_informSystemShellServiceDidFinishLaunching;
- (void)_initializationComplete;
- (void)_setSystemIdleSleepDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_startSystemShellService;
- (id)assertWatchdogEnabledForLimitedDurationForReason:(id)a0;
- (void)readyForInteraction;
- (void)sendActionsToBackBoard:(id)a0;

@end
