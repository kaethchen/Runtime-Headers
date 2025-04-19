@class NSString, NSArray, ML3Predicate;

@interface ML3Container : ML3Entity

@property (readonly, nonatomic) ML3Predicate *smartCriteriaPredicate;
@property (readonly, nonatomic, getter=isLimitedByCount) BOOL limitedByCount;
@property (readonly, nonatomic, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property (readonly, copy, nonatomic) NSString *limitingProperty;
@property (readonly, copy, nonatomic) NSArray *limitOrderingTerms;
@property (readonly, nonatomic) long long limitValue;
@property (readonly, copy, nonatomic) NSArray *cloudDisplayOrderingTerms;
@property (readonly, copy, nonatomic) NSArray *displayOrderingTerms;

+ (void)initialize;
+ (id)databaseTable;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (unsigned int)trackOrderFromProtocolSortType:(int)a0;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)a0;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (id)_allStaticItemContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)a0 usingConnection:(id)a1;
+ (BOOL)_reloadContainedMediaTypes:(BOOL)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(BOOL)a3 incrementEntityRevision:(BOOL)a4 usingLibrary:(id)a5 connection:(id)a6 forContainerPersistentID:(long long)a7;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1 itemUpdateBlock:(id /* block */)a2;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)a0;
+ (id)currentDeviceFavoritesPlaylistInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)a0 inLibrary:(id)a1;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)nextFilepathForPlaylistType:(int)a0 withPersistentID:(unsigned long long)a1 inLibrary:(id)a2;
+ (id)persistentIDColumnForTable:(id)a0;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)a0;
+ (void)populateSortOrdersOfPropertyValues:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)a0 usingConnection:(id)a1;
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)a0 fromContainersInLibrary:(id)a1 usingConnection:(id)a2;
+ (void)removeNonLibraryItemsFromContainer:(id)a0 usingConnection:(id)a1;
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)a0;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)a0;
+ (BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguageInLibrary:(id)a0;

- (id)multiverseIdentifier;
- (BOOL)_supportsOrderedTrackOperations;
- (BOOL)removeAllTracks;
- (long long)_maxPositionForTracksUsingConnection:(id)a0;
- (BOOL)_reloadContainedMediaTypes:(BOOL)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(BOOL)a3 incrementEntityRevision:(BOOL)a4 usingConnection:(id)a5;
- (BOOL)_removeTracksAtIndexes:(id)a0 notify:(BOOL)a1 usingConnection:(id)a2;
- (void)_setContainerSeedItemPersistentIDValue:(id)a0;
- (BOOL)_setItemPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 reloadContainedMediaTypes:(BOOL)a3 removedMediaTypes:(id)a4 addedMediaTypes:(id)a5 notify:(BOOL)a6 incrementEntityRevision:(BOOL)a7 usingConnection:(id)a8;
- (BOOL)appendTracksWithPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 notify:(BOOL)a3;
- (BOOL)appendTracksWithPersistentIDs:(id)a0 notify:(BOOL)a1;
- (id)childPlaylistPersistentIds;
- (id)criteriaListDescription;
- (id)evaluationOrderingTerms;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (BOOL)isBuiltInSmartPlaylist;
- (BOOL)isEvaluationOrderingDescending;
- (BOOL)moveTrackFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (BOOL)removeFirstTrack;
- (BOOL)removeTracksAtIndexes:(id)a0 notify:(BOOL)a1;
- (BOOL)setItemReactionText:(id)a0 onEntryAtPosition:(unsigned long long)a1 forUserIdentifier:(id)a2 previousReactionText:(id *)a3;
- (BOOL)setTracksWithPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 notify:(BOOL)a3;
- (BOOL)setTracksWithPersistentIDs:(id)a0 notify:(BOOL)a1;
- (void)setValues:(id)a0 forProperties:(id)a1 async:(BOOL)a2 withCompletionBlock:(id /* block */)a3;
- (id)trackPersistentIds;

@end
