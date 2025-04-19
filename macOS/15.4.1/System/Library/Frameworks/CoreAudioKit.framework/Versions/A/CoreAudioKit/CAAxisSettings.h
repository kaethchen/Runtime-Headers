@class NSColor, NSDictionary, NSString;

@interface CAAxisSettings : NSObject

@property (retain) NSColor *axisColor;
@property (retain) NSColor *majorLineColor;
@property (retain) NSColor *minorLineColor;
@property (retain) NSColor *centerLineColor;
@property (retain) NSColor *pointReferenceLineColor;
@property int gridLineCount;
@property float minValue;
@property float maxValue;
@property float minAllowedValue;
@property float maxAllowedValue;
@property float centerValue;
@property float logBase;
@property BOOL clipDisplayToMaxAllowed;
@property (retain) NSDictionary *valueLabelStringAttributes;
@property (retain) NSDictionary *unitsLabelStringAttributes;
@property (retain) NSString *unitsLabelString;
@property BOOL abbreviateValues;
@property BOOL drawFirstAndLastKOnly;
@property BOOL suppressInitialUnit;
@property BOOL showActiveArea;
@property BOOL suppressLabels;
@property int labelPosition;

- (void)dealloc;

@end
