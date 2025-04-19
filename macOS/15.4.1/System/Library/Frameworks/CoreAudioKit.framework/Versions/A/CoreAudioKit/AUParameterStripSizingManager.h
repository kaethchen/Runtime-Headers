@interface AUParameterStripSizingManager : NSObject {
    double preferredParamNameColumnWidth;
    double preferredMinValueColumnWidth;
    double preferredMaxValueColumnWidth;
    double preferredValueFieldWidth;
    double maximumValueFieldWidth;
    double preferredValueControlColumnWidth;
}

@property double preferredParamNameColumnWidth;
@property double maximumParamNameColumnWidth;
@property double preferredMinValueColumnWidth;
@property double maximumMinValueColumnWidth;
@property double preferredMaxValueColumnWidth;
@property double maximumMaxValueColumnWidth;
@property double preferredValueFieldWidth;
@property double preferredUnitsColumnWidth;
@property double maximumUnitsColumnWidth;
@property double preferredValueControlColumnWidth;
@property (readonly) double locationForParamLabel;
@property (readonly) double locationForMinValueLabel;
@property (readonly) double locationForMaxValueLabel;
@property (readonly) double locationForValueControl;
@property (readonly) double locationForValueField;
@property (readonly) double locationForUnitsLabel;

- (id)init;
- (void)recalculateColumnsForWidth:(double)a0;

@end
