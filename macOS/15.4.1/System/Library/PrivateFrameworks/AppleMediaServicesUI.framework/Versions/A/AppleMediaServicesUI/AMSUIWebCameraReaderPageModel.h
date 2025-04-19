@class AMSMetricsEvent, NSViewController, NSString, AMSUIWebClientContext, AMSUIWebNavigationBarModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) id<AMSUIWebActionRunnable> action;
@property (retain) AMSUIWebClientContext *context;
@property (weak) NSViewController *presentedViewController;
@property BOOL allowsCameraToggle;
@property BOOL allowsTextEntry;
@property (retain) NSString *bottomLinkLabel;
@property (retain) id<AMSUIWebActionRunnable> bottomLinkAction;
@property (getter=isFullScreen) BOOL fullScreen;
@property long long pageType;
@property BOOL prefersSessionTeardown;
@property (retain) NSString *primaryLabel;
@property (retain) NSString *secondaryLabel;
@property (retain) NSString *textFieldPlaceholder;
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
