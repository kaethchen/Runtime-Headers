@class BookmarksController;
@protocol BookmarkFolderPickerMenuControllerDelegate;

@interface BookmarkFolderPickerMenuController : NSObject

@property (weak, nonatomic) id<BookmarkFolderPickerMenuControllerDelegate> delegate;
@property (readonly, nonatomic) BookmarksController *bookmarksController;

- (id)init;
- (void).cxx_destruct;
- (id)_addMenuItemsForBookmarkFolder:(id)a0 toMenu:(id)a1 indentationLevel:(unsigned long long)a2 shouldDisableMenuItems:(BOOL)a3 disablingMenuItemsForDescendantsOfBookmarkFolder:(id)a4;
- (id)_bookmarkMenuItemIcon;
- (void)_didPickBookmarkFolder:(id)a0;
- (id)_favoritesMenuItemIcon;
- (id)initWithBookmarksController:(id)a0;
- (void)setUpMenu:(id)a0 disablingMenuItemsForDescendantsOfBookmarkFolder:(id)a1;
- (void)setUpMenu:(id)a0 disablingMenuItemsForDescendantsOfBookmarkFolder:(id)a1 enableTopLevelBookmarksFolderMenuItem:(BOOL)a2;

@end
