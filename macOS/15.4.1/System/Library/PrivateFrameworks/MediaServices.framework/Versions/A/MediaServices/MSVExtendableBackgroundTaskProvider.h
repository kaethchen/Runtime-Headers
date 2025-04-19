@class NSString, NSMutableDictionary, RBSAssertion;

@interface MSVExtendableBackgroundTaskProvider : NSObject <RBSAssertionObserving, MSVBackgroundTaskProviding> {
    NSString *_domain;
    NSString *_name;
    double _invalidationDuration;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    RBSAssertion *_assertion;
    double _assertionCreatedTime;
    unsigned int _assertionInvalidationNonce;
    NSString *_explanationForExtension;
    unsigned long long _lastIdentifier;
    NSMutableDictionary *_expirationHandlers;
    NSMutableDictionary *_timeoutGuards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)beginTaskWithExpirationHandler:(id /* block */)a0;
- (void)_assertionInvalidated:(id)a0 error:(id)a1;
- (BOOL)_locked_acquireAssertion:(id)a0;
- (BOOL)_locked_needsAssertion;
- (void)_locked_releaseAssertion;
- (void)_locked_removeAllTasksWithError:(id)a0;
- (long long)_locked_taskCount;
- (void)_taskDidTimeout:(unsigned long long)a0;
- (unsigned long long)beginTaskWithName:(id)a0 expirationHandler:(id /* block */)a1;
- (void)endTask:(unsigned long long)a0;
- (id)initWithRunningRBSDomain:(id)a0 name:(id)a1 invalidationDuration:(double)a2;

@end
