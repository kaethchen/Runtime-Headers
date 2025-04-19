@interface CNView : NSObject

+ (id)alignView:(id)a0 toView:(id)a1 withAttribute:(long long)a2;
+ (id)alignLeadingView:(id)a0 toTrailingView:(id)a1;
+ (id)alignLeadingView:(id)a0 toTrailingView:(id)a1 spacing:(double)a2;
+ (id)alignLeadingView:(id)a0 toTrailingView:(id)a1 spacing:(double)a2 minimum:(BOOL)a3;
+ (id)alignView:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toView:(id)a3 attribute:(long long)a4 constant:(double)a5;
+ (id)alignView:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toView:(id)a3 attribute:(long long)a4 constant:(double)a5 priority:(float)a6;
+ (id)alignView:(id)a0 attribute:(long long)a1 toView:(id)a2 attribute:(long long)a3;
+ (id)alignView:(id)a0 attribute:(long long)a1 toView:(id)a2 attribute:(long long)a3 constant:(double)a4;
+ (id)alignView:(id)a0 toView:(id)a1 withAttribute:(long long)a2 constant:(double)a3;
+ (id)alignView:(id)a0 toView:(id)a1 withAttribute:(long long)a2 priority:(float)a3;
+ (id)alignView:(id)a0 withAttribute:(long long)a1 constant:(double)a2;
+ (void)alignViews:(id)a0 withAttribute:(long long)a1;
+ (void)enableAutoLayoutForViews:(id)a0;
+ (void)fillContainerWithView:(id)a0;
+ (void)installConstraintsWithVisualFormat:(id)a0 views:(id)a1;
+ (void)installConstraintsWithVisualFormat:(id)a0 views:(id)a1 metrics:(id)a2;
+ (void)installConstraintsWithVisualFormat:(id)a0 views:(id)a1 options:(unsigned long long)a2;
+ (void)installConstraintsWithVisualFormat:(id)a0 withViews:(id)a1 metrics:(id)a2 options:(unsigned long long)a3;
+ (BOOL)isView:(id)a0 inSameWindowAsView:(id)a1;
+ (void)requireIntrinsicSizeForView:(id)a0;
+ (id)setHeight:(double)a0 forView:(id)a1;
+ (void)setSize:(struct CGSize { double x0; double x1; })a0 forView:(id)a1;
+ (id)setWidth:(double)a0 forView:(id)a1;
+ (void)spanContainerHeightForView:(id)a0;
+ (void)spanContainerWidthForView:(id)a0;

@end
