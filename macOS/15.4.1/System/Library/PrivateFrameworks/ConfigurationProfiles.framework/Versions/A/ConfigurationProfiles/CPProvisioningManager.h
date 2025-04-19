@interface CPProvisioningManager : NSObject

+ (id)sharedProvisioningManager;
+ (id)sharedProvisioningManager:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (void)postNotification;
- (id)allProvisioningDictionaries:(id *)a0;
- (id)allProvisioningDictionariesWithFilter:(id)a0 error:(id *)a1;
- (id)combinedProvisioningDictionaryFromData:(id)a0 withUserData:(id)a1 error:(id *)a2;
- (id)installCombinedProvisioningDictionary:(id)a0;
- (id)installProvisioningProfile:(id)a0;
- (id)installProvisioningProfile:(id)a0 withUserData:(id)a1;
- (BOOL)profilesAreInstalled;
- (id)provisioningDictionariesForApplicationIdentifier:(id)a0 error:(id *)a1;
- (id)provisioningDictionaryForApplicationIdentifier:(id)a0 andUUID:(id)a1 error:(id *)a2;
- (id)provisioningDictionaryForUUID:(id)a0 error:(id *)a1;
- (id)removeAllProvisioningProfiles;
- (id)removeProvisioningStore;
- (id)uninstallProvisioningProfileByApplicationIdentifier:(id)a0 andUUID:(id)a1;
- (id)uninstallProvisioningProfileByUUID:(id)a0;
- (id)uninstallProvisioningProfiles:(id)a0;
- (id)validateAndCopyProfileFromData:(id)a0 error:(id *)a1;

@end
