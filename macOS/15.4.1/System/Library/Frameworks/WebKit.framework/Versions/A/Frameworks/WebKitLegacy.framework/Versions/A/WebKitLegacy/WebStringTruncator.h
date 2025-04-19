@interface WebStringTruncator : NSObject

+ (void)initialize;
+ (id)centerTruncateString:(id)a0 toWidth:(float)a1;
+ (id)centerTruncateString:(id)a0 toWidth:(float)a1 withFont:(id)a2;
+ (id)rightTruncateString:(id)a0 toWidth:(float)a1 withFont:(id)a2;
+ (float)widthOfString:(id)a0 font:(id)a1;

@end
