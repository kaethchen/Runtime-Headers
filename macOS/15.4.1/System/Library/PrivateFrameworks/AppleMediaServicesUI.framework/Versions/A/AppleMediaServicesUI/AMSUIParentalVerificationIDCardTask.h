@class NSString, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, NSViewController;
@protocol AMSBagProtocol;

@interface AMSUIParentalVerificationIDCardTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) NSDictionary *accountParameters;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *displayName;
@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) ACAccount *originalAccount;
@property (retain) NSViewController *viewController;

+ (long long)_minAgeFromObject:(id)a0;
+ (id)_nonceFromString:(id)a0;
+ (id)_requestDictFromMinimumAge:(long long)a0 walletData:(id)a1 nonce:(id)a2;

- (void).cxx_destruct;
- (id)performTask;
- (id)_dataFromIDCardForMinimumAge:(long long)a0 nonce:(id)a1;
- (id)_promiseToFetchIDCardTokenURL:(id)a0 requestBody:(id)a1;
- (id)_promiseToLoadPVTURLWithBody:(id)a0;
- (id)_promiseToRequestIDCardData;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end
