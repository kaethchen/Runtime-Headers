@class NSArray, NSMutableArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints> {
    NSMutableArray *_constraints;
}

@property (readonly, copy, nonatomic) NSArray *constraints;

- (id)init;
- (void).cxx_destruct;
- (void)_keepEdge:(unsigned int)a0 ofSpriteWithReference:(id)a1 referencingOptions:(unsigned long long)a2 inequality:(long long)a3 visibleEdge:(unsigned int)a4 offset:(double)a5;
- (void)keepEdge:(unsigned int)a0 ofSpriteWithReference:(id)a1 referencingOptions:(unsigned long long)a2 greaterThanOrEqualToVisibleEdge:(unsigned int)a3 offset:(double)a4;
- (void)keepEdge:(unsigned int)a0 ofSpriteWithReference:(id)a1 referencingOptions:(unsigned long long)a2 lessThanOrEqualToVisibleEdge:(unsigned int)a3 offset:(double)a4;
- (void)keepSpriteWithReference:(id)a0 referencingOptions:(unsigned long long)a1 visuallyStableForAttribute:(long long)a2;
- (void)keepVisiblePortionOfSpriteWithReference:(id)a0 referencingOptions:(unsigned long long)a1 padding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 visuallyStableForAttribute:(long long)a3;

@end
