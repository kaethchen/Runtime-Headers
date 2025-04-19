@class BookmarksUndoController, NSString, NSDictionary, BookmarkMergeDriver, NSMutableArray;
@protocol BrowserBookmarkImporterDelegate;

@interface BrowserBookmarkImporter : BrowserDataImporter <BookmarkMergeDriverDelegate, BrowserBookmarkImportEngineDelegate> {
    unsigned long long _importOrigin;
    NSDictionary *_previouslyImportedBookmarksByImportOriginUUID;
    NSMutableArray *_reimportedBookmarks;
    BookmarkMergeDriver *_mergeDriver;
}

@property (nonatomic) BOOL hasBegunBookmarkTransaction;
@property (retain, nonatomic) BookmarksUndoController *bookmarksUndoController;
@property (weak, nonatomic) id<BrowserBookmarkImporterDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_adoptChangesFromReimportedBookmark:(id)a0 existingBookmark:(id)a1;
- (id)_destinationBookmarkListForCollection:(int)a0;
- (void)_didFinishSuccessfully:(BOOL)a0 withNumberOfSuccessfullyImportedBookmarks:(unsigned long long)a1;
- (id)_existingBookmarkForReimportedBookmark:(id)a0;
- (id)_importInfoForBookmarkWithImportOrigin:(unsigned long long)a0 originUUID:(id)a1;
- (unsigned long long)_importOrigin;
- (id)_keyForImportInfo:(id)a0;
- (id)_mergeDriver;
- (id)_previouslyImportedBookmarksByImportOriginUUID;
- (void)_processImportFromOrigin:(unsigned long long)a0 bookmarkDictionary:(id)a1 andAppendToBookmarkIfPossible:(id)a2;
- (BOOL)_shouldImportBookmark:(id)a0 fromOrigin:(unsigned long long)a1;
- (void)_updateReimportedBookmarks;
- (BOOL)bookmarkMergeDriver:(id)a0 shouldMergeTitlesOfBookmark:(id)a1 existingBookmark:(id)a2;
- (void)importBookmarksUsingImporterProxy:(id)a0;
- (void)importerDidFailToImportBookmarks;
- (void)importerDidFinishImportingNumberOfBookmarks:(unsigned long long)a0;
- (void)importerDidImportBookmarks:(id)a0 fromCollection:(int)a1;

@end
