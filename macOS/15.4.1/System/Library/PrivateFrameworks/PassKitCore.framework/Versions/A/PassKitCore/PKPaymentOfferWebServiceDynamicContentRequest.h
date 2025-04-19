@class NSURL, NSString, NSArray;

@interface PKPaymentOfferWebServiceDynamicContentRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSArray *types;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
