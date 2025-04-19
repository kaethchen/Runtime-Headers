@class NSString, NSURL, NSDate, NSData, PKMerchantTokenUsageMetadata;

@interface PKMerchantToken : NSObject

@property (readonly, copy, nonatomic) NSString *primaryAccountIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryAccountDisplayName;
@property (readonly, copy, nonatomic) NSString *primaryAccountSuffix;
@property (readonly, copy, nonatomic) NSString *merchantTokenId;
@property (readonly, copy, nonatomic) NSString *appleMerchantId;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, copy, nonatomic) NSString *merchantDomain;
@property (readonly, copy, nonatomic) NSString *merchantApplicationIdentifier;
@property (readonly, nonatomic) NSURL *merchantIconURL;
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL;
@property (readonly, copy, nonatomic) NSString *tokenCategory;
@property (readonly, nonatomic) NSDate *tokenIssuanceDate;
@property (readonly, nonatomic) BOOL isDeferredPayment;
@property (readonly, nonatomic) BOOL isAMPPaymentToken;
@property (readonly, nonatomic) BOOL isAppleCashPaymentToken;
@property (readonly, nonatomic) NSURL *issuerServiceURL;
@property (readonly, copy, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) BOOL disallowUserRevoke;
@property (readonly, copy, nonatomic) NSData *currentMerchantTokenPublicKeyHash;
@property (readonly, nonatomic) BOOL needsMerchantTokenPublicKey;
@property (readonly, nonatomic) NSURL *primaryAccountPassArtURL;
@property (readonly, nonatomic) PKMerchantTokenUsageMetadata *usageMetadata;

+ (id)extractCardArtFromArray:(id)a0 withPrefix:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithMerchantTokenId:(id)a0 appleMerchantId:(id)a1 merchantName:(id)a2 merchantIconURL:(id)a3 merchantTokenManagementURL:(id)a4 tokenCategory:(id)a5 isDeferredPayment:(BOOL)a6;
- (id)initWithMerchantTokenId:(id)a0 appleMerchantId:(id)a1 merchantName:(id)a2 merchantIconURL:(id)a3 merchantTokenManagementURL:(id)a4 tokenCategory:(id)a5 isDeferredPayment:(BOOL)a6 issuerServiceURL:(id)a7 disallowUserRevoke:(BOOL)a8;
- (id)initWithMerchantTokenId:(id)a0 primaryAccountIdentifier:(id)a1 appleMerchantId:(id)a2 merchantName:(id)a3 merchantTokenManagementURL:(id)a4 tokenCategory:(id)a5 tokenIssuanceDate:(id)a6;
- (id)initWithMerchantTokenId:(id)a0 primaryAccountIdentifier:(id)a1 primaryAccountDisplayName:(id)a2 primaryAccountSuffix:(id)a3 appleMerchantId:(id)a4 merchantName:(id)a5 merchantDomain:(id)a6 merchantApplicationIdentifier:(id)a7 merchantIconURL:(id)a8 merchantTokenManagementURL:(id)a9 tokenCategory:(id)a10 isDeferredPayment:(BOOL)a11 tokenIssuanceDate:(id)a12 issuerServiceURL:(id)a13 issuerName:(id)a14 disallowUserRevoke:(BOOL)a15;

@end
