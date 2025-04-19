@interface WFAppIntentsMetadataProvider : NSObject {
    void /* unknown type, empty encoding */ actionsCache;
    void /* unknown type, empty encoding */ queriesCache;
    void /* unknown type, empty encoding */ entitiesCache;
    void /* unknown type, empty encoding */ enumerationsCache;
    void /* unknown type, empty encoding */ examplePhrasesCache;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ memoryPressureDispatchQueue;
    void /* unknown type, empty encoding */ memoryPressureDispatchSource;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ metadataProvider;

+ (id)sharedProvider;
+ (id)daemonProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)enumerations;
- (id)actions;
- (id)entities;
- (void)purge;
- (id)queries;
- (id)actionWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)actionsForBundleIdentifier:(id)a0;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0;
- (id)allActionsIfAvailable;
- (id)allEntitiesIfAvailable;
- (id)defaultQueryForEntityIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)entitiesForBundleIdentifier:(id)a0;
- (id)entityWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)enumerationWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)enumerationsForBundleIdentifier:(id)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0 useCache:(BOOL)a1;
- (id)initWithMetadataProvider:(id)a0;
- (id)queriesForBundleIdentifier:(id)a0;
- (id)queryWithQueryIdentifier:(id)a0 fromBundleIdentifier:(id)a1;

@end
