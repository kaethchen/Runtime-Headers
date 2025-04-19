@interface STOrganizationSettingsRestrictionUtility : NSObject <STOrganizationSettingsRestrictionUtilityProtocol> {
    void /* unknown type, empty encoding */ implementation;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistenceController:(id)a0 restrictionPayloadUtility:(id)a1;
- (id)initWithPersistenceController:(id)a0 restrictionPayloadUtility:(id)a1 userDefaults:(id)a2;
- (void)isImageGenerationAllowedForUserDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)isImageGenerationAllowedForUserDSID:(id)a0 error:(id *)a1;

@end
