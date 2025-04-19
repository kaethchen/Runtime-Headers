@class EDResources, EDCollection, OADGraphicProperties, NSArray;

@interface CHDLegend : NSObject {
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    BOOL mIsVertical;
    BOOL mIsOverlay;
    NSArray *mLabelEffects;
}

- (id)description;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (unsigned long long)fontIndex;
- (id)graphicProperties;
- (BOOL)isAutoSizeAndPosition;
- (BOOL)isOverlay;
- (BOOL)isSingleColumnLegend;
- (id)labelEffects;
- (id)legendEntries;
- (int)legendPosition;
- (void)setFontIndex:(unsigned long long)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setIsOverlay:(BOOL)a0;
- (void)setIsSingleColumnLegend:(BOOL)a0;
- (void)setLabelEffects:(id)a0;
- (void)setLegendPosition:(int)a0;

@end
