@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel;

@interface AMSUIWebFlowOptions : NSObject

@property BOOL animated;
@property (retain) NSString *backgroundColor;
@property BOOL deferredPresentation;
@property BOOL disableTimeout;
@property BOOL reuseExistingPage;
@property (retain) AMSUIWebLoadingPageModel *loadingPage;
@property long long modalPresentationStyle;
@property long long modalTransitionStyle;
@property struct CGSize { double width; double height; } modalWindowSize;
@property (retain) AMSUIWebNavigationBarModel *navigationBar;
@property (retain) NSDictionary *pageData;
@property BOOL suppressErrorPage;

- (void).cxx_destruct;

@end
