@interface UserNotificationsCore.UserNotificationsIDSCloudReceiver : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ properties;
    void /* unknown type, empty encoding */ notificationDelegate;
    void /* unknown type, empty encoding */ attachmentDelegate;
    void /* unknown type, empty encoding */ categoriesDelegate;
    void /* unknown type, empty encoding */ actionsDelegate;
    void /* unknown type, empty encoding */ coordinationDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;

@end
