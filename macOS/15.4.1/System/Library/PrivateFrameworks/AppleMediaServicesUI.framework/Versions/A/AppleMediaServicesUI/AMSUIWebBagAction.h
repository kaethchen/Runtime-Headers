@class NSString, NSArray, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) ACAccount *account;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) NSArray *requestedKeys;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_fetchValuesForKeys:(id)a0 bag:(id)a1 startingAtIndex:(long long)a2 valuesArray:(id)a3 completion:(id /* block */)a4;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
