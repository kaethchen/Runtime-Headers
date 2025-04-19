@class AKGridViewItem;

@interface AKBezelFreeButton_Mac : NSButton

@property BOOL isInTrackingLoop;
@property BOOL isDragging;
@property BOOL allowsDrags;
@property (weak, nonatomic) AKGridViewItem *gridViewItem;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (void)_commonInit;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)mouseDown:(id)a0;
- (void)draggingEndedNotification:(id)a0;

@end
