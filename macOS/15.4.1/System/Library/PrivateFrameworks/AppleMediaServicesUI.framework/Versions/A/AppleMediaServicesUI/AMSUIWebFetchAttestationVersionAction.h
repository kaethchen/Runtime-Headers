@class ACAccount;

@interface AMSUIWebFetchAttestationVersionAction : AMSUIWebAction

@property (retain) ACAccount *account;

- (void).cxx_destruct;
- (id)minimumVersions;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
