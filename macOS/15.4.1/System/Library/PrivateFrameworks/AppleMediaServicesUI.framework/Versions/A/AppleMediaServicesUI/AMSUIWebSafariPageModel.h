@class AMSMetricsEvent, NSString, NSDictionary, AMSUIWebClientContext, AMSUIWebLoadingPageModel, NSURL, AMSUIWebNavigationBarModel;

@interface AMSUIWebSafariPageModel : AMSUIWebModel <AMSUIWebPageProvider>

@property (readonly) AMSUIWebClientContext *context;
@property (retain) NSString *callbackScheme;
@property (retain) NSDictionary *data;
@property BOOL hideToolBar;
@property (retain) AMSUIWebLoadingPageModel *loadingModel;
@property BOOL showShareButton;
@property (retain) NSURL *URL;
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
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
