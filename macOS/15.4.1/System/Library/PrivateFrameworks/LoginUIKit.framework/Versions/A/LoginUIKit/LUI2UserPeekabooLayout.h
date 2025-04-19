@class LUI2UserPeekabooTransitionLayout;

@interface LUI2UserPeekabooLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

@property (retain) LUI2UserPeekabooTransitionLayout *transitionLayout;

+ (void)initialize;
+ (struct { struct CGPoint { double x0; double x1; } x0; double x1; struct CGSize { double x0; double x1; } x2; })userViewDimensionsForItemAtIndex:(long long)a0 of:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)appearsAsButtonToAccessibility;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (id)layoutForTransitonToLayout:(id)a0;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
