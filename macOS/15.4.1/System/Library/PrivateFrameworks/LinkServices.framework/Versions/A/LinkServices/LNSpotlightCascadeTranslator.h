@class NSArray, LNMetadataProvider, NSMutableDictionary;

@interface LNSpotlightCascadeTranslator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_disabledBundles;
    LNMetadataProvider *_metadataProvider;
    NSMutableDictionary *_bundleIDsWithAssistantSchemaConformanceCache;
    NSMutableDictionary *_typeIdentifierToAssistantSchemasCache;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned int)assistantSchemaTypeFromIdentifier:(id)a0;
- (id)disabledAppEntityTypeIdentifiersForBundleIdentifier:(id)a0;
- (BOOL)isAllowedClientBundleIdentifier:(id)a0;
- (id)lookupAssistantSchemasForTypeIdentifier:(id)a0 fromBundleId:(id)a1;
- (id)translateItem:(id)a0 fromBundleId:(id)a1 error:(id *)a2;

@end
