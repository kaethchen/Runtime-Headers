@class _TtC5AskTo14ATAnswerChoice, NSString, NSArray, _TtC9AskToCore9ATPayload, NSError, _TtC5AskTo10ATQuestion;

@interface AskToDaemon.Server : _TtCs12_SwiftObject <AskToCore.ATDaemonProtocol> {
    void /* unknown type, empty encoding */ knownClientsWithNonAskToFlows;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ imessageSender;
    void /* unknown type, empty encoding */ clientResponseTaskMapper;
}

- (void)screenTimeDidReceiveAnswer:(_TtC5AskTo14ATAnswerChoice *)a0 forRequestWithID:(NSString *)a1 responderDSID:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)sendResponse:(_TtC9AskToCore9ATPayload *)a0 to:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)sendWithQuestion:(_TtC5AskTo10ATQuestion *)a0 to:(short)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;

@end
