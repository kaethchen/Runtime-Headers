@class CPKSearchFieldPopoverTouchBarItem, CPKEmojiIMViewController;

@interface CPKPickerSearchField : CPKSearchField <CPKEmojiIMViewControllerDelegate>

@property CPKEmojiIMViewController *emojiBarController;
@property (retain) CPKSearchFieldPopoverTouchBarItem *popoverItem;

- (void)dealloc;
- (BOOL)becomeFirstResponder;
- (void)characterPickerPopoverDidClosed;
- (void)dismissEmojiIMViewController:(id)a0;
- (void)emojiIMViewController:(id)a0 characterSelected:(id)a1;
- (void)notifySearchResults:(id)a0;
- (void)searchButtonClickedOnEmojiIMViewController:(id)a0;
- (void)setEmojiBarState:(id)a0;

@end
