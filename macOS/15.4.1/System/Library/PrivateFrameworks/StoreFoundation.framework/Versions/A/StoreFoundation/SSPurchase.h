@class NSString, NSDictionary, NSData, SSDownloadMetadata, NSNumber, ISOperation;

@interface SSPurchase : NSObject <NSSecureCoding, NSCopying> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long purchaseType;
@property BOOL isDSIDLessPurchase;
@property (retain) NSDictionary *dsidLessOptions;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) SSDownloadMetadata *downloadMetadata;
@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *sortableAccountIdentifier;
@property BOOL isRecoveryPurchase;
@property BOOL isUpdate;
@property BOOL isRedownload;
@property BOOL isVPP;
@property (retain, nonatomic) NSString *managedAppUUIDString;
@property (retain, nonatomic) NSData *receiptData;
@property (retain, nonatomic) NSString *parentalControls;
@property BOOL checkPreflightAterPurchase;
@property BOOL shouldBeInstalledAfterLogout;
@property (readonly) BOOL needsAuthentication;
@property unsigned long long itemIdentifier;
@property (copy) id /* block */ authFallbackHandler;
@property BOOL isCancelled;
@property (weak) ISOperation *purchaseOperation;
@property (copy) NSDictionary *responseDialog;

+ (id)purchaseWithBuyParameters:(id)a0;
+ (id)purchasesGroupedByAccountIdentifierWithPurchases:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)productID;
- (BOOL)needsAuthentication;
- (id)_sortableAccountIdentifier;
- (BOOL)isRecoveryPurchase;
- (BOOL)purchaseDSIDMatchesPrimaryAccount;
- (void)setIsRecoveryPurchase:(BOOL)a0;

@end
