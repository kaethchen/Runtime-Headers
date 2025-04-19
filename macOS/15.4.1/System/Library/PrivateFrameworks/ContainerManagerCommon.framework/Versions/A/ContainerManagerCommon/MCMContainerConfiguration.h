@class NSString, NSDictionary, NSURL;

@interface MCMContainerConfiguration : MCMPlistReadOnly <MCMContainerConfiguration>

@property (readonly, nonatomic) BOOL supportedOnPlatform;
@property (readonly, nonatomic) BOOL autoRollsPathOnBuildUpdate;
@property (readonly, nonatomic) BOOL handledDirectly;
@property (readonly, nonatomic) BOOL handledByProxy;
@property (readonly, nonatomic) BOOL usesGlobalBundleUserIdentity;
@property (readonly, nonatomic) BOOL usesGlobalSystemUserIdentity;
@property (readonly, nonatomic) BOOL personaAndUserSpecific;
@property (readonly, nonatomic) BOOL migrateCodeSignInfoFromMetadataToDB;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForMatchingTeamIDPrefix;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForAppStoreSigned;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForPlatformBinary;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForiPadAppsOnMac;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForProfileValidatedEntitlements;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForTestFlight;
@property (readonly, nonatomic) BOOL supportsProtectedContainerWithRestrictedEntitlement;
@property (readonly, nonatomic) BOOL ownerIssuedSandboxExtension;
@property (readonly, nonatomic) BOOL cleanTransientsEachBoot;
@property (readonly, nonatomic) BOOL alwaysRequireSignatureScrutiny;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *sandboxAffordances;
@property (readonly, nonatomic) NSURL *sourceFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)disposition;
- (id)initWithPreprocessedPlist:(id)a0 name:(id)a1;
- (unsigned long long)_containerClassFromPlistValue:(id)a0;
- (id)_containerIdentifierSetFromPlistValue:(id)a0 error:(id *)a1;
- (id)_sandboxAffordancesFromPlistValue:(id)a0 error:(id *)a1;
- (id)debugDescriptionWithIndentString:(id)a0;
- (BOOL)isEqualToContainerConfig:(id)a0;
- (BOOL)override_initNonBoolPropertiesWithPlist:(id)a0 error:(id *)a1;

@end
