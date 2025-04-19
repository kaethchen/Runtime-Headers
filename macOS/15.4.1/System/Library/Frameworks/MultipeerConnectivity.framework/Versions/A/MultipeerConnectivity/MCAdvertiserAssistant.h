@class MCSession, NSString, NSDictionary, MCNearbyServiceAdvertiser, NSBundle, NSMutableArray, MCPeerID;
@protocol MCAdvertiserAssistantDelegate;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate> {
    id<MCAdvertiserAssistantDelegate> _delegate;
}

@property (copy) NSDictionary *discoveryInfo;
@property (copy, nonatomic) MCPeerID *myPeerID;
@property (copy) NSString *serviceType;
@property (retain) MCSession *session;
@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser;
@property (retain, nonatomic) NSMutableArray *invitationsBuffer;
@property (copy, nonatomic) id /* block */ invitationHandlerForPresentedAlert;
@property (readonly, copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL wasAdvertising;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (weak) id<MCAdvertiserAssistantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)didPresentInvitation;
- (id)initWithServiceType:(id)a0 discoveryInfo:(id)a1 session:(id)a2;
- (void)presentNextInvitation;
- (void)userPressedButton:(long long)a0;
- (void)willPresentInvitation;

@end
