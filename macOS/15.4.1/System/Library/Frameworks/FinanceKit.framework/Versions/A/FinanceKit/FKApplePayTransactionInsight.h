@class NSString, NSURL, NSDate, NSNumber, CLLocation;

@interface FKApplePayTransactionInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantRawName;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSNumber *industryCode;
@property (copy, nonatomic) NSString *merchantType;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *terminalIdentifier;
@property (copy, nonatomic) NSString *merchantAdditionalData;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSNumber *isCoarseLocation;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *merchantRawCANL;
@property (copy, nonatomic) NSString *merchantRawCity;
@property (copy, nonatomic) NSString *merchantRawState;
@property (copy, nonatomic) NSString *merchantRawCountry;
@property (copy, nonatomic) NSString *merchantCity;
@property (copy, nonatomic) NSString *merchantZip;
@property (copy, nonatomic) NSString *merchantState;
@property (copy, nonatomic) NSNumber *merchantCleanConfidenceLevel;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSURL *webURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentHash:(id)a0 merchantName:(id)a1 merchantRawName:(id)a2 industryCategory:(id)a3 industryCode:(id)a4 merchantType:(id)a5 merchantCountryCode:(id)a6 terminalIdentifier:(id)a7 merchantAdditionalData:(id)a8 paymentNetwork:(id)a9 isCoarseLocation:(id)a10 location:(id)a11 merchantIdentifier:(id)a12 merchantRawCANL:(id)a13 merchantRawCity:(id)a14 merchantRawState:(id)a15 merchantRawCountry:(id)a16 merchantCity:(id)a17 merchantZip:(id)a18 merchantState:(id)a19 merchantCleanConfidenceLevel:(id)a20 adamIdentifier:(id)a21 webURL:(id)a22 webMerchantIdentifier:(id)a23 webMerchantName:(id)a24;
- (id)initWithPaymentHash:(id)a0 transactionDate:(id)a1 merchantName:(id)a2 merchantRawName:(id)a3 industryCategory:(id)a4 industryCode:(id)a5 merchantType:(id)a6 merchantCountryCode:(id)a7 terminalIdentifier:(id)a8 merchantAdditionalData:(id)a9 paymentNetwork:(id)a10 isCoarseLocation:(id)a11 location:(id)a12 merchantIdentifier:(id)a13 merchantRawCANL:(id)a14 merchantRawCity:(id)a15 merchantRawState:(id)a16 merchantRawCountry:(id)a17 merchantCity:(id)a18 merchantZip:(id)a19 merchantState:(id)a20 merchantCleanConfidenceLevel:(id)a21 adamIdentifier:(id)a22 webURL:(id)a23 webMerchantIdentifier:(id)a24 webMerchantName:(id)a25;

@end
