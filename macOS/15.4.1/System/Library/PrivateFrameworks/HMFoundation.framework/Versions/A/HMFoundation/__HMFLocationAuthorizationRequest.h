@class NSString;

@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {
    BOOL _requested;
    BOOL _registeredForKVO;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)main;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithType:(long long)a0;
- (id)initWithTimeout:(double)a0;
- (id)initWithAuthorization:(id)a0;
- (id)initWithType:(long long)a0 authorization:(id)a1;
- (void)unregisterFromKVO;

@end
