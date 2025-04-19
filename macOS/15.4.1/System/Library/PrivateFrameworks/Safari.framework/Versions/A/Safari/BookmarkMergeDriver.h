@class NSURL, BookmarksUndoController;
@protocol BookmarkMergeDriverDelegate;

@interface BookmarkMergeDriver : NSObject {
    BookmarksUndoController *_bookmarksUndoController;
    BOOL _delegateImplementsShouldMergeTitles;
}

@property (weak, nonatomic) id<BookmarkMergeDriverDelegate> delegate;
@property (retain, nonatomic) NSURL *davHomeURL;

- (id)init;
- (void).cxx_destruct;
- (void)_mergeBookmark:(id)a0 withExistingBookmark:(id)a1;
- (id)initWithUndoController:(id)a0;
- (void)mergeBookmarkFolder:(id)a0 withExistingFolder:(id)a1;

@end
