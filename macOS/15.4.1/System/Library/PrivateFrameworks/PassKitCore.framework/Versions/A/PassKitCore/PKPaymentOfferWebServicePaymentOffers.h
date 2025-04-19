@class NSDecimalNumber, NSString, NSArray, NSURL, PKPaymentDeviceMetadata, NSNumber;

@interface PKPaymentOfferWebServicePaymentOffers : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) long long payLaterSuppressionMode;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSString *fraudAssessment;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *challenge;
@property (nonatomic) BOOL handoff;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
