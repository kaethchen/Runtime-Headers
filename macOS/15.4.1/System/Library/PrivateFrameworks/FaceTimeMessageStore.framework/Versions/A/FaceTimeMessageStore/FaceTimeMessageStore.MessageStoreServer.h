@protocol _FTMSMessageStoreControllerClientDelegate;

@interface FaceTimeMessageStore.MessageStoreServer : _TtCs12_SwiftObject <FaceTimeMessageStore.MessageStoreControllerXPCHostProtocol> {
    void /* unknown type, empty encoding */ dataSource;
}

@property (nonatomic, retain) id<_FTMSMessageStoreControllerClientDelegate> delegate;

- (void)pingWithCompletion:(id /* block */)a0;
- (void)addMessage:(id)a0 completion:(id /* block */)a1;
- (void)deleteMessagesWithQuery:(id)a0 completion:(id /* block */)a1;
- (void)getAccountInfoWithCompletion:(id /* block */)a0;
- (void)getMessageCountFor:(id)a0 completion:(id /* block */)a1;
- (void)getMessagesWithFetchRequest:(id)a0 completion:(id /* block */)a1;
- (void)isTranscriptionEnabledWithCompletion:(id /* block */)a0;
- (void)saveMessageToPhotoLibraryWithMessageUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateMessages:(id)a0 completion:(id /* block */)a1;

@end
