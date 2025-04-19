@class NSView, NSString, NSTextField;

@interface ABCleanGroupEntryListCellView : NSTableCellView <ABMainWindowGroupListCellView>

@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) NSTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAppearanceWithRowView:(id)a0;
- (void)mouseEntered:(id)a0 rowView:(id)a1;
- (void)mouseExited:(id)a0 rowView:(id)a1;
- (void)setGroupEntry:(id)a0;

@end
