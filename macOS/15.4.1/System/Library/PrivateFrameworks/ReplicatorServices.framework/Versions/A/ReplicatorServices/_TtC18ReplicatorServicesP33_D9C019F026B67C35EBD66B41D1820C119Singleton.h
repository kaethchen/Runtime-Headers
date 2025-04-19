@interface _TtC18ReplicatorServicesP33_D9C019F026B67C35EBD66B41D1820C119Singleton : NSObject <ReplicatorServices.ReplicatorControlXPCClient> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_devicePublisher;
    void /* unknown type, empty encoding */ _devicePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pairedDevicePublisher;
    void /* unknown type, empty encoding */ _pairedDevicePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enabledStatePublisher;
    void /* unknown type, empty encoding */ _enabledStatePublisher;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_deviceToken;
    void /* unknown type, empty encoding */ queue_enabledStateToken;
    void /* unknown type, empty encoding */ queue_devices;
    void /* unknown type, empty encoding */ queue_isEnabled;
    void /* unknown type, empty encoding */ queue_deviceFetchPending;
    void /* unknown type, empty encoding */ queue_fetchedData;
}

- (id)init;
- (void).cxx_destruct;

@end
