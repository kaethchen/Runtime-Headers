@class NSString, NSDictionary, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly) ACAccount *account;
@property (readonly) NSString *clientIdentifier;
@property (readonly) NSDictionary *contextInfo;
@property (readonly) NSString *clientVersion;
@property (readonly) NSString *offerHints;
@property (readonly) NSString *placement;
@property (readonly) NSString *serviceType;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
