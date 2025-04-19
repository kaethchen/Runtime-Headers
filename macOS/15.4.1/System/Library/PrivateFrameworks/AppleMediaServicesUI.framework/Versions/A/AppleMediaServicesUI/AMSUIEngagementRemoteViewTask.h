@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, NSViewController, NSObject, NSXPCListener, AMSProcessInfo;
@protocol OS_dispatch_group, AMSBagProtocol;

@interface AMSUIEngagementRemoteViewTask : AMSTask <AMSUIEngagementTaskHostInterface>

@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain) NSError *error;
@property (retain) NSViewController *presentedViewController;
@property (retain) NSXPCListener *remoteListener;
@property (retain) AMSEngagementRequest *request;
@property (retain) AMSEngagementResult *result;
@property (retain) NSViewController *viewController;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property struct CGSize { double width; double height; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_snapshotBagDataPromise;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)presentEngagement;
- (double)_preferredWidth;
- (BOOL)_isWindowPresentation;
- (double)_preferredHeight;
- (void)_presentViewController:(id)a0;
- (void)_unblock;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
