@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType

- (id)init;
- (unsigned long long)valueDimensions;
- (int)legendBadgeType;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapLine;
- (id)genericToSpecificPropertyMap;
- (id)propertiesForReferenceColors;
- (int)seriesElementType;
- (BOOL)supportsDownsampling;
- (BOOL)supportsFillSetFill;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;

@end
