@interface CHDBubbleType : CHDChartType {
    BOOL mShowNegativeBubbles;
    BOOL mSizeRepresentsRadius;
    int mBubbleScale;
}

- (void)setBubbleScale:(int)a0;
- (int)bubbleScale;
- (int)defaultLabelPosition;
- (id)initWithChart:(id)a0;
- (BOOL)is3DType;
- (BOOL)isShowNegBubbles;
- (BOOL)isSizeRepresentingRadius;
- (void)setShowNegBubbles:(BOOL)a0;
- (void)setSizeRepresentsRadius:(BOOL)a0;

@end
