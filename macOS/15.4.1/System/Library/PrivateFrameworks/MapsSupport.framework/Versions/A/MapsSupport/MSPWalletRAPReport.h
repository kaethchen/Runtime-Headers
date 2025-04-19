@class GEORPFeedbackRequestParameters, NSString;

@interface MSPWalletRAPReport : NSObject

@property (readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters;
@property (copy, nonatomic) NSString *merchantAdamId;
@property (copy, nonatomic) NSString *reportersComment;
@property (copy, nonatomic) NSString *correlationId;
@property (nonatomic) BOOL isAppleCard;
@property (nonatomic) unsigned long long lookupTransactionType;

- (void).cxx_destruct;
- (id)initForMerchantIssue:(unsigned long long)a0 merchantIndustryCode:(long long)a1 mapsIdentifier:(unsigned long long)a2 merchantName:(id)a3 merchantRawName:(id)a4 merchantIndustryCategory:(id)a5 merchantURL:(id)a6 merchantFormattedAddress:(id)a7 transactionTime:(double)a8 transactionType:(id)a9 transactionLocation:(struct { double x0; double x1; })a10;

@end
