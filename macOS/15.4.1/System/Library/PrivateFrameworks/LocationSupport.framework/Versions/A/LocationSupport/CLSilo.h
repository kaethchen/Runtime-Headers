@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)main;
+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (BOOL)isSuspended;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (void)unregisterForIdleNotifications:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)runIdleHandlers;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)assertOutside;
- (void)intendToSync;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)runResumeHandlers;
- (BOOL)shouldBeIdled;

@end
