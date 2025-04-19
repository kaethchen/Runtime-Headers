@interface ML3Album : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (id)databaseTable;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (void)updateTrackValues:(id)a0;

@end
