@class AMSMetricsEvent, NSString, AMSUIWebClientContext, AMSUIWebToolbarModel, AMSUIWebNavigationBarModel;

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property BOOL ignoreBottomSafeArea;
@property BOOL ignoreTopSafeArea;
@property BOOL supportsRefresh;
@property (retain) AMSUIWebToolbarModel *toolbar;
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
