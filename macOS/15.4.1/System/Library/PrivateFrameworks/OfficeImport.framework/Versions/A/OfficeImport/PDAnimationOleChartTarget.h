@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (int)level;
- (void)setLevel:(int)a0;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
