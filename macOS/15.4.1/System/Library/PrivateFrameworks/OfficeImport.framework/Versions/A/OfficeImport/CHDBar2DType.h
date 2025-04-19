@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (BOOL)isHorizontal;
- (void)setColumn:(BOOL)a0;
- (int)overlap;
- (int)defaultLabelPosition;
- (int)gapWidth;
- (id)initWithChart:(id)a0;
- (BOOL)isColumn;
- (void)setGapWidth:(int)a0;
- (void)setOverlap:(int)a0;

@end
