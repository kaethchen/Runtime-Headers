@class AMSUIWebClientContext, NSString, AMSAuthenticateRequest;

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property BOOL pauseTimeouts;
@property BOOL isAuthenticatingCloud;
@property BOOL makeCurrentAccount;
@property (retain) AMSAuthenticateRequest *request;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
