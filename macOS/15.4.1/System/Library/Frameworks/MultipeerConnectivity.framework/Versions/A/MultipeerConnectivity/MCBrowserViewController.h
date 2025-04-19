@class NSObject, NSString, MCNearbyServiceBrowser, NSArrayController, MCPeerID, MCSession, NSBundle, NSButton, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue, MCBrowserViewControllerDelegate;

@interface MCBrowserViewController : NSViewController <MCSessionPrivateDelegate, MCNearbyServiceBrowserDelegate> {
    unsigned long long _minimumNumberOfPeers;
    unsigned long long _maximumNumberOfPeers;
    id<MCBrowserViewControllerDelegate> _delegate;
}

@property (copy) MCPeerID *myPeerID;
@property (retain) MCNearbyServiceBrowser *browser;
@property (retain) NSMutableArray *peers;
@property (retain) MCSession *session;
@property (retain) NSButton *doneButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSBundle *frameworkBundle;
@property (retain) NSArrayController *peersArrayController;
@property (retain) NSNumber *spinning;
@property (copy) NSString *sectionTitle;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long invitedPeersCount;
@property (nonatomic) unsigned long long declinedPeersCount;
@property (weak) id<MCBrowserViewControllerDelegate> delegate;
@property unsigned long long minimumNumberOfPeers;
@property unsigned long long maximumNumberOfPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)updateDoneButton;
- (void)doneTapped:(id)a0;
- (void)cancelTapped:(id)a0;
- (void)addPeer:(id)a0 isAdvertising:(BOOL)a1;
- (id)detailStringForPeerState:(int)a0;
- (id)dictionaryForPeer:(id)a0;
- (id)initWithBrowser:(id)a0 session:(id)a1;
- (id)initWithServiceType:(id)a0 session:(id)a1;
- (void)invitePeerClicked:(id)a0;
- (BOOL)maximumNumberOfPeersReached;
- (BOOL)minimumNumberOfPeersReached;
- (id)nearbySectionTitle;
- (void)peer:(id)a0 changedStateTo:(int)a1;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4 propagate:(BOOL *)a5;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2 propagate:(BOOL *)a3;
- (void)updateSectionTitle;
- (void)verifyPeerIsAccountedFor:(id)a0;

@end
