@interface LocalAuthenticationCoreUI.LACUIRatchetViewModel : NSObject <LACDTORatchetObserver, LACUIRatchetViewModelType> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stateSubject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_learnMoreSubject;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ratchetIdentifier;
    void /* unknown type, empty encoding */ ratchetManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ uiContinuation;
    void /* unknown type, empty encoding */ expirationDate;
    void /* unknown type, empty encoding */ gracePeriodExpirationDate;
    void /* unknown type, empty encoding */ isStrictModeEnabled;
}

@property (nonatomic) void /* unknown type, empty encoding */ isInvalidated;

+ (id)mapError:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)ratchetStateDidChange:(id)a0;
- (void)stopWithReason:(id)a0 invalidate:(BOOL)a1;

@end
