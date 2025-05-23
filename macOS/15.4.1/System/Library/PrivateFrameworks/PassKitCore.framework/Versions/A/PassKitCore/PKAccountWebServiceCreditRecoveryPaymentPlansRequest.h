@class NSString, NSURL;

@interface PKAccountWebServiceCreditRecoveryPaymentPlansRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
