@class NSString, AKBiometricRatchetContext;

@interface AKBiometricRatchetController : NSObject <AKBiometricRatchetProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dtoLock;
    AKBiometricRatchetContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)armWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelWithReason:(id)a0 completion:(id /* block */)a1;
- (id)currentRachetState;
- (void)isCriticalEditAllowedForAltDSID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDTOEnabled;
- (void)stateWithCompletion:(id /* block */)a0;

@end
