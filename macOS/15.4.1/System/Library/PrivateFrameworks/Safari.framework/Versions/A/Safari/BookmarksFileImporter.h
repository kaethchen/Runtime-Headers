@interface BookmarksFileImporter : NSObject

@property (readonly, nonatomic) BOOL canImportBookmarks;

+ (id)sharedImporter;

- (void)importBookmarksFromFilesAtURLs:(id)a0;
- (void)importBookmarks;
- (id)_collectionNamed:(id)a0;
- (id)_dateForImportFolderName;
- (id)_uniqueImportFolderName;
- (id)importBookmarksFrom:(id)a0;
- (unsigned long long)importBookmarksFrom:(id)a0 intoBookmarksFolder:(id)a1;

@end
