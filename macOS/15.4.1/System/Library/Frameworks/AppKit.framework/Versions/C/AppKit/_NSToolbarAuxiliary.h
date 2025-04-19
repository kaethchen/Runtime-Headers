@class NSArray, NSString, NSToolbar, NSDictionary;

@interface _NSToolbarAuxiliary : NSObject {
    NSArray *draggedTypes;
    double windowOriginOffsetWhenHidingHint;
    NSString *_toolbarDragToken;
    NSToolbar *proxyToolbar;
    NSDictionary *identifiedItems;
    NSArray *defaultItems;
    NSArray *allowedItems;
    NSArray *selectableItems;
    double preferredPrincipalWidthRatio;
    double minimumInlineWindowTitleWidth;
    BOOL alwaysShowsFirstSidebarItem;
    double autohideHeight;
    unsigned long long originalAutoresizingMask;
    struct { unsigned char wiringNibConnections : 1; unsigned char firstMoveableItemIndex : 6; unsigned char isPaletteToolbar : 1; unsigned char overflowMenuUsesAllItems : 1; } _tbaFlags;
}

- (id)init;
- (void).cxx_destruct;

@end
