@class NSString, NSMapTable, CRKASMCredentialStore, NSObject;
@protocol CRKClassKitFacade, CRKClassKitRosterRequirements, CRKOSTransactionPrimitives;

@interface CRKASMRosterProviderConfiguration : NSObject

@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *studentRosterConfiguration;
@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *instructorRosterConfiguration;
@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *instructorRosterWithoutKeychainConfiguration;
@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *instructorRosterWithoutKeychainAndWithPersonaAdoptionConfiguration;

@property (readonly, copy, nonatomic) NSString *userCommonNamePrefix;
@property (readonly, copy, nonatomic) NSString *trustedUserCommonNamePrefix;
@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade;
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *rosterRequirements;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, nonatomic) long long maxCourseUsersCount;
@property (readonly, nonatomic) long long maxCourseTrustedUsersCount;
@property (readonly, nonatomic) double rosterMutationTimeout;
@property (readonly, nonatomic) NSMapTable *userCache;
@property (readonly, nonatomic) NSMapTable *trustedUserCache;
@property (readonly, nonatomic) id<CRKOSTransactionPrimitives> osTransactionPrimitives;
@property (readonly, nonatomic) double transactionReleaseDelay;

+ (id)instructorRosterConfigurationWithCredentialStore:(id)a0 personaAdoption:(BOOL)a1;
+ (BOOL)userCachingEnabled;

- (void).cxx_destruct;
- (id)initWithUserCommonNamePrefix:(id)a0 trustedUserCommonNamePrefix:(id)a1 classKitFacade:(id)a2 rosterRequirements:(id)a3 credentialStore:(id)a4 maxCourseUsersCount:(long long)a5 maxCourseTrustedUsersCount:(long long)a6 rosterMutationTimeout:(double)a7 userCachingEnabled:(BOOL)a8;
- (id)initWithUserCommonNamePrefix:(id)a0 trustedUserCommonNamePrefix:(id)a1 classKitFacade:(id)a2 rosterRequirements:(id)a3 credentialStore:(id)a4 maxCourseUsersCount:(long long)a5 maxCourseTrustedUsersCount:(long long)a6 rosterMutationTimeout:(double)a7 userCachingEnabled:(BOOL)a8 osTransactionPrimitives:(id)a9 transactionReleaseDelay:(double)a10;

@end
