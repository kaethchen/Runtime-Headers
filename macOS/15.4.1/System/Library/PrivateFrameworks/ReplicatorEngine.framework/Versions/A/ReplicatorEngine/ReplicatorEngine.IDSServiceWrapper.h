@interface ReplicatorEngine.IDSServiceWrapper : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ idsService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messagePublisher;
    void /* unknown type, empty encoding */ _messagePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_devicesDidChangePublisher;
    void /* unknown type, empty encoding */ _devicesDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_didUpdatePairedDevicePublisher;
    void /* unknown type, empty encoding */ _didUpdatePairedDevicePublisher;
    void /* unknown type, empty encoding */ pairedDeviceLock;
    void /* unknown type, empty encoding */ _lock_pairedDevice;
    void /* unknown type, empty encoding */ pairedDeviceNotificationToken;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)pairedDeviceStateChangedWithNotification:(id)a0;

@end
