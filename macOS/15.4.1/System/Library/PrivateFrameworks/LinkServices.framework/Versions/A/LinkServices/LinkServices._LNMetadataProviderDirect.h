@class NSString, NSError;

@interface LinkServices._LNMetadataProviderDirect : NSObject <LNAutoShortcutsProviderInterface, LNMetadataProviderInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ requiresAssertion;
}

- (id)init;
- (void).cxx_destruct;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsWithError:(id *)a0;
- (id)bundlesWithError:(id *)a0;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)entitiesWithError:(id *)a0;
- (id)entityIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)enumsWithError:(id *)a0;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)propertiesForIdentifiers:(id)a0 error:(id *)a1;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)bundleRegistrationsWithError:(id *)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)queriesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void)diagnoseBundleIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (id)initWithConnection:(id)a0 options:(long long)a1 error:(id *)a2;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)suggestionPhrasesForQueries:(id)a0 error:(id *)a1;

@end
