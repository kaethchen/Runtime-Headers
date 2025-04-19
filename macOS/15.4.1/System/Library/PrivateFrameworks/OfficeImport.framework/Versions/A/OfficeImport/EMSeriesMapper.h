@interface EMSeriesMapper : CMMapper

- (float)offset;
- (id)values;
- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)markerColor;
- (unsigned int)chartType;
- (unsigned int)markerType;
- (float)markerWidth;
- (BOOL)useSecondaryAxis;

@end
