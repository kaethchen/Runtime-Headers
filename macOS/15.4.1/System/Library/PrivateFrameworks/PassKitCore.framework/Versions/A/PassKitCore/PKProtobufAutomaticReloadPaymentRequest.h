@class NSString, PKProtobufPaymentSummaryItem;

@interface PKProtobufAutomaticReloadPaymentRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentDescription;
@property (retain, nonatomic) NSString *paymentDescription;
@property (readonly, nonatomic) BOOL hasAutomaticPaymentBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *automaticPaymentBilling;
@property (readonly, nonatomic) BOOL hasBillingAgreement;
@property (retain, nonatomic) NSString *billingAgreement;
@property (readonly, nonatomic) BOOL hasManagementURL;
@property (retain, nonatomic) NSString *managementURL;
@property (readonly, nonatomic) BOOL hasTokenNotificationURL;
@property (retain, nonatomic) NSString *tokenNotificationURL;

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
