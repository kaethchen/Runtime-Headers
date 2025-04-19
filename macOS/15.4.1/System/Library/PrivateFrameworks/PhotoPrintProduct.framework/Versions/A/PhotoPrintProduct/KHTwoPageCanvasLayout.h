@class NSMapTable;

@interface KHTwoPageCanvasLayout : KHCanvasLayout

@property (retain, nonatomic) NSMapTable *sizeConstraintsByLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setScale:(double)a0;
- (void)setLayouts:(id)a0;
- (void)cleanupConstraints;
- (id)constraintsForCanvasView:(id)a0;
- (id)initWithLayouts:(id)a0;

@end
