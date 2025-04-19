@class NSUUID, AMRemoteAction, AMRemoteActionHostViewController, NSArray, NSString, AMRemoteActionViewInfo;

@interface AMRemoteActionViewController : NSViewController <AMRemoteActionHostViewControllerDelegate>

@property (retain, nonatomic) AMRemoteActionViewInfo *_viewInfo;
@property (weak, nonatomic) AMRemoteAction *_remoteAction;
@property (nonatomic) unsigned long long _loadingState;
@property (retain, nonatomic) NSUUID *_loadingUUID;
@property (retain, nonatomic) AMRemoteActionHostViewController *_remoteActionHostViewController;
@property (retain, nonatomic) NSArray *_layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (id)_createErrorView;
- (id)_createLoadingViewReturningProgressIndicator:(id *)a0;
- (void)_loadViewAsynchronouslyFromXPC;
- (void)_removeAllSubviews;
- (void)_replaceContentView:(id)a0;
- (void)_showErrorView;
- (void)_showHostViewController:(id)a0;
- (void)_showLoadingView;
- (id)initWithRemoteAction:(id)a0 viewInfo:(id)a1;
- (void)invalidateXPC;
- (void)remoteActionHostViewController:(id)a0 didError:(id)a1;
- (void)retryButtonClicked:(id)a0;

@end
