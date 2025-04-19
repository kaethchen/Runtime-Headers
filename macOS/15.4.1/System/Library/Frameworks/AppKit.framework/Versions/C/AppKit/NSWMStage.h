@interface NSWMStage : NSObject

@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } stageInsets;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) unsigned long long style;

- (id)initWithStageInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 safeAreaInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 style:(unsigned long long)a2;

@end
