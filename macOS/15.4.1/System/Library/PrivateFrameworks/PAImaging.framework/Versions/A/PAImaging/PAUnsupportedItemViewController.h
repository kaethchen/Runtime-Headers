@class PAUnsupportedItemView;

@interface PAUnsupportedItemViewController : PAImageItemViewController

@property (readonly, nonatomic) PAUnsupportedItemView *unsupportedItemView;

- (id)initWithAsset:(id)a0;
- (void)attachToCanvasView;
- (void)detachFromCanvasView;

@end
