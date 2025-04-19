@interface _TtCV23IntelligenceFlowRuntime23SessionXPCServiceServer6Server : NSObject <LXSessionXPCServerProtocol> {
    void /* unknown type, empty encoding */ sessionClientId;
    void /* unknown type, empty encoding */ clientIdentityPack;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ clientCapabilities;
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ transactionHookContainer;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ jsonEncoder;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)generateStatementIdWithId:(id)a0 with:(id /* block */)a1;
- (void)attachAsObserverTo:(id)a0 with:(id /* block */)a1;
- (void)createSessionFromProtoEventsWithEventProtos:(id)a0 configData:(id)a1 xpcData:(id)a2 with:(id /* block */)a3;
- (void)detachObservationFrom:(id)a0 with:(id /* block */)a1;
- (void)endSessionWithId:(id)a0 with:(id /* block */)a1;
- (void)fetchSessionClientIdWithReply:(id /* block */)a0;
- (void)performSetupWithConfigData:(id)a0 reply:(id /* block */)a1;
- (void)postTransactionWithSessionId:(id)a0 eventProtos:(id)a1 with:(id /* block */)a2;
- (void)sendWithMessageData:(id)a0 with:(id /* block */)a1;
- (void)startSessionWithId:(id)a0 configData:(id)a1 xpcData:(id)a2 with:(id /* block */)a3;
- (void)updateTransactionHookAttachmentStatus:(id)a0 with:(id /* block */)a1;

@end
