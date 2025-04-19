@class NSProgressIndicator, NSString;

@interface STActivityIndicatingWebView : WKWebView <WKNavigationDelegate>

@property (retain, nonatomic) NSProgressIndicator *activityView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
