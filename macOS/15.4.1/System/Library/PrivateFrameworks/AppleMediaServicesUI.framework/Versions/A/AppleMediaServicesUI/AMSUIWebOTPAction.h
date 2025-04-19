@class NSString, AMSUIWebClientContext;

@interface AMSUIWebOTPAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property BOOL enabled;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
