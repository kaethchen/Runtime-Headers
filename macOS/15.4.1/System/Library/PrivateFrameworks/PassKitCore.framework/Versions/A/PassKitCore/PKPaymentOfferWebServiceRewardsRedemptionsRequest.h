@class NSString, NSURL, NSDate, NSNumber;

@interface PKPaymentOfferWebServiceRewardsRedemptionsRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSNumber *limit;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
