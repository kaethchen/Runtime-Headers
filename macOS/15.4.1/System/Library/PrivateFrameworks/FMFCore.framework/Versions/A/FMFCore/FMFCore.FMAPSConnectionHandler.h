@interface FMFCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ preferenceDomain;
    void /* unknown type, empty encoding */ connectionQueue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ topicAPSToken;
    void /* unknown type, empty encoding */ publicAPSToken;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;

@end
