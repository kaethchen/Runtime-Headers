@class NSString, CHDChartType, CHDData, OADGraphicProperties, CHDFormula, CHDErrorBar, CHDDataLabel, CHDDataValue, CHDChart, EDKeyedCollection, EDCollection;

@interface CHDSeries : NSObject <EDKeyedObject> {
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)seriesWithChart:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isHidden;
- (void)setName:(id)a0;
- (long long)key;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)a0;
- (id)shallowCopy;
- (unsigned long long)categoryCount;
- (id)categoryData;
- (id)chart;
- (id)chartType;
- (void)clearBackPointers;
- (id)dataValuePropertiesCollection;
- (id)defaultDataLabel;
- (id)defaultSeriesNameForIndex:(unsigned long long)a0;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (id)graphicProperties;
- (BOOL)hasErrorBars;
- (BOOL)hasTrendlines;
- (id)initWithChart:(id)a0;
- (BOOL)isDateTimeFormattingFlag;
- (id)lastCachedName;
- (void)setCategoryData:(id)a0;
- (void)setChartType:(id)a0;
- (void)setDataValuePropertiesCollection:(id)a0;
- (void)setDateTimeFormattingFlag:(BOOL)a0;
- (void)setDefaultDataLabel:(id)a0;
- (void)setErrorBar:(id)a0;
- (void)setErrorBarXAxis:(id)a0;
- (void)setErrorBarYAxis:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setHiddenFlag:(BOOL)a0;
- (void)setLastCachedName:(id)a0;
- (void)setStyleIndex:(unsigned long long)a0;
- (void)setTrendlineCollection:(id)a0;
- (void)setValueData:(id)a0;
- (unsigned long long)styleIndex;
- (id)trendlineCollection;
- (id)valueData;

@end
