@class NSArray, NSView, NSDate, NSIndexPath;

@interface _NSTouchBarCustomizationDragRecord : NSObject

@property struct CGPoint { double x; double y; } dragLocation;
@property (readonly) id draggedItem;
@property (readonly, weak) NSView *coordinateSpace;
@property (readonly) struct CGPoint { double x; double y; } originalLocation;
@property (readonly, copy) NSDate *startTime;
@property (readonly) long long dragType;
@property (readonly) struct CGPoint { double x; double y; } anchorPoint;
@property (copy) NSArray *replacedItems;
@property (copy) NSIndexPath *postReplacementInsertionIndexPath;
@property struct CGSize { double width; double height; } backupDragSize;
@property (getter=isPending) BOOL pending;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 coordinateSpace:(id)a1 originalLocation:(struct CGPoint { double x0; double x1; })a2 dragLocation:(struct CGPoint { double x0; double x1; })a3 dragType:(long long)a4 anchorPoint:(struct CGPoint { double x0; double x1; })a5;

@end
