@class NSString, NSMutableDictionary;

@interface MSVSonicBackgroundTaskProvider : NSObject <RBSAssertionObserving, MSVBackgroundTaskProviding> {
    double _invalidationDuration;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    unsigned long long _lastIdentifier;
    NSMutableDictionary *_expirationHandlers;
    NSMutableDictionary *_timeoutGuards;
    NSMutableDictionary *_assertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)beginTaskWithExpirationHandler:(id /* block */)a0;
- (void)_taskDidTimeout:(unsigned long long)a0;
- (unsigned long long)beginTaskWithName:(id)a0 expirationHandler:(id /* block */)a1;
- (void)endTask:(unsigned long long)a0;
- (id)initWithInvalidationDuration:(double)a0;

@end
