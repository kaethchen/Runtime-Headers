@class AMApplicationDefinition, NSMutableDictionary, NSArray, AMActionMetadataStore, NSMutableArray;

@interface AMActionRegistry : NSObject

@property (retain) NSMutableArray *cachesInResolutionOrder;
@property (retain) NSMutableArray *customActions;
@property (retain) NSMutableArray *applicationDefinitionActions;
@property (retain) NSMutableArray *invalidActions;
@property (retain) NSMutableArray *internalConversionActions;
@property (retain) NSMutableDictionary *explicitlyLoadedActionsByBundleIdentifier;
@property BOOL didLoadAllRegularActions;
@property BOOL didLoadAllConversionActions;
@property (retain) AMActionMetadataStore *actionMetadataCache;
@property (retain, nonatomic) AMApplicationDefinition *applicationDefinitionAsActionFilter;
@property (nonatomic) BOOL shouldFilterActions;
@property (readonly, nonatomic) NSArray *regularActions;
@property (readonly, nonatomic) NSArray *conversionActions;
@property (readonly, nonatomic) BOOL isFilteringActions;

+ (void)rebuildCache;
+ (id)sharedActionRegistry;

- (id)init;
- (void).cxx_destruct;
- (id)customActionDictionaryWithUUID:(id)a0;
- (void)_addExplicitlyLoadedActionsIntoArray:(id)a0;
- (id)_allCachesInResolutionOrder;
- (void)_loadActionMetadataCacheIfNeeded;
- (void)_loadAllActionsForActionType:(id)a0;
- (void)_loadAllConversionActionsIfNeeded;
- (void)_loadAllRegularActionsIfNeeded;
- (void)_loadInternalConversionActions;
- (void)_rebuildCachesIfNeeded;
- (id)actionNamesWithBundleIdentifiers:(id)a0;
- (void)addCustomActionDictionary:(id)a0;
- (id)customActionFromCustomActionDictionary:(id)a0;
- (id)dateAddedForActionWithBundleIdentifier:(id)a0;
- (id)genericActionBundleForIdentifier:(id)a0;
- (id)genericActionFromCacheForIdentifier:(id)a0;
- (id)importActionWithURL:(id)a0 replaceExisting:(BOOL)a1 error:(id *)a2;
- (void)incrementUseCountForActionWithBundleIdenifier:(id)a0;
- (id)loadActionWithURL:(id)a0 replaceExisting:(BOOL)a1 error:(id *)a2;
- (void)loadDefinitionFileActions;
- (id)regularActionWithBundleIdentifier:(id)a0;
- (void)removeCustomActionDictionary:(id)a0;
- (unsigned long long)useCountForActionWithBundleIdentifier:(id)a0;
- (void)writeCache;

@end
