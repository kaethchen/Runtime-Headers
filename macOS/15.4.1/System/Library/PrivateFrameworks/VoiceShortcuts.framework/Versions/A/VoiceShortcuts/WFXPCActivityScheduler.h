@class NSString;

@interface WFXPCActivityScheduler : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) struct _xpc_activity_eligibility_changed_handler_s { } *lock_eligibilityChangedHandler;
@property (readonly, nonatomic) NSString *activityIdentifier;

+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 checkInHandler:(id /* block */)a1 runHandler:(id /* block */)a2;
+ (id)activatedSchedulerWithActivityIdentifier:(id)a0 runHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)addEligibilityChangedHandler:(id /* block */)a0 toActivity:(id)a1;
- (id)initWithActivityIdentifier:(id)a0;
- (void)removeEligibilityChangedHandlerIfNeeded;
- (void)scheduleWithCheckInHandler:(id /* block */)a0 runHandler:(id /* block */)a1;
- (void)scheduleWithRunHandler:(id /* block */)a0;

@end
