@class NSString, NSArray, NSDictionary, NSData, NSNumber;

@interface SOKerberosExtensionData : NSObject

@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *siteCode;
@property (retain, nonatomic) NSString *certificateUUID;
@property (nonatomic) BOOL useSiteAutoDiscovery;
@property (retain, nonatomic) NSArray *credentialBundleIdACL;
@property (nonatomic) BOOL includeManagedAppsInBundleIdACL;
@property (nonatomic) BOOL includeKerberosAppsInBundleIdACL;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (nonatomic) BOOL isDefaultRealm;
@property (nonatomic) BOOL allowPasswordChange;
@property (nonatomic) BOOL allowAutomaticLogin;
@property (nonatomic) BOOL requireUserPresence;
@property (retain, nonatomic) NSString *pwChangeURL;
@property (retain, nonatomic) NSNumber *pwExpireOverride;
@property (retain, nonatomic) NSNumber *pwNotificationDays;
@property BOOL pwReqComplexity;
@property (retain, nonatomic) NSNumber *pwReqLength;
@property (retain, nonatomic) NSNumber *pwReqMinAge;
@property (retain, nonatomic) NSNumber *pwReqHistory;
@property (retain, nonatomic) NSString *pwReqText;
@property (retain, nonatomic) NSData *pwReqRTFData;
@property (retain, nonatomic) NSString *helpText;
@property (retain, nonatomic) NSString *customUsernameLabel;
@property (retain, nonatomic) NSNumber *replicationTime;
@property BOOL syncLocalPassword;
@property BOOL monitorCredentialsCache;
@property BOOL delayUserSetup;
@property (nonatomic) long long credentialUseMode;
@property BOOL requireTLSForLDAP;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *preferredKDCs;
@property (nonatomic) BOOL usePlatformSSOTGT;
@property (nonatomic) BOOL allowPlatformSSOAuthFallback;
@property (nonatomic) BOOL performKerberosOnly;
@property (retain, nonatomic) NSString *identityIssuerAutoSelectFilter;
@property (retain, nonatomic) NSNumber *allowSmartCard;
@property (retain, nonatomic) NSNumber *allowPassword;
@property (retain, nonatomic) NSNumber *startInSmartCardMode;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
