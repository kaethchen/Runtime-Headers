@interface ABView : NSObject

+ (id)loadNibNamed:(id)a0 owner:(id)a1;
+ (void)addSubview:(id)a0 toView:(id)a1;
+ (id)viewsByIdentifierInViewHierarchy:(id)a0;
+ (void)insertResponder:(id)a0 afterResponder:(id)a1;
+ (id)addAnimation:(id)a0 toView:(id)a1 forKey:(id)a2;
+ (id)bitmapRepresentationOfViewByRedrawing:(id)a0;
+ (id)bitmapRepresentationOfViewFromBackingStore:(id)a0;
+ (BOOL)constraint:(id)a0 affectsAnyView:(id)a1;
+ (BOOL)constraint:(id)a0 affectsView:(id)a1;
+ (void)enumerateRectsBeingDrawnInView:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateViewHierarchy:(id)a0 usingBlock:(id /* block */)a1;
+ (id)firstAncestorOfView:(id)a0 ofClass:(Class)a1;
+ (void)forwardAction:(SEL)a0 sender:(id)a1 startingWithResponder:(id)a2;
+ (id)imageRepresentationOfViewByRedrawing:(id)a0;
+ (id)imageRepresentationOfViewFromBackingStore:(id)a0;
+ (BOOL)isViewOrDescendentFirstResponder:(id)a0;
+ (double)positionOfDividerAtIndex:(long long)a0 onSplitView:(id)a1;
+ (void)registerNibNamed:(id)a0 forIdentifier:(id)a1 onTableView:(id)a2;
+ (void)removeNextResponderOf:(id)a0;
+ (long long)segmentWithTag:(long long)a0 onSegmentedControl:(id)a1;
+ (void)setAlternateTitleTextColor:(id)a0 ofButton:(id)a1;
+ (void)setAnimation:(id)a0 forView:(id)a1 key:(id)a2;
+ (void)setEnabled:(BOOL)a0 forSegmentWithTag:(long long)a1 onSegmentedControl:(id)a2;
+ (void)setHidden:(BOOL)a0 onView:(id)a1;
+ (void)setHidden:(BOOL)a0 onViews:(id)a1;
+ (void)setTitleTextColor:(id)a0 ofButton:(id)a1;
+ (id)viewWithIdentifier:(id)a0 inViewHierarchy:(id)a1;

@end
