@class NSString, NSOrderedSet;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (id)sortDescriptorsForAlbumsInFolderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1;
+ (id)childKeyForOrdering;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (BOOL)isProcessingOrderKeyCompliance;
+ (id)localizedRecoveredTitle;
+ (void)setIsProcessingOrderKeyCompliance:(BOOL)a0;
+ (id)validKindsForPersistence;

- (BOOL)isEmpty;
- (unsigned long long)approximateCount;
- (unsigned long long)count;
- (id)identifier;
- (void)didSave;
- (void)prepareForDeletion;
- (void)willSave;
- (id)assets;
- (id)containers;
- (unsigned long long)photosCount;
- (void)addChildCollections:(id)a0;
- (id)albums;
- (unsigned long long)assetsCount;
- (BOOL)canPerformDeleteOperation;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (BOOL)isValidForPersistence;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (id)mutableAssets;
- (void)removeChildCollections:(id)a0;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (unsigned long long)videosCount;
- (BOOL)needsReordering;
- (void)addChildCollectionsObject:(id)a0;
- (BOOL)albumHasFixedOrder:(id)a0;
- (short)albumListType;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)childKeyForOrdering;
- (id)containersRelationshipName;
- (id)descriptionOfChildCollectionOrderValues;
- (void)enforceFixedOrderKeyComplianceWithOrderKeyManager:(id)a0;
- (BOOL)hasAtLeastOneAlbum;
- (void)insertObject:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (id)listOfLastModifiedDateChangeProperties;
- (id)payloadForChangedKeys:(id)a0;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void)removeChildCollectionsObject:(id)a0;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setNeedsReordering;
- (void)updateAlbumsOrderIfNeeded;

@end
