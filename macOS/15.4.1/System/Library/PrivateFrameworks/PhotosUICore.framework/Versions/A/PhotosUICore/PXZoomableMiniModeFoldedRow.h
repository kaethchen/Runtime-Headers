@interface PXZoomableMiniModeFoldedRow : NSObject

@property (readonly, nonatomic) struct { double alpha; double scale; double translation; double zOffset; double blur; double dimming; } collapseProgress;
@property (readonly, nonatomic) double yPosition;

- (id)description;
- (id)initWithCollapseProgress:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0 yPosition:(double)a1;

@end
