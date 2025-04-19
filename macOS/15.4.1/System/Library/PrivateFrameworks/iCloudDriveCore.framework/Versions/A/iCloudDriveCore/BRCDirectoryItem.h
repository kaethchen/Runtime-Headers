@class NSString, BRCDocumentItem, BRCAliasItem, BRCItemGlobalID, NSNumber;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    BOOL _needsDeleteForItemIDTransfer;
    NSNumber *_childItemCount;
}

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCItemGlobalID *previousItemGlobalID;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (void).cxx_destruct;
- (BOOL)isDirectory;
- (id)childItemCount;
- (id)asShareableItem;
- (BOOL)hasLiveChildren;
- (BOOL)isShareableItem;
- (BOOL)hasDeadChildren;
- (void)_crossZoneMoveToParent:(id)a0;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertRecursiveProperties;
- (void)_insertZombieForCrossZoneMove;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (void)_markZombieForCrossZoneMove;
- (BOOL)_recomputeChildItemCount;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (id)_serverChildItemCount;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)_updateRecursiveProperties;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (id)collaborationIdentifierIfComputable;
- (BOOL)containsDirFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (id)folderAppLibraryRootRecord;
- (id)folderRootStructureRecord;
- (void)forceSignalPropagationToChildren;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isAppLibraryTrashFolder;
- (BOOL)isCrossZoneMoveTombstone;
- (BOOL)isDirectoryFault;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (void)markChildPropagationComplete;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (BOOL)possiblyContainsSharedItem;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)serverQuotaUsage;
- (void)signalPropagationToChildren;
- (void)transformIntoFSRoot;
- (BOOL)updateFromServerItem:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (void)updateWithContentModificationDate:(id)a0;

@end
