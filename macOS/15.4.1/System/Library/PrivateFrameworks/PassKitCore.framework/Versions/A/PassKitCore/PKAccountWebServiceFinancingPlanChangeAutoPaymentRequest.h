@class NSString, NSURL;

@interface PKAccountWebServiceFinancingPlanChangeAutoPaymentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) BOOL autoPayment;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
