@class NSButton, NSString;
@protocol LibraryTableCellViewDelegate;

@interface LibraryTableCellView : NSTableCellView <NSTextFieldDelegate> {
    NSString *_titleBeforeEditing;
}

@property (weak) NSButton *trailingButton;
@property (weak) NSButton *moreButton;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak) id<LibraryTableCellViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)awakeFromNib;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)_allowsTextInput;
- (void)_showMoreMenu:(id)a0;
- (void)setMoreButtonVisible:(BOOL)a0;
- (void)startEditing;
- (void)updateTrailingButton;

@end
