@interface UserNotificationsCore.IDSInboundMessaging : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ payloadConsumer;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;

@end
