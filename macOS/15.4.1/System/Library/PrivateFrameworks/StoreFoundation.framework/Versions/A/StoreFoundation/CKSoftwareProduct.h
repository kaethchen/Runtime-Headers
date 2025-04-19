@class NSString, NSValue, NSDate, NSNumber;

@interface CKSoftwareProduct : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *accountOpaqueDSID;
@property (retain) NSString *accountIdentifier;
@property (retain) NSString *appName;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *bundlePath;
@property (retain) NSString *receiptType;
@property (retain) NSNumber *itemIdentifier;
@property (retain) NSNumber *storeFrontIdentifier;
@property (retain) NSNumber *versionIdentifier;
@property (retain) NSDate *purchaseDate;
@property (retain) NSValue *mdItemRef;
@property BOOL installed;
@property long long source;
@property BOOL isVPPLicensed;
@property BOOL vppLicenseRevoked;
@property (retain) NSString *vppLicenseOrganizationName;
@property (retain) NSDate *vppLicenseExpirationDate;
@property (retain) NSDate *vppLicenseRenewalDate;
@property (retain) NSString *vppLicenseCancellationReason;
@property BOOL isMachineLicensed;
@property BOOL isLegacyApp;
@property BOOL metadataChangeIsExpected;
@property BOOL metadataChangeHasAlreadyOccurred;
@property (copy) NSString *expectedBundleVersion;
@property (copy) NSNumber *expectedStoreVersion;
@property (readonly) NSString *sourceString;

+ (id)createSoftwareProductForAppAtPath:(id)a0;
+ (id)productPathToUpgradeForBundleIdentifier:(id)a0 versionNumberString:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
