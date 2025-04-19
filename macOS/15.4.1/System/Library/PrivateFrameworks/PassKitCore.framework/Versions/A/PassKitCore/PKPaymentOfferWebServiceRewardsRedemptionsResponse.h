@class NSArray, NSDate;

@interface PKPaymentOfferWebServiceRewardsRedemptionsResponse : PKPaymentOfferWebServiceResponse

@property (retain, nonatomic) NSArray *rewardsRedemptions;
@property (nonatomic) BOOL moreComing;
@property (copy, nonatomic) NSDate *lastUpdated;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
