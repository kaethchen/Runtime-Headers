@class NSTextField, NSString, NSView, NSStackView, NSButton;

@interface ABCleanGroupHeaderEntryListCellView : NSTableCellView <ABMainWindowGroupListCellView> {
    BOOL _shouldShowGroupPlusButton;
}

@property (nonatomic) NSStackView *stackView;
@property (nonatomic) NSButton *groupPlusButton;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) NSTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateAppearanceWithRowView:(id)a0;
- (void)addAccessoryViewToStackView;
- (void)constraintViewSizeToSquare:(id)a0;
- (void)mouseEntered:(id)a0 rowView:(id)a1;
- (void)mouseExited:(id)a0 rowView:(id)a1;
- (void)setGroupEntry:(id)a0;

@end
