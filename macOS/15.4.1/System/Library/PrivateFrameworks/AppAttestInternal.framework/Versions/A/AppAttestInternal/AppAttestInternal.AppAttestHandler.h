@interface AppAttestInternal.AppAttestHandler : NSObject {
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_identityManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyDataManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appUUIDDataManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_assertionDataManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authenticationManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attestationManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eligibilityManager;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(struct { unsigned int x0[8]; })a0;
- (void)attestKeyWith:(id)a0 credential:(id)a1 clientDataHash:(id)a2 completion:(id /* block */)a3;
- (void)createKeyWith:(id)a0 completion:(id /* block */)a1;
- (void)generateAssertionWith:(id)a0 credential:(id)a1 clientDataHash:(id)a2 completion:(id /* block */)a3;
- (void)signWithClientUUID:(id)a0 blob:(id)a1 credential:(id)a2 completion:(id /* block */)a3;

@end
