@interface ReplicatorEngine.ConcreteIDSDependency : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ _accountsChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountsChanged;
    void /* unknown type, empty encoding */ _devicesChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_devicesChanged;
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_identityBlob;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ identityFetchQueue;
    void /* unknown type, empty encoding */ lock_localDeviceID;
    void /* unknown type, empty encoding */ lock_fetchingLocalDeviceID;
}

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;

@end
