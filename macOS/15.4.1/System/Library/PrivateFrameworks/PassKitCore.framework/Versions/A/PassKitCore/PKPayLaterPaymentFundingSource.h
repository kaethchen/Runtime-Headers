@class NSString, PKCurrencyAmount;
@protocol PKPayLaterFundingSourceDetails;

@interface PKPayLaterPaymentFundingSource : NSObject <PKPayLaterFundingSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKCurrencyAmount *refundAmount;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<PKPayLaterFundingSourceDetails> details;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)displayName;
- (id)dictionaryRepresentation;
- (id)bankDetails;
- (BOOL)isEqualToFundingSource:(id)a0;
- (id)panSuffix;
- (id)paymentPassDetails;
- (id)unmaskedPanSuffix;

@end
