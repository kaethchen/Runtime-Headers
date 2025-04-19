@class NSTableRowView;

@interface NSTableUpdateMoveItem : NSTableUpdateItem {
    BOOL _selected;
    BOOL _hidden;
    NSTableRowView *_viewBeingMoved;
}

- (void)dealloc;

@end
