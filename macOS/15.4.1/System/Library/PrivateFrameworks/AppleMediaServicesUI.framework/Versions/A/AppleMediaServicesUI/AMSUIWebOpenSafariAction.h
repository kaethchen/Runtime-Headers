@class NSString, NSDictionary, NSViewController, AMSUIWebSafariViewController, NSURL, AMSUIWebClientContext;

@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSString *callbackScheme;
@property (retain) NSDictionary *data;
@property (weak) NSViewController *presentedViewController;
@property (weak) AMSUIWebSafariViewController *safariViewController;
@property (retain) NSURL *URL;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultFromURL:(id)a0 error:(id)a1;

@end
