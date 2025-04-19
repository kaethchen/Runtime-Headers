@class APSConnection, NSString;
@protocol CFRPushDelegate;

@interface CFRPushManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) APSConnection *pushConnection;
@property (weak, nonatomic) id<CFRPushDelegate> pushDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)connectionDidReconnect:(id)a0;
- (id)enabledTopics;
- (void)setupRestrictionsPushNotifications;

@end
