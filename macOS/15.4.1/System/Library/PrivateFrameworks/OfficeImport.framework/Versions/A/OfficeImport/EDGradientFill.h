@class NSMutableDictionary;

@interface EDGradientFill : EDFill {
    int mType;
    NSMutableDictionary *mStops;
    double mDegree;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFocusRect;
}

+ (id)gradientWithType:(int)a0 degree:(double)a1 focusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stops:(id)a3 resources:(id)a4;
+ (id)gradientWithType:(int)a0 degree:(double)a1 top:(double)a2 bottom:(double)a3 right:(double)a4 left:(double)a5 stops:(id)a6 resources:(id)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithResources:(id)a0;
- (void)setStops:(id)a0;
- (id)stops;
- (id)colorForStopAtPosition:(id)a0;
- (double)degree;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRect;
- (id)initWithType:(int)a0 degree:(double)a1 focusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stops:(id)a3 resources:(id)a4;
- (id)initWithType:(int)a0 degree:(double)a1 top:(double)a2 bottom:(double)a3 right:(double)a4 left:(double)a5 stops:(id)a6 resources:(id)a7;
- (BOOL)isEqualToGradientFill:(id)a0;
- (void)setDegree:(double)a0;
- (void)setFocusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStopColor:(id)a0 atPosition:(id)a1;

@end
