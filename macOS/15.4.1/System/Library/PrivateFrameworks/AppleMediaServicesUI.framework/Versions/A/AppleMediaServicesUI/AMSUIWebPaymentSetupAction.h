@class NSString;

@interface AMSUIWebPaymentSetupAction : AMSUIWebAction

@property (retain) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
