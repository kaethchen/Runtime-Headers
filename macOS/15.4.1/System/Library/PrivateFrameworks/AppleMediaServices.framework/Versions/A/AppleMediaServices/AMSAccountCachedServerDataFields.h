@class NSString, NSNumber, NSDate;

@interface AMSAccountCachedServerDataFields : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *acAccountName;
@property (nonatomic) unsigned long long accountFlagsVersion;
@property (nonatomic) BOOL autoPlayEnabled;
@property (retain, nonatomic) NSString *combinedStoreFrontID;
@property (retain, nonatomic) NSString *creditBalance;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic) BOOL hasAgreedToAppClipTerms;
@property (nonatomic) BOOL hasAgreedToTerms;
@property (nonatomic) BOOL hasSubscriptionFamilySharingEnabled;
@property (nonatomic) BOOL hasHardwareWatchOffer;
@property (nonatomic) unsigned long long identityLastVerified;
@property (nonatomic) BOOL isAskToBuy;
@property (nonatomic) BOOL isDisabledAccount;
@property (nonatomic) BOOL isInBadCredit;
@property (nonatomic) BOOL isInFamily;
@property (nonatomic) BOOL isInRestrictedRegion;
@property (nonatomic) BOOL isManagedAccount;
@property (nonatomic) BOOL isRestrictedAccount;
@property (retain, nonatomic) NSNumber *isU18OrCountrysEquivalent;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSString *iso2CountryCode;
@property (retain, nonatomic) NSString *iso3CountryCode;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *oneAccountLinkedDSID;
@property (nonatomic) BOOL personalization;
@property (nonatomic) BOOL retailDemo;
@property (retain, nonatomic) NSString *storefrontId;
@property (nonatomic) BOOL underThirteen;
@property (nonatomic) unsigned long long verifiedExpirationDate;
@property (retain, nonatomic) NSDate *expiration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
