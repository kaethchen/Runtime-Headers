@class NSTimer, NSString, MCNearbyServiceBrowser, MCNearbyServiceAdvertiser, IDSService, NSMutableDictionary, NSArray, MCPeerID, MCSession, NSMutableArray, AXSSInterDeviceSecurityHelper;
@protocol AXSSInterDeviceSearchObserver, AXSSInterDeviceHearingAidsMessagesObserver, AXSSInterDeviceActionReceiver, AXSSInterDeviceConnectionListener;

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate>

@property (readonly, nonatomic) IDSService *service;
@property (nonatomic) long long state;
@property (readonly, nonatomic) MCPeerID *localPeerID;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) MCNearbyServiceBrowser *browser;
@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser;
@property (retain, nonatomic) NSMutableArray *availableDevices;
@property (retain, nonatomic) NSMutableDictionary *deviceTypesByPeerID;
@property (retain, nonatomic) MCPeerID *receiver;
@property (retain, nonatomic) MCPeerID *forwarder;
@property (nonatomic) unsigned long long switchEventIndex;
@property (retain, nonatomic) NSTimer *dummyPacketTimer;
@property (nonatomic) unsigned long long numberOfBurstPacketsRemaining;
@property (retain, nonatomic) AXSSInterDeviceSecurityHelper *securityHelper;
@property (weak, nonatomic) id<AXSSInterDeviceConnectionListener> connectionListener;
@property (weak, nonatomic) id<AXSSInterDeviceActionReceiver> actionReceiver;
@property (weak, nonatomic) id<AXSSInterDeviceSearchObserver> searchObserver;
@property (weak, nonatomic) id<AXSSInterDeviceHearingAidsMessagesObserver> hearingAidsMessagesObserver;
@property (readonly, nonatomic) BOOL isReceivingSwitchEvents;
@property (readonly, nonatomic) BOOL isForwardingSwitchEvents;
@property (readonly, nonatomic) BOOL isSearching;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL canSearch;
@property (readonly, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) BOOL hasPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)search;
- (id)_stateDescription;
- (id)_stringForState:(long long)a0;
- (void)_advertise;
- (void)_broadcastICloudMessage:(id)a0;
- (void)_cancelAdvertising;
- (void)_handleHighlightMessage;
- (void)_handlePerformSysdiagnoseMessage;
- (void)_handleSelectionMessageWithPayload:(id)a0;
- (void)_handleSwitchEventMessageWithPayload:(id)a0 fromPeer:(id)a1;
- (void)_handleTimeoutAsPotentialReceiver;
- (id)_messageForSelection:(BOOL)a0 settings:(id)a1;
- (id)_messageForSwitchEvent:(id)a0 index:(unsigned long long)a1;
- (void)_removePeerFromAvailableDevices:(id)a0;
- (void)_sendDataToReceiver:(id)a0;
- (void)_sendDummyPacket;
- (void)_sendICloudMessage:(id)a0 toDevice:(id)a1;
- (BOOL)_setUpSessionIfNecessary;
- (void)_tearDownAdvertiser;
- (void)_tearDownBrowser;
- (void)_tearDownConnectivity;
- (void)_tearDownSession;
- (void)advertiser:(id)a0 didNotStartAdvertisingPeer:(id)a1;
- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)browser:(id)a0 didNotStartBrowsingForPeers:(id)a1;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)forwardSwitchEvent:(id)a0;
- (void)highlightSearchResult:(id)a0;
- (void)performSysdiagnoseOnReceiver;
- (void)selectSearchResult:(id)a0 settings:(id)a1;
- (void)sendHearingAidsMessage:(id)a0 toDevice:(id)a1;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)session:(id)a0 didReceiveCertificate:(id)a1 fromPeer:(id)a2 certificateHandler:(id /* block */)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;

@end
