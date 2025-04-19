@class NSImageView, NSTextField, NSArray, PXAssistantListViewItem;

@interface PXAssistantListTableCell : NSTableCellView {
    NSArray *_layoutConstraints;
}

@property (retain, nonatomic) NSTextField *detailTextField;
@property (retain, nonatomic) NSImageView *accessoryImageView;
@property (retain, nonatomic) PXAssistantListViewItem *item;

- (void).cxx_destruct;
- (void)_setSubtitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutConstraints;
- (void)_setAccessoryImage:(id)a0 color:(id)a1;
- (void)_setSystemImageName:(id)a0;
- (void)_setTitle:(id)a0 color:(id)a1;

@end
