@class NSMutableDictionary;

@interface SEMSandboxIndexSiteCache : SEMIndexSiteCache {
    NSMutableDictionary *_personaToUserVaultDirectoryMap;
}

- (void).cxx_destruct;
- (id)initWithManagerDirectory:(id)a0 sharedOverrideCache:(id)a1 readOnly:(BOOL)a2;
- (id)openUserVaultTransaction:(id *)a0 forPersonaIdentifier:(id)a1 error:(id *)a2;
- (void)spoofUserVaultAvailableForPersonaIdentifier:(id)a0;
- (void)spoofUserVaultUnavailableForPersonaIdentifier:(id)a0;
- (void)spoofUserVaultUnavailableSoonForPersonaIdentifier:(id)a0;

@end
