@class SafariWebBookmarkList, NSMutableArray;

@interface WBSNetscapeBookmarkFileReaderDelegateProxy : NSObject <WBSNetscapeBookmarkFileReaderDelegate> {
    NSMutableArray *_stack;
    BOOL _parsingReadingList;
}

@property (readonly, nonatomic) unsigned long long successfullyImportedBookmarksCount;
@property (readonly, nonatomic) SafariWebBookmarkList *importFolder;

- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)endAddingFolder;
- (void)appendBookmarkWithTitle:(id)a0 urlString:(id)a1;
- (void)beginAddingFolder:(id)a0 identifier:(id)a1;
- (id)_bookmarkFoldersStack;

@end
