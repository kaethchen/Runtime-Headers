@class NSArray;
@protocol KHCanvasLayoutDelegate;

@interface KHCanvasLayout : NSObject

@property (weak, nonatomic) id<KHCanvasLayoutDelegate> delegate;
@property (retain, nonatomic) NSArray *layouts;
@property (nonatomic) double scale;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) long long layoutOrientation;

+ (id)canvasLayoutWithLayouts:(id)a0 scale:(double)a1 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (struct CGSize { double x0; double x1; })canvasSizeForLayouts:(id)a0 layoutScale:(double)a1 orientation:(long long)a2;

- (void).cxx_destruct;
- (id)constraintsForCanvasView:(id)a0;
- (id)initWithLayouts:(id)a0;

@end
