@interface QLPlopWindowEffect : QLAnimationWindowEffect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fullFrame;
}

+ (id)plopWindow:(id)a0 duration:(double)a1;

- (void)setValue:(float)a0;
- (id)prepare;
- (void)done;

@end
