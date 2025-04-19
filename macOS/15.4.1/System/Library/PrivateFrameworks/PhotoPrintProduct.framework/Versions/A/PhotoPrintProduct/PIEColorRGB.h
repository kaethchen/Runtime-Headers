@interface PIEColorRGB : NSObject

@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) double alpha;
@property (readonly) BOOL hasAlpha;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)vector;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;

@end
