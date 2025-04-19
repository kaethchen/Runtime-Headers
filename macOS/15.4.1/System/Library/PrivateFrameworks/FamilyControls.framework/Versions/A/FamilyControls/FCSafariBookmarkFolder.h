@class NSMutableArray;

@interface FCSafariBookmarkFolder : FCSafariBookmark {
    NSMutableArray *_children;
}

+ (BOOL)supportsSecureCoding;
+ (id)bookmarkFolderWithFlatArray:(id)a0;
+ (id)bookmarkWithDictionary:(id)a0;
+ (id)defaultBookmarksForLevel:(id)a0;

- (void)dealloc;
- (id)description;
- (long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (id)bookmarks;
- (BOOL)isFolder;
- (long long)indexOfBookmarkFolderWithTitle:(id)a0;
- (void)removeBookmark:(id)a0;
- (void)addBookmark:(id)a0;
- (void)addBookmark:(id)a0 atIndex:(long long)a1;
- (void)addBookmark:(id)a0 atPath:(id)a1;
- (id)allBookmarks;
- (id)bookmarkAtIndex:(long long)a0;
- (id)flatArray;
- (id)flatArrayWithArray:(id)a0 beginningAtPath:(id)a1;
- (id)folderForBookmark:(id)a0;
- (long long)indexOfBookmark:(id)a0;
- (void)removeBookmarkAtIndex:(long long)a0;
- (void)removeBookmarks:(id)a0;

@end
