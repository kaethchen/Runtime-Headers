@protocol KHFilterControlDelegate;

@interface KHFilterControl : UXView

@property id<KHFilterControlDelegate> delegate;
@property (nonatomic) long long selectedIndex;

- (id)init;
- (id)accessibilityRole;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)labelForSegment:(long long)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (void)setLabel:(id)a0 forSegment:(long long)a1;
- (void)setSegmentCount:(long long)a0;
- (void)setTag:(long long)a0 forSegment:(long long)a1;
- (long long)tagForSegment:(long long)a0;
- (long long)segmentForTag:(long long)a0;
- (id)buttonPrototype;
- (void)itemClicked:(id)a0;
- (void)setAccessibilityHelp:(id)a0 forSegment:(long long)a1;
- (void)setLabel:(id)a0 andTag:(long long)a1 forSegment:(long long)a2;
- (void)setSelectedIndex:(long long)a0 notify:(BOOL)a1;

@end
