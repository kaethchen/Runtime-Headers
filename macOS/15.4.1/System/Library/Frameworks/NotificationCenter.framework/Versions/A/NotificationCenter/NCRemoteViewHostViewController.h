@class NSView, NSString, CALayer, NSDictionary, NCRemoteViewHostRemoteView, NSLayoutConstraint, NSMutableArray, NCRemotePlugIn, NSObject;
@protocol OS_dispatch_source, NCRemoteViewHostViewControllerDelegate, NCRemoteViewServiceProtocol;

@interface NCRemoteViewHostViewController : NSViewController <NCRemotePlugInClient, NSRemoteViewDelegate, NCMaterialDelegate, NCRemoteViewServiceHostProtocol> {
    unsigned long long _lastSizeUpdateNumber;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
    NSView *_contentView;
    NCRemoteViewHostRemoteView *_remoteView;
    BOOL _snapshotSupported;
    BOOL _snapshotAllowed;
    CALayer *_snapshotLayerTree;
    NSMutableArray *_snapshot_completion_blocks;
    NSObject<OS_dispatch_source> *_snapshot_timeout;
    double _lastDeathTime;
}

@property (nonatomic) BOOL live;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } margins;
@property (copy, nonatomic) NSDictionary *additionalConfiguration;
@property (readonly, nonatomic) float contentHeightPriority;
@property (readonly, nonatomic) float contentWidthPriority;
@property (readonly, nonatomic) NCRemotePlugIn *remotePlugIn;
@property (weak, nonatomic) id<NCRemoteViewHostViewControllerDelegate> delegate;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) id<NCRemoteViewServiceProtocol> remoteObject;
@property (readonly) NSString *remotePlugInClientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL shouldRetainExportedObject;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidAdvanceToRunPhase:(id)a0;
- (void)viewDidAppear;
- (void)viewDidInvalidate:(id)a0;
- (void)viewDidRetreatToConfigPhase:(id)a0;
- (void)viewWillInvalidate:(id)a0;
- (id)initWithPlugin:(id)a0;
- (void)appearanceChanged:(BOOL)a0;
- (void)clearSnapshot;
- (void)_addRemoteView;
- (void)_clearSnapshot;
- (void)_installSnapshot:(id)a0;
- (void)_loadSnapshot;
- (void)_remotePreferredSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)_setupRemoteView;
- (void)_setupRemoteViewFailedDueToReason:(id)a0;
- (void)_takeDownRemoteView;
- (void)_updateSnapshot:(BOOL)a0 completion:(id /* block */)a1;
- (void)deactivateAndIdleExit;
- (void)deactivateImmediately;
- (void)deactiveAndDestorySnippet;
- (void)deactiveAndHideContentImmediately;
- (void)loadInitialSnapshot;
- (void)materialChanged:(unsigned char)a0;
- (void)remotePlugInDidActivate:(id)a0;
- (void)remotePlugInDidDeActivate:(id)a0;
- (BOOL)remotePlugInDidDie:(id)a0;
- (void)remoteViewHostRequestSizeChange:(struct CGSize { double x0; double x1; })a0 updateNumber:(unsigned long long)a1 fencePort:(id)a2;
- (void)remoteViewHostSnapshotData:(id)a0 scale:(double)a1 result:(unsigned long long)a2;
- (void)remoteViewReadyWithConfiguration:(id)a0;
- (id)remoteViewServiceClassName;
- (void)remoteViewSetupConfiguration:(id)a0;
- (void)updateSnapshot;

@end
