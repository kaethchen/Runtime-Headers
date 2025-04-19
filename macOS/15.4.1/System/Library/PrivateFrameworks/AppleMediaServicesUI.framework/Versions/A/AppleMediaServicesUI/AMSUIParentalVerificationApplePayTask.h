@class NSData, NSString, AMSBiometricsSignatureRequest, NSError, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, NSViewController, AMSPromise, AMSMutablePromise;
@protocol AMSBagProtocol;

@interface AMSUIParentalVerificationApplePayTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, NSURLSessionTaskDelegate>

@property (retain) ACAccount *account;
@property (retain) NSDictionary *accountParameters;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain) NSString *displayName;
@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) ACAccount *originalAccount;
@property (retain) NSViewController *viewController;
@property (retain) AMSUIParentalVerificationApplePayTask *strongSelf;
@property (retain) AMSPromise *resultPromise;
@property (retain) AMSMutablePromise *delegatePromise;
@property (retain) NSData *paymentData;
@property (retain) NSError *paymentError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)performTask;
- (id)_promiseToFetchPaymentCardTokenURL:(id)a0 requestBody:(id)a1;
- (id)_promiseToLoadPVTURLWithBody:(id)a0;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end
