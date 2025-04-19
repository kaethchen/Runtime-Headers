@class NSURL, NSString;

@interface PKPaymentOfferWebServiceRewardsBalancesRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *criteriaIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
