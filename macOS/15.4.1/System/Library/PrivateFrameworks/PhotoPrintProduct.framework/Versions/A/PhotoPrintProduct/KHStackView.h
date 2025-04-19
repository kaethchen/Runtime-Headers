@class NSMapTable;

@interface KHStackView : UXView

@property (retain, nonatomic) NSMapTable *customEdgeInsets;
@property long long orientation;
@property long long alignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_stack;
- (void)_horizontallyStackViews:(id)a0 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)_verticallyStackViews:(id)a0 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)setCustomInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 forView:(id)a1;
- (void)setViews:(id)a0 withOrientation:(long long)a1;

@end
