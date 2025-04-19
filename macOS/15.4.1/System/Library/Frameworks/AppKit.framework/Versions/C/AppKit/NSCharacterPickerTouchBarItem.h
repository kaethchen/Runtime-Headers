@class NSViewController;

@interface NSCharacterPickerTouchBarItem : NSPopoverTouchBarItem

@property (class, readonly) NSCharacterPickerTouchBarItem *characterPickerTouchBarItem;

@property (retain) NSViewController *popoverViewController;

- (id)initWithIdentifier:(id)a0;
- (void)handleCloseButton;
- (id)popoverViewController;
- (void)setPopoverViewController:(id)a0;
- (void)showPopover:(id)a0;

@end
