@interface EMAxisMapper : CMMapper

- (unsigned int)type;
- (id)label;
- (id)position;
- (float)unit;
- (id)values;
- (float)maxValue;
- (float)minValue;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)textColor;
- (id)labels;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
