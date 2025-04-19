@class NSTextField, NSString, NSAppearance, NSButton;
@protocol StartPageEmptyTabGroupFavoritesItemDelegate;

@interface StartPageEmptyTabGroupFavoritesItem : NSCollectionViewItem

@property (weak, nonatomic) NSTextField *emptyFolderTextField;
@property (weak, nonatomic) NSButton *openBookmarksButton;
@property (copy, nonatomic) NSString *emptyFolderText;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSAppearance *appearance;
@property (weak, nonatomic) id<StartPageEmptyTabGroupFavoritesItemDelegate> delegate;

- (void).cxx_destruct;
- (void)openBookmarksInSidebarWasPressed:(id)a0;

@end
