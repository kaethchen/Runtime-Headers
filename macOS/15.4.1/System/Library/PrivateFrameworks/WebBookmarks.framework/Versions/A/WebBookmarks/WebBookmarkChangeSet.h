@class NSArray, NSMutableDictionary, NSURL, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface WebBookmarkChangeSet : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    int _lastBookmarkIDForAddingInMemoryBookmark;
    NSMutableOrderedSet *_changes;
    NSMutableDictionary *_bookmarkIDToChanges;
    NSMutableDictionary *_associatedIDToChanges;
    NSMutableDictionary *_folderIDToChildrenChanges;
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;
    NSMutableDictionary *_folderIDToAddedChildrenChanges;
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;
    NSMutableDictionary *_folderIDToReorderedChildrenChanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSArray *changes;
@property (readonly, nonatomic) BOOL shouldSync;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addChange:(id)a0;
- (void)addChanges:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)removeAllChanges;
- (void)removeChange:(id)a0;
- (void)persistChangesWithCompletion:(id /* block */)a0;
- (id)addedBookmarksInBookmarkFolder:(int)a0;
- (void)_addChange:(id)a0;
- (void)_coalesceChangesForChangeIfNeeded:(id)a0;
- (void)_readPersistedChanges;
- (void)_removeAllChanges;
- (void)_removeChange:(id)a0;
- (void)applyModificationsToBookmarks:(id)a0;
- (BOOL)bookmarkIsAddedInMemory:(int)a0;
- (id)bookmarksAfterReplayingChangesToBookmarks:(id)a0 inFolderWithID:(int)a1;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)a0;
- (BOOL)folderHasReplaceChange:(int)a0;
- (id)initWithFileURL:(id)a0 readPersistedChanges:(BOOL)a1;
- (BOOL)isBookmarkDeleted:(int)a0;
- (id)modifiedBookmarksInBookmarkFolder:(int)a0;
- (int)nextBookmarkIDForAddingBookmarkInMemory;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)a0;
- (unsigned long long)numberOfReorderedBookmarksInBookmarkFolder:(int)a0;
- (long long)replayChangesOnBookmark:(id)a0;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)a0 toDatabaseGeneratedID:(int)a1;

@end
