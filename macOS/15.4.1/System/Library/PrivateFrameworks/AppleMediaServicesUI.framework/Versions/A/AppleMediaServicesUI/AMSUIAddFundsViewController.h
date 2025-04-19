@class AMSUIWebViewController, NSDictionary, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIAddFundsViewController : AMSUICommonViewController

@property (readonly) AMSUIWebViewController *webViewController;
@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *metricsOverlay;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;

@end
