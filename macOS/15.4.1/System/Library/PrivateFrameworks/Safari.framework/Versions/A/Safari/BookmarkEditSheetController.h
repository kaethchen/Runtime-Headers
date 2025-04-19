@class NSTextField, NSString, SafariWebBookmark, SafariWebBookmarkList, NSArray, NSStackView, NSPopUpButton, WBTabGroup, BookmarksController;

@interface BookmarkEditSheetController : NSWindowController <NSWindowDelegate> {
    NSPopUpButton *locationPopUp;
    NSTextField *promptField;
    NSTextField *titleField;
    NSTextField *descriptionField;
    BookmarksController *_bookmarksController;
    BOOL _titleOnly;
    BOOL _inModalDelegateCallback;
    NSArray *_duplicateBookmarksForURL;
    WBTabGroup *_tabGroup;
}

@property (weak) NSStackView *stackView;
@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic, getter=isRestrictedToBookmarksBar) BOOL restrictedToBookmarksBar;
@property (readonly, nonatomic) NSString *suggestedTitle;
@property (readonly, nonatomic) SafariWebBookmarkList *bookmarkParent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_suggestedTitleForBookmark:(id)a0;
+ (id)beginBookmarkEditSheetWithBookmark:(id)a0 bookmarksController:(id)a1 restrictedToBookmarksBar:(BOOL)a2 titleOnly:(BOOL)a3 modalForWindow:(id)a4 completionHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_bookmarksChanged:(id)a0;
- (void)_cancelNewBookmark;
- (id)_initWithBookmark:(id)a0 bookmarksController:(id)a1 restrictedToBookmarksBar:(BOOL)a2 titleOnly:(BOOL)a3 tabGroup:(id)a4;
- (void)_locationSelectionDidChange:(id)a0;
- (long long)_menuIndexForBookmarkLocationUUID:(id)a0;
- (void)_populateLocationPopUp;
- (void)_sheetDidEnd;
- (void)_startObservingBookmarkChanges;
- (void)_stopObservingBookmarkChanges;
- (id)_uuidOfSelectedBookmarkLocationInPopup;
- (void)acceptNewBookmark:(id)a0;
- (void)cancelNewBookmark:(id)a0;

@end
