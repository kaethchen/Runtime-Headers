@class NSArray, NSString, NSMutableOrderedSet;
@protocol LACUIAuthenticationViewModelDelegate, LACContext;

@interface LACUIAuthenticationViewModel : NSObject <LACContextUIDelegate> {
    NSArray *_allEvents;
    NSMutableOrderedSet *_activeEvents;
    NSMutableOrderedSet *_interruptedEvents;
    NSMutableOrderedSet *_pausedEvents;
    long long _kofnK;
    long long _lastSuccess;
    BOOL _shouldBePaused;
    BOOL _supportsConcurrentEvaluations;
    BOOL _touchIDFingerOn;
}

@property (nonatomic) BOOL success;
@property (readonly, nonatomic) id<LACContext> context;
@property (weak, nonatomic) id<LACUIAuthenticationViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL isAND;
@property (readonly, nonatomic) NSArray *activeMechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithContext:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)initWithContext:(id)a0 forEmbeddedUI:(BOOL)a1;
- (void)viewVisibilityChangedToVisible:(BOOL)a0 withDescription:(id)a1;
- (void)_addActiveEvent:(long long)a0;
- (void)_removeActiveEvent:(long long)a0;
- (void)viewDidLayoutWithInvalidDimensions;
- (void)viewWasDeallocated;
- (void)_anyEventWithParams:(id)a0;
- (BOOL)_biometryRunning;
- (void)_didSucceedWithEvent:(long long)a0;
- (BOOL)_eventInterruptedByAnotherAuthenticationWithParams:(id)a0;
- (void)_failAllMechanismsWithDescription:(id)a0;
- (void)_passcodeEvent:(long long)a0 withParams:(id)a1;
- (void)_setTouchIDRunning:(BOOL)a0;
- (void)_toggleEventsWithDescription:(id)a0 restartInterruptedEvents:(BOOL)a1;
- (void)_touchIDEventWithParams:(id)a0;
- (void)_watchEventWithParams:(id)a0;
- (BOOL)_watchRunning;

@end
