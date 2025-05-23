@class NSString, INCurrencyAmount, INPerson, INPaymentMethod;

@interface INPaymentRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) INPerson *payee;
@property (readonly, copy) INPerson *payer;
@property (readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *note;
@property (readonly) long long status;
@property (readonly, copy) INPaymentMethod *paymentMethod;
@property (readonly, copy) INCurrencyAmount *feeAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithPayee:(id)a0 payer:(id)a1 currencyAmount:(id)a2 paymentMethod:(id)a3 note:(id)a4 status:(long long)a5;
- (id)initWithPayee:(id)a0 payer:(id)a1 currencyAmount:(id)a2 paymentMethod:(id)a3 note:(id)a4 status:(long long)a5 feeAmount:(id)a6;

@end
