@class NSString, NSURL, NSDate, _TtC10FinanceKit41ManagedApplePayMerchantTokenUsageMetadata;

@interface FinanceKit.ManagedApplePayMerchantTokenMetadata : NSManagedObject

@property (nonatomic, copy) NSString *tokenIdentifier;
@property (nonatomic, copy) NSString *tokenCategoryValue;
@property (nonatomic) BOOL isLikelyDeferredPaymentToken;
@property (nonatomic, copy) NSDate *tokenIssuanceDate;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountDisplayName;
@property (nonatomic, copy) NSString *primaryAccountSuffix;
@property (nonatomic, copy) NSURL *cardArtURL;
@property (nonatomic, copy) NSString *issuerName;
@property (nonatomic, copy) NSURL *issuerTokenManagementURL;
@property (nonatomic) BOOL userRevokeDisallowed;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantName;
@property (nonatomic, copy) NSURL *merchantIconURL;
@property (nonatomic, copy) NSString *merchantDomain;
@property (nonatomic, copy) NSString *merchantApplicationIdentifier;
@property (nonatomic, copy) NSURL *merchantTokenManagementURL;
@property (nonatomic, retain) _TtC10FinanceKit41ManagedApplePayMerchantTokenUsageMetadata *usageMetadata;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *primitiveCreationDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)awakeFromInsert;

@end
