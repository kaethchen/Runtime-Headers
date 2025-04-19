@class NSView, NSMutableArray;

@interface IAAppCheckboxMatrix : NSObject <IAAppCheckboxMatrixRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) id delegate;

- (void).cxx_destruct;
- (id)view;
- (id)initWithItems:(id)a0;
- (double)rowHeight;
- (id)selectedItems;
- (void)checkboxClicked:(id)a0;
- (id)itemForApp:(id)a0;
- (void)syncUI;

@end
