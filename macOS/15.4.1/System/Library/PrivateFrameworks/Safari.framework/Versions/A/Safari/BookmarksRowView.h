@class NSButton, BookmarksViewController;

@interface BookmarksRowView : NSTableRowView {
    BookmarksViewController *_bookmarksViewController;
    NSButton *_disclosureButton;
}

@property (retain, nonatomic) id item;

- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateDisclosureButtonVisibility;
- (id)initWithBookmarksViewController:(id)a0;

@end
