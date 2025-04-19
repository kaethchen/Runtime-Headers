@class AMSUIWebViewController, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUISubscriptionsViewController : NSViewController <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSUIWebViewController *webViewController;
@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSString *subscriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)_startLoading;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;
- (void)_setChildViewController:(id)a0;
- (void)_setupChildViewController;
- (void)_setupLayout;

@end
