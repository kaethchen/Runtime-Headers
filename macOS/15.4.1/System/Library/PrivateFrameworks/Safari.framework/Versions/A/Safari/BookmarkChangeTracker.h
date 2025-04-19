@class WebBookmarkGroup, NSMutableSet;

@interface BookmarkChangeTracker : NSObject {
    NSMutableSet *_uuidsToTreatAsModifiesWhenAdding;
    NSMutableSet *_uuidsToIgnoreWhenDeleting;
}

@property (readonly, weak, nonatomic) WebBookmarkGroup *bookmarkGroup;

- (void).cxx_destruct;
- (void)_notifyTabGroupManagerForChangeToBookmark:(id)a0;
- (void)_notifyTabGroupManagerOfBookmarkDeletionIfNeeded:(id)a0;
- (void)_notifyTabGroupManagerOfBookmarkInsertion:(id)a0 withParent:(id)a1;
- (void)_notifyTabGroupManagerOfBookmarkReorder:(id)a0 withParent:(id)a1;
- (void)_recordAdd:(id)a0;
- (void)_recordDelete:(id)a0;
- (void)_recordModify:(id)a0 isMove:(BOOL)a1 changedAttributes:(id)a2;
- (void)beginMoveBookmarkBetweenParents:(id)a0;
- (void)beginMoveBookmarkWithinParent:(id)a0;
- (void)bookmarkWasAdded:(id)a0;
- (void)bookmarkWasModified:(id)a0 changedAttributes:(id)a1;
- (void)bookmarkWasRemoved:(id)a0;
- (void)endMoveBookmarkBetweenParents:(id)a0;
- (void)endMoveBookmarkWithinParent:(id)a0;
- (id)initWithBookmarkGroup:(id)a0;

@end
