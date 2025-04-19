@class NSString, NSDictionary, NSMutableArray, AMSMetricsEvent;

@interface AMSCardAuthorizationTask : AMSTask

@property BOOL didBiometricsLockout;
@property BOOL didCancelHomeButton;
@property (retain) NSMutableArray *userActions;
@property long long confirmationStyle;
@property (retain) NSString *countryCode;
@property (retain) NSString *currencyCode;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (retain) NSString *passSerialNumber;
@property (retain) NSString *passTypeIdentifier;
@property (readonly) NSDictionary *paymentSession;
@property (retain) NSString *presentationSceneBundleIdentifier;
@property (retain) NSString *presentationSceneIdentifier;

- (void).cxx_destruct;
- (void)_metricsPost;
- (id)_metricsTimestamp;
- (id)_metricsUserActionDictionary;
- (id)initWithPaymentSession:(id)a0;
- (id)performCardAuthorization;

@end
