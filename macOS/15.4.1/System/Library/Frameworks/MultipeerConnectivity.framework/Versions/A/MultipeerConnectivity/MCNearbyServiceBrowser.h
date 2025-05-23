@class NSNetServiceBrowser, NSMutableDictionary, NSString, NSObject, MCPeerID;
@protocol OS_dispatch_queue, MCNearbyServiceBrowserDelegate;

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    id<MCNearbyServiceBrowserDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableDictionary *netServices;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (retain, nonatomic) NSNetServiceBrowser *networkBrowser;
@property (nonatomic) long long outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *invites;
@property (copy) NSString *serviceType;
@property (copy, nonatomic) NSString *formattedServiceType;
@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) BOOL wasBrowsing;
@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled;
@property (weak) id<MCNearbyServiceBrowserDelegate> delegate;
@property (readonly) MCPeerID *myPeerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindDomain:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveDomain:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserWillSearch:(id)a0;
- (id)initWithPeer:(id)a0 serviceType:(id)a1;
- (void)invitePeer:(id)a0 toSession:(id)a1 withContext:(id)a2 timeout:(double)a3;
- (void)startBrowsingForPeers;
- (void)stopBrowsingForPeers;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;
- (void)applicationWillTerminateNotification:(id)a0;
- (void)parseIDString:(id *)a0 displayName:(id *)a1 fromIdentifier:(id)a2;
- (id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)a0;
- (void)syncAttachConnection:(id)a0 toPeer:(id)a1;
- (void)syncCloseConnectionForPeer:(id)a0;
- (void)syncHandleDeclinedInviteWithInfo:(id)a0;
- (void)syncHandleInviteResponse:(id)a0 fromPeer:(id)a1;
- (void)syncHandleInviteTimeout:(id)a0 forPeer:(id)a1;
- (void)syncInitiateConnectionToPeer:(id)a0;
- (void)syncInvitePeer:(id)a0 toSession:(id)a1 withContext:(id)a2 timeout:(double)a3;
- (long long)syncNextOutgoingInviteID;
- (void)syncReceivedData:(id)a0 fromPeer:(id)a1;
- (void)syncSendData:(id)a0 toPeer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncSendDictionary:(id)a0 toPeer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncStartBrowsingForPeers;
- (void)syncStopBrowsingForPeers;

@end
