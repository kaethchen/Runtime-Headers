@interface SASBezierCurve : NSObject

@property void /* unknown type, empty encoding */ p0;
@property void /* unknown type, empty encoding */ p1;
@property void /* unknown type, empty encoding */ p2;
@property void /* unknown type, empty encoding */ p3;

- (id)initWithDictionary:(id)a0;
- (void)scaleBy:(SEL)a0;
- (void /* unknown type, empty encoding */)pointAt:(float)a0;
- (void /* unknown type, empty encoding */)derivativeAt:(float)a0;

@end
