@class NSString, NSURL, PKPaymentTransaction;

@interface PKAccountWebServiceSupportTopicsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
