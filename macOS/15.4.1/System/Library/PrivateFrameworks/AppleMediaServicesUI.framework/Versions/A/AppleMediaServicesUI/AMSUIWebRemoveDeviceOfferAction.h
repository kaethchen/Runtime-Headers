@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebRemoveDeviceOfferAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) ACAccount *account;
@property (retain) NSString *identifier;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
