@class NSURL, NSSet, SafariWebBookmarkList;

@interface RecursiveBookmarkDuplicateHousekeeper : NSObject {
    SafariWebBookmarkList *_rootBookmark;
}

@property (retain, nonatomic, setter=setDAVHomeURL:) NSURL *davHomeURL;
@property (nonatomic) BOOL keepsBookmarksWithSyncData;
@property (copy, nonatomic) NSSet *addedBookmarks;

- (id)init;
- (void).cxx_destruct;
- (id)_moveBookmark:(id)a0 intoFolder:(id)a1 index:(unsigned long long)a2;
- (BOOL)_deduplicateSubtreeRootedAtFolder:(id)a0 mergingAdditionalChildren:(id)a1;
- (unsigned long long)_numberOfDuplicateBookmarksUnderFolder:(id)a0 recurse:(BOOL)a1;
- (void)deleteAllDuplicateSiblingsWithCompletionHandler:(id /* block */)a0;
- (void)getNumberOfDuplicateBookmarksWithCompletionHandler:(id /* block */)a0;
- (id)initWithRootBookmark:(id)a0;

@end
