@class NSString, NSMutableSet;

@interface ITIdleTimerIOKitHandler : NSObject <ITIdleTimerStateRequestHandling> {
    NSMutableSet *_access_assertionReasons;
    unsigned int _access_assertionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, nonatomic) unsigned int assertionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)addIdleTimerConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (BOOL)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfiguration:(id)a0 forReason:(id)a1;

@end
