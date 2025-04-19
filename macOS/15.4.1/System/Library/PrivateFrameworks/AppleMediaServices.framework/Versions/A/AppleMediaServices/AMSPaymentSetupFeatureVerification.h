@class NSString;

@interface AMSPaymentSetupFeatureVerification : NSObject

@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isPaymentSetupFeatureSupportedWithError:(id *)a0;
- (id)performPaymentSetupFeatureLookup;

@end
