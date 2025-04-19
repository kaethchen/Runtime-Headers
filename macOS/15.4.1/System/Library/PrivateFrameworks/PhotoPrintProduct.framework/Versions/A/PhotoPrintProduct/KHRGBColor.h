@interface KHRGBColor : KHColor

- (id)description;
- (id)stringRepresentation;
- (struct CGColor { } *)CGColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)systemColor;

@end
