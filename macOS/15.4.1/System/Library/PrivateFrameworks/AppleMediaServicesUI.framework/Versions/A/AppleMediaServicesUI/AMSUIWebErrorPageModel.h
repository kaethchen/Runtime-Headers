@class AMSMetricsEvent, NSString, NSBundle, AMSUIWebClientContext, NSError, AMSUIWebNavigationBarModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) NSBundle *bundle;
@property (retain) AMSUIWebClientContext *context;
@property (retain) id<AMSUIWebActionRunnable> action;
@property (copy) id /* block */ actionBlock;
@property (retain) NSString *actionButtonTitle;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property BOOL errorMessageInternalOnly;
@property (retain) NSString *errorTitle;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_messageFromError:(id)a0;

- (void).cxx_destruct;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithError:(id)a0 context:(id)a1 actionBlock:(id /* block */)a2;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
