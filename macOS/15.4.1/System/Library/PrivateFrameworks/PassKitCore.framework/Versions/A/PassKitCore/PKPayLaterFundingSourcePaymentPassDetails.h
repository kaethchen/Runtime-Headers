@class NSString;

@interface PKPayLaterFundingSourcePaymentPassDetails : NSObject <PKPayLaterFundingSourceDetails>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (nonatomic) long long cardNetwork;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardSuffix;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;
- (BOOL)isEqualToDetails:(id)a0;

@end
