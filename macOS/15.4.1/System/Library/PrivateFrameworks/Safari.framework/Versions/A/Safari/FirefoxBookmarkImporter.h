@class NSString;

@interface FirefoxBookmarkImporter : FirefoxImporter <BrowserBookmarkImportEngine>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_allBookmarksIncludingChildren:(id)a0;
- (int)_queryDatabase:(void *)a0 forMenuFolderId:(int *)a1 toolbarFolderId:(int *)a2 unfiledFolderId:(int *)a3;
- (unsigned long long)_countBookmarksIncludingChildren:(id)a0;
- (BOOL)_queryDatabase:(void *)a0 forMenuBookmarks:(id *)a1 toolbarBookmarks:(id *)a2 unfiledBookmarks:(id *)a3;
- (void)getHasImportableBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)importBookmarksWithDelegate:(id)a0;

@end
