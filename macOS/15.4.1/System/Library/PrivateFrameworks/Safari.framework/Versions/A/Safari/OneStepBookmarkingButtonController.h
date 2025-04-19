@class NSString, OneStepBookmarkingButton, NSMenu;

@interface OneStepBookmarkingButtonController : NSObject <NSMenuDelegate, OneStepBookmarkingButtonController> {
    NSMenu *_dynamicOneStepBookmarkingMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) OneStepBookmarkingButton *oneStepBookmarkingButton;

- (void).cxx_destruct;
- (void)menuDidClose:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (BOOL)_canAddBookmark;
- (void)_addBookmarkToFolder:(id)a0;
- (void)_addBookmarkToReadingList:(id)a0;
- (void)_addBookmarkToReadingListWithoutAskingAndMakeDefault:(BOOL)a0;
- (void)_addBookmarkWithoutAskingToFolder:(id)a0 andMakeDefault:(BOOL)a1;
- (void)_addOneStepBookmarkingMenuItemsForBookmarkFolder:(id)a0 toMenu:(id)a1 indentationLevel:(unsigned long long)a2;
- (unsigned long long)_bookmarkDestinationForRepresentedObject:(id)a0;
- (void)_didSelectOneStepBookmarkMenuItemWithIdentifier:(id)a0 makeDefault:(BOOL)a1;
- (id)_dynamicOneStepBookmarkingMenu;
- (unsigned long long)_insertionLocationForNewBookmarkInFolder:(id)a0 destinationFolder:(id *)a1;
- (id)_oneStepBookmarkingBookmarkMenuItemIcon;
- (unsigned long long)_oneStepBookmarkingDefaultDestination;
- (id)_oneStepBookmarkingFavoritesMenuItemIcon;
- (id)_oneStepBookmarkingReadingListMenuItemIcon;
- (id)_representedObjectForOneStepBookmarkingMenuItemWithUserDefaultKey:(id)a0;
- (void)_setUpOneStepBookmarkingMenu:(id)a0;
- (void)handleButtonDrag:(id)a0 mouseDownEvent:(id)a1;
- (void)oneClickAddBookmark:(id)a0;
- (id)oneStepBookmarkingButtonActionDescription;
- (void)updateOneStepBookmarkingButton;

@end
