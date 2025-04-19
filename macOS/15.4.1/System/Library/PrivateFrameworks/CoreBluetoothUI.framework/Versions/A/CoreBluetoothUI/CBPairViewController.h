@class NSTextField, NSTextFieldCell, CBPasskeyDisplay, NSView, CBPeer, NSNumber, NSButton;
@protocol CBPairViewControllerDelegate;

@interface CBPairViewController : NSViewController

@property (retain) NSNumber *passkey;
@property long long pairingType;
@property (weak) NSTextField *tempPasskeyField;
@property (retain) CBPasskeyDisplay *passkeyDisplay;
@property (retain) NSTextFieldCell *remotePeerName;
@property (retain) NSView *passkeyView;
@property (retain) NSView *justworksView;
@property (weak) NSTextField *justworksPeerName;
@property (retain) NSTextField *pairingRequestText;
@property (retain) NSTextField *pairingRequestExplanationText;
@property (retain) NSButton *pairingRejectButtonText;
@property (weak) id<CBPairViewControllerDelegate> pairingAgentDelegateReference;
@property (weak) CBPeer *requestingPeerReference;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)acceptJustworksPairing:(id)a0;
- (void)attachPairingView:(id)a0;
- (void)rejectPasskeyRequest:(id)a0;
- (void)setPassKey:(id)a0 andPairingType:(long long)a1;
- (void)setViewToJustWorksPairing;
- (void)setViewToPasskeyPairing;

@end
