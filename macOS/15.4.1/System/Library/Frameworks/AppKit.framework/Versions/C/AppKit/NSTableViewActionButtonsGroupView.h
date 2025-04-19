@class NSTableViewStyleData;

@interface NSTableViewActionButtonsGroupView : NSView {
    NSTableViewStyleData *_tableViewStyleData;
    unsigned long long _rowActionEdge;
    double _intrinsicWidth;
    double _buttonWidthRatio;
    double _consumeButtonWidthRatio;
}

- (void)dealloc;
- (void)layout;

@end
