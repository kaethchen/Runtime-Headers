@class NSString, NSURL;

@interface PKAccountWebServiceDeleteBeneficiaryRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *beneficiaryIdentifier;
@property (copy, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
