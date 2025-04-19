@interface AskToDaemon.IDSRelay : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ listenerQueue;
    void /* unknown type, empty encoding */ senderQueue;
    void /* unknown type, empty encoding */ pendingSendCompletions;
}

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;

@end
