@interface FI_TValueConverter : NSObject

+ (BOOL)object:(id)a0 boolValue:(BOOL *)a1;
+ (BOOL)object:(id)a0 cgFloatValue:(double *)a1;
+ (BOOL)object:(id)a0 doubleValue:(double *)a1;
+ (BOOL)object:(id)a0 floatValue:(float *)a1;
+ (BOOL)object:(id)a0 fourCharCodeValue:(unsigned int *)a1;
+ (BOOL)object:(id)a0 integerValue:(long long *)a1;
+ (BOOL)object:(id)a0 pointValue:(struct CGPoint { double x0; double x1; } *)a1;
+ (BOOL)object:(id)a0 rectValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
+ (BOOL)object:(id)a0 sint32Value:(int *)a1;
+ (BOOL)object:(id)a0 sint64Value:(long long *)a1;
+ (BOOL)object:(id)a0 sizeValue:(struct CGSize { double x0; double x1; } *)a1;
+ (BOOL)object:(id)a0 stringValue:(void *)a1;

@end
