@class PKProtobufCustomPrecisionAmount, NSString, PKProtobufShippingMethod, PKProtobufRecurringPaymentSummaryItem, PKProtobufNSDecimalNumber, PKProtobufAutomaticReloadPaymentSummaryItem, PKProtobufInstantFundsOutFeeSummaryItem, PKProtobufDeferredPaymentSummaryItem, PKProtobufDisbursementSummaryItem;

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) BOOL hasRecurringPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasDeferredPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (readonly, nonatomic) BOOL hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;
@property (readonly, nonatomic) BOOL hasShippingMethodSummaryItem;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethodSummaryItem;
@property (readonly, nonatomic) BOOL hasAutomaticReloadPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasDisbursementSummaryItem;
@property (retain, nonatomic) PKProtobufDisbursementSummaryItem *disbursementSummaryItem;
@property (readonly, nonatomic) BOOL hasInstantFundsOutFeeSummaryItem;
@property (retain, nonatomic) PKProtobufInstantFundsOutFeeSummaryItem *instantFundsOutFeeSummaryItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
