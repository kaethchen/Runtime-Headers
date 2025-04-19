@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebClientContext, AMSUIWebNavigationBarModel;
@protocol AMSUIWebPageProvider;

@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) id actionData;
@property long long animationType;
@property BOOL deferredPresentation;
@property (retain) NSString *backgroundColor;
@property (retain) AMSUIWebLoadingPageModel *loadingPage;
@property (retain) NSDictionary *metrics;
@property struct CGSize { double width; double height; } modalWindowSize;
@property (retain) AMSUIWebNavigationBarModel *navigationBar;
@property long long popToRelativeIndex;
@property long long presentationType;
@property (retain) id<AMSUIWebPageProvider> replacementPage;
@property long long replacementType;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
