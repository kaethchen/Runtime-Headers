@interface CHDCategoryAxis : CHDAxis {
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}

- (BOOL)isAutomatic;
- (id)initWithResources:(id)a0;
- (void)adjustAxisPositionForHorizontalChart;
- (BOOL)isLabelFrequencyAutomatic;
- (BOOL)isNoMultipleLabellevel;
- (int)labelAlignment;
- (long long)labelFrequency;
- (void)setAutomatic:(BOOL)a0;
- (void)setLabelAlignment:(int)a0;
- (void)setLabelFrequency:(long long)a0;
- (void)setNoMultipleLevelLabel:(BOOL)a0;
- (void)setShowSeriesLabels:(BOOL)a0;
- (BOOL)showSeriesLabels;

@end
