@interface ML3Genre : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)joinClausesForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateTrackValues:(id)a0;

@end
