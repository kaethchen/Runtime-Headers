@class NSString, AMSDialogRequest, AMSUIAppearance, NSDictionary, AMSBinaryPromise, NSViewController, ACAccount, AMSEngagement;
@protocol AMSBagProtocol, AMSUIMessageViewControllerDelegate, AMSUIMessageViewController;

@interface AMSUIInlineDialogViewController : NSViewController <AMSUIMessageViewControllerDelegate, AMSEngagementObserver, AMSUIMessageViewController>

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSEngagement *engagement;
@property (retain) AMSDialogRequest *dialogRequest;
@property (retain) NSString *placement;
@property (retain) NSString *serviceType;
@property (retain) NSDictionary *context;
@property (retain) NSViewController<AMSUIMessageViewController> *childContentController;
@property struct CGPoint { double x; double y; } anchorPoint;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property (retain) AMSUIAppearance *preferredAppearance;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithRequest:(id)a0;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)_dialogView;
- (void)_didFailToFetchWithError:(id)a0;
- (void)_didFetchResponse:(id)a0;
- (id)_findDialogRequestInResponse:(id)a0;
- (void)_setContentController:(id)a0;
- (void)_setDialogRequest:(id)a0;
- (void)_setDialogRequestBanner:(id)a0;
- (void)_setDialogRequestBubbleTip:(id)a0;
- (void)_setDialogRequestDashboardMessage:(id)a0;
- (void)_setupEngagement;
- (void)_tearDownContentView;
- (void)enqueueImpressionMetrics;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)initWithServiceType:(id)a0 placement:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2 account:(id)a3 context:(id)a4;
- (id)initWithServiceType:(id)a0 placement:(id)a1 context:(id)a2;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)messageViewController:(id)a0 shouldEnqueueMetricsForDialogResult:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (id)preferredAppearance;
- (void)setPreferredAppearance:(id)a0;

@end
