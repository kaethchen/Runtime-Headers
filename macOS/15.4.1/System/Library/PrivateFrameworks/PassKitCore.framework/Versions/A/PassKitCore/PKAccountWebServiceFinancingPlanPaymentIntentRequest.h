@class NSString, NSURL;

@interface PKAccountWebServiceFinancingPlanPaymentIntentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) unsigned long long intent;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
