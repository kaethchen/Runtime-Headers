@class NSArray;

@interface NSDraggingItem : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSArray *_components;
}

@property (copy) NSArray *imageComponents;
@property (readonly) id item;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } draggingFrame;
@property (copy) id /* block */ imageComponentsProvider;

- (void)dealloc;
- (id)description;
- (id)_initWithItem:(id)a0;
- (id)initWithPasteboardWriter:(id)a0;
- (id)initWithPasteboardWriter:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contents:(id)a2;
- (void)setDraggingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contents:(id)a1;

@end
