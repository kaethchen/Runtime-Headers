@class NSString, ACAccount;

@interface AMSUIWebAcknowledgePrivacyAction : AMSUIWebAction

@property (retain) ACAccount *account;
@property (retain) NSString *privacyIdentifier;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
