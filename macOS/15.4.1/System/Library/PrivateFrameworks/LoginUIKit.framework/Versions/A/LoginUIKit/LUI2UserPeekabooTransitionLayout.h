@interface LUI2UserPeekabooTransitionLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)appearsAsButtonToAccessibility;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
