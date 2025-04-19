@class TSCHChartModel, TSCHChartSeriesType, NSArray, TSCHChartInfo, TSCHChartSeries, TSCH3DChartType, TSCHChartAxis;

@interface TSCH3DChartModelEnumerator : NSObject {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _seriesValues;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _coordinateValues;
    NSArray *_seriesList;
    unsigned long long _numberOfValues;
    TSCHChartAxis *_coordinateAxis;
    TSCHChartAxis *_valueAxis;
    double _intercept;
    double _unitSpaceIntercept;
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _seriesEnumerator;
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _coordinateEnumerator;
}

@property (readonly, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) TSCH3DChartType *chartType;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType;

+ (id)enumeratorWithModel:(id)a0 chartType:(id)a1 seriesType:(id)a2;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)index;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })position;
- (id)valueString;
- (unsigned long long)elementIndex;
- (id)seriesName;
- (id)elementEnumerator;
- (double)intercept;
- (void)updateValue;
- (id)nextElement;
- (BOOL)showValueLabels;
- (unsigned int)valueLabelPositionForAxisValue:(double)a0;
- (double)axisSpaceValue;
- (unsigned long long)countSeries;
- (double)groupValue;
- (id)initWithModel:(id)a0 chartType:(id)a1 seriesType:(id)a2;
- (BOOL)isStackedPercentageThatRoundsDownToZero;
- (BOOL)isValidNonZero;
- (id)nextElement:(unsigned long long)a0;
- (id)nextSeries;
- (id)nextSeries:(unsigned long long)a0;
- (unsigned long long)numberOfSeries;
- (id)p_resetCoordinateEnumeration;
- (void)resetForReverseSeriesEnumeration:(BOOL)a0;
- (id)reverseSeriesEnumerator;
- (id)seriesEnumerator;
- (id)seriesFill;
- (id)seriesFillOrStrokeColor;
- (BOOL)showSeriesName;
- (BOOL)skipZeroValues;
- (double)unitSpaceIntercept;
- (double)unitSpaceValue;
- (double)unitSpaceValueForAxisValue:(double)a0;
- (void)updateAxes;
- (id)valueStringForLabelResources:(id)a0;

@end
