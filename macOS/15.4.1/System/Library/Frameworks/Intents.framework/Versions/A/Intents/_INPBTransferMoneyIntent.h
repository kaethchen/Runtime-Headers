@class _INPBPaymentAmountValue, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBFinancialAccountValue;

@interface _INPBTransferMoneyIntent : PBCodable <_INPBTransferMoneyIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBFinancialAccountValue *toAccount;
@property (readonly, nonatomic) BOOL hasToAccount;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (copy, nonatomic) NSString *transactionNote;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
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
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
