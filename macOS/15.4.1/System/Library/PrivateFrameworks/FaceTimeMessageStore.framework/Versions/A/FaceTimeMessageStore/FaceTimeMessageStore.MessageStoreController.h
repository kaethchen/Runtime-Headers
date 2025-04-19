@interface FaceTimeMessageStore.MessageStoreController : _TtCs12_SwiftObject <_FTMSMessageStoreControllerClientDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ wrappedAccountInfo;
    void /* unknown type, empty encoding */ accountInfoLock;
    void /* unknown type, empty encoding */ delegateLock;
    void /* unknown type, empty encoding */ delegates;
}

- (void)messageStoreAccountInfoDidChange:(id)a0;
- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)a0;
- (void)messageStoreRequiresRefetch;

@end
