@class NSTableRowView;

@interface NSTableUpdateInsertItem : NSTableUpdateItem {
    NSTableRowView *_viewToAnimateFrom;
}

- (void)dealloc;

@end
