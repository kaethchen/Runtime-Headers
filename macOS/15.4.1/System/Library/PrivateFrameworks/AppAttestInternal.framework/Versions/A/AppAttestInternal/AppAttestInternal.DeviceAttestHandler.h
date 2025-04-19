@interface AppAttestInternal.DeviceAttestHandler : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_eligibilityManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_identityManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attestationManager;
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(struct { unsigned int x0[8]; })a0;
- (BOOL)isSupported;
- (void)attestKeyWith:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 options:(id)a1 completion:(id /* block */)a2;

@end
