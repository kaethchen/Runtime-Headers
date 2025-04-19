@class NSString, INCurrencyAmount, NSDateComponents, INBillPayee;

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) INBillPayee *billPayee;
@property (copy) INCurrencyAmount *amountDue;
@property (copy) INCurrencyAmount *minimumDue;
@property (copy) INCurrencyAmount *lateFee;
@property (copy) NSDateComponents *dueDate;
@property (copy) NSDateComponents *paymentDate;
@property long long billType;
@property long long paymentStatus;
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
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithBillType:(long long)a0 paymentStatus:(long long)a1 billPayee:(id)a2 amountDue:(id)a3 minimumDue:(id)a4 lateFee:(id)a5 dueDate:(id)a6 paymentDate:(id)a7;

@end
