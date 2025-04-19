@class NSView, NSString, NCRemoteViewServiceSubsystem, _NCRVSVCClientRootContainer, _NCRVSVCPresentedContainer, NCRemoteViewServiceWindow, NSMutableDictionary, NSArray, NSViewController, NCRemoteViewServiceContainerView, _NCRVSVCClientMarginContainer, NSLayoutConstraint;

@interface NCRemoteViewServiceViewController : NSViewController <NCRemoteServiceContainerViewDelegate> {
    _NCRVSVCClientRootContainer *_clientRootContainer;
    _NCRVSVCClientMarginContainer *_clientMarginContainer;
    _NCRVSVCPresentedContainer *_presentedContainer;
    NSView *_clientView;
    NSLayoutConstraint *_windowHeightConstraint;
    NSLayoutConstraint *_windowWidthConstraint;
    NSLayoutConstraint *_preferredHeightConstraint;
    NSLayoutConstraint *_presentedHeightConstraint;
    NSArray *_clientVerticalConstraints;
    id /* block */ _readyBlock;
    unsigned long long _sizeUpdateCounter;
}

@property (retain, nonatomic) NCRemoteViewServiceWindow *remoteWindow;
@property (retain, nonatomic) NSViewController *clientViewController;
@property (readonly, nonatomic) NCRemoteViewServiceContainerView *rootContainer;
@property (weak, nonatomic) NSViewController *presentedViewController;
@property (weak, nonatomic) NCRemoteViewServiceSubsystem *subSystem;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } marginInsets;
@property (readonly, nonatomic) NSMutableDictionary *readyContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createViewServiceWindow;

- (void).cxx_destruct;
- (void)childViewControllerDidChangePreferredContentSize:(id)a0;
- (BOOL)definesPresentationContext;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setupComplete;
- (void)remoteViewActiveDisplayChanged:(unsigned int)a0;
- (void)_installClientView;
- (void)_updateClientPreferredContentConstraints;
- (void)_updatePresentedPreferredContentConstraints;
- (void)clientViewDidLoad;
- (void)dismissAlternateViewController:(id)a0 fromViewController:(id)a1;
- (void)presentAlternateViewController:(id)a0 fromViewController:(id)a1;
- (void)remoteViewReadyForDisplay:(unsigned int)a0 block:(id /* block */)a1;
- (void)remoteViewServiceContainerView:(id)a0 requestSizeChange:(struct CGSize { double x0; double x1; })a1 fenceRight:(id)a2;
- (void)remoteViewServiceContainerViewFrameChanged:(id)a0;

@end
