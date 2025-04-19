@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setSeriesIndex:(int)a0;
- (int)buildStep;
- (int)catagoryIndex;
- (int)chartSubElementType;
- (BOOL)hasBuildStep;
- (BOOL)hasCatagoryIndex;
- (BOOL)hasSeriesIndex;
- (int)seriesIndex;
- (void)setBuildStep:(int)a0;
- (void)setCatagoryIndex:(int)a0;
- (void)setChartSubElementType:(int)a0;

@end
