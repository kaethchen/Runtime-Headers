@class NSString;

@interface CNPickerGroupHeaderCellView : NSTableCellView <ABCNPickerGroupCellView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awakeFromNib;
- (void)updateAppearanceWithRowView:(id)a0;

@end
