@class NSArray;

@interface AXFMouseCursorImage : NSObject

@property (retain, nonatomic) NSArray *_images;
@property (readonly, nonatomic) struct CGSize { double width; double height; } displaySize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeAtCurrentCursorScale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } displayHotSpot;
@property (readonly, nonatomic) double maxCursorScale;
@property (readonly, copy, nonatomic) NSArray *images;

- (void).cxx_destruct;
- (id)bestImageForCurrentCursorScale;
- (id)bestImageForCursorScale:(double)a0;
- (id)initWithImages:(id)a0 displaySize:(struct CGSize { double x0; double x1; })a1 displayHotSpot:(struct CGPoint { double x0; double x1; })a2;

@end
