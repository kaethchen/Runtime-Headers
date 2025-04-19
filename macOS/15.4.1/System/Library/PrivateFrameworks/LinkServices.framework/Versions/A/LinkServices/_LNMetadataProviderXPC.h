@class NSString, NSXPCConnection;

@interface _LNMetadataProviderXPC : NSObject <LNMetadataProviderInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
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
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)bundleRegistrationsWithError:(id *)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)queriesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)diagnoseBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)suggestionPhrasesForQueries:(id)a0 error:(id *)a1;

@end
