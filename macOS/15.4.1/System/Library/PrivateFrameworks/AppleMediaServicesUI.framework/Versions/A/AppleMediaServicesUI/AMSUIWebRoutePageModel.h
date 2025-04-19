@class AMSUIWebNavigationBarModel, NSString, NSURL, AMSMetricsEvent, AMSUIWebWrapperViewController, NSDictionary, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider>

@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *clientOptions;
@property (readonly, weak) AMSUIWebClientContext *context;
@property (readonly) NSDictionary *headers;
@property (readonly) BOOL loadUsingWebKit;
@property (readonly) NSURL *URL;
@property (retain) AMSUIWebWrapperViewController *viewController;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_webPageViewController;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
