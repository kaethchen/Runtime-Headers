@class NSData;

@interface STSTapToProvisionParameters : NSObject

@property (readonly, copy, nonatomic) NSData *unpredictableNumber;
@property (readonly, copy, nonatomic) NSData *transactionId;
@property (readonly, nonatomic) struct { unsigned char _exponent : 8; unsigned char _length : 4; unsigned char _isNegative : 1; unsigned char _isCompact : 1; unsigned int _reserved : 18; unsigned short _mantissa[8]; } amount;
@property (readonly, nonatomic) long long currencyCode;
@property (readonly, nonatomic) long long countryCode;
@property (readonly, nonatomic) long long provisionReadTimeout;

- (void).cxx_destruct;

@end
