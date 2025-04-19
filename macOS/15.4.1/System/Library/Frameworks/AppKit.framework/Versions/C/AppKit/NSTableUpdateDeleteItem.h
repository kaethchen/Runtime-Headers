@class NSTableRowView;

@interface NSTableUpdateDeleteItem : NSTableUpdateItem {
    NSTableRowView *_viewToDelete;
}

- (void)dealloc;

@end
