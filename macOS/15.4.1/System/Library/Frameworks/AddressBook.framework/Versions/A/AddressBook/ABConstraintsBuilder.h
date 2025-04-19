@class NSDictionary, NSMutableArray;

@interface ABConstraintsBuilder : NSObject {
    NSDictionary *_metrics;
    NSDictionary *_views;
    NSMutableArray *_constraints;
    unsigned long long _direction;
    long long _firstHorizontalAttribute;
    long long _secondHorizontalAttribute;
}

- (void).cxx_destruct;
- (id)constraints;
- (void)addAllVisualConstraints:(id)a0;
- (void)addAllVisualConstraints:(id)a0 withExtraViews:(id)a1;
- (void)horizontallyAlignVisibleViews:(id)a0 withSpacing:(double)a1 completionBlock:(id /* block */)a2;
- (id)initWithMetrics:(id)a0 views:(id)a1 direction:(unsigned long long)a2;
- (void)addConstraintWithItem:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toItem:(id)a3 attribute:(long long)a4 multiplier:(double)a5 constant:(double)a6;
- (void)addVisualConstraints:(id)a0 withExtraViews:(id)a1;
- (void)alignViews:(id)a0 usingAttribute:(long long)a1;
- (id)constraintWithGenericFormat:(id)a0;
- (void)horizontallyAlignViews:(id)a0 withSpacing:(double)a1;
- (id)mergedViewsWithExtraViews:(id)a0;
- (void)setUpHorizontalAttributesWithDirection:(unsigned long long)a0;

@end
