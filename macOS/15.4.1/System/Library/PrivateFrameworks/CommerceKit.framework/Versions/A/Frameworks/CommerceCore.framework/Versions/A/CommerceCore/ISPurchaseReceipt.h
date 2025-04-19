@class NSString, NSData, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject <NSCoding> {
    struct _CMSDecoder { } *mDecoder;
    NSString *mReceiptPath;
    NSString *mExpirationDateString;
    NSString *mRenewalDateString;
    BOOL mHashIsValid;
    BOOL _createdFromCoder;
    BOOL _verbose;
}

@property (readonly) NSString *receiptType;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *parentalControls;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *purchaseDateString;
@property (readonly) NSString *opaqueDSIDString;
@property (readonly) NSString *hwtype;
@property (readonly) NSDate *receiptCreationDate;
@property (readonly) NSString *developerID;
@property (readonly) NSString *downloadID;
@property (readonly) NSString *adamID;
@property (readonly) NSString *installerVersionID;
@property (readonly) NSNumber *frToolVersion;
@property (readonly) NSDate *expirationDate;
@property (readonly) NSDate *renewalDate;
@property (readonly) NSString *organizationDisplayName;
@property (readonly) NSString *cancellationReason;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;
@property (readonly) BOOL isDSIDless;
@property (readonly) NSData *receiptData;
@property (readonly) NSString *receiptDataString;
@property (readonly) NSString *dsid;
@property (readonly) BOOL isProductionReceipt;

+ (id)receiptFromBundleAtPath:(id)a0;
+ (id)_installReceiptWithParameters:(id)a0;
+ (id)installReceiptData:(id)a0 inBundleAtPath:(id)a1;
+ (id)installReceiptString:(id)a0 inBundleAtPath:(id)a1;
+ (id)receiptFromBundleAtURL:(id)a0;
+ (id)receiptPathForBundleAtPath:(id)a0;
+ (id)receiptWithContentsOfFile:(id)a0;

- (void)dealloc;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (BOOL)isRevoked;
- (id)_initWithData:(id)a0;
- (BOOL)validateAndCheckGUIDSeparately:(BOOL *)a0;
- (struct __CFArray { } *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr { } *)a0;
- (BOOL)_decodeReceiptData:(id)a0 toDecodedMessage:(inout struct SecCmsMessageStr **)a1;
- (struct SecCmsSignedDataStr { } *)_extractSignedDataFromMessage:(struct SecCmsMessageStr { } *)a0;
- (BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr { } *)a0;
- (void)_parseTokens:(id)a0;
- (BOOL)_setPoliciesForTrust:(struct __SecTrust { } *)a0 checkRevocation:(BOOL)a1;
- (long long)_verifySignatureCheckRevocation:(BOOL)a0 useCurrentDate:(BOOL)a1;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr { } *)a0 onDate:(id)a1 checkRevocation:(BOOL)a2;
- (long long)checkSignature;
- (long long)checkSignatureAgainstCurrentDate;
- (long long)checkSignatureSkipRevocation;
- (BOOL)isDSIDless;
- (BOOL)isProductionReceipt;
- (BOOL)isVPPLicensed;
- (id)receiptDataString;
- (BOOL)validateAndCheckGUIDSepately:(BOOL *)a0;

@end
