@interface BMResourceContainerManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (BOOL)_containerFromCache:(id)a0 withClass:(Class)a1 forPersonaIdentifier:(id)a2 creatingIfNotInCache:(BOOL)a3 error:(id *)a4 block:(id /* block */)a5;
- (id)_enforceCurrentPersonaIsUserPersona:(id *)a0;
- (id)_standardDataVaultContainerForResource:(id)a0;
- (id)_userVaultContainerForCurrentPersona:(id *)a0;
- (id)_vanillaContainerForCurrentPersona:(id *)a0;
- (id)descriptorsFromConfigurationForSetResource:(id)a0;
- (id)openContainerForResource:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;
- (unsigned char)routeContainerRequestForResource:(id)a0 mode:(unsigned long long)a1;
- (unsigned long long)serviceDomainFromConfigurationForSetResource:(id)a0;
- (id)syncPolicyFromConfigurationForSetResource:(id)a0;

@end
