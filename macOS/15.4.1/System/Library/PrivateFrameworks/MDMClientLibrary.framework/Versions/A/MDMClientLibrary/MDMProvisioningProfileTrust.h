@class NSObject;
@protocol OS_dispatch_queue;

@interface MDMProvisioningProfileTrust : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *misVerificationQueue;

+ (void)didSuperviseThroughConfigurator;
+ (id)_appSignerIdentitiesFromBundleIDs:(id)a0;
+ (id)_appSignerIdentityForBundleID:(id)a0;
+ (id)_developer:(id)a0 withoutPrefix:(id)a1;
+ (id)allTrustedSignerIdentities;
+ (BOOL)anyUPPExistsForManagedAppSigners;
+ (id)developerFromIdentity:(id)a0 hasFreePP:(BOOL)a1 hasUPP:(BOOL)a2;
+ (void)didEnrollInMDMWithPasscode:(id)a0 duringMigration:(BOOL)a1;
+ (void)didSuperviseThroughADE;
+ (void)didUnenrollFromMDM;
+ (BOOL)enumerateProvisioningProfilesWithBlock:(id /* block */)a0;
+ (BOOL)isTrustedProvisioningProfileUUID:(id)a0;
+ (id)managedAppSigners;
+ (id)provisioningProfileUUIDsForSignerIdentity:(id)a0;
+ (id)signerIdentitiesFromProvisioningProfileUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithValidationQueue:(id)a0;
- (void)uiTrustAndVerifyProvisioningProfiles:(id)a0 developer:(id)a1 completion:(id /* block */)a2;
- (void)uiVerifyProvisioningProfileUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateTrustedCodeSigningIdentities:(id)a0 validateBundleIDs:(id)a1 validateManagedApps:(BOOL)a2;

@end
