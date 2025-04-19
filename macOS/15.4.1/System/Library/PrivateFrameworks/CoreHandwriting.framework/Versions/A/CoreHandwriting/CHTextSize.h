@interface CHTextSize : NSObject

@property (readonly, nonatomic) double xHeight;
@property (readonly, nonatomic) double ascenderHeight;
@property (readonly, nonatomic) double descenderHeight;
@property (readonly, nonatomic) unsigned long long activeLines;

+ (id)averageTextSize:(id)a0;
+ (id)scaledSize:(id)a0 scale:(double)a1;
+ (id)textSizeFromPrincipalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a0 string:(id)a1;

- (id)init;
- (id)initWithXHeight:(double)a0 ascenderHeight:(double)a1 descenderHeight:(double)a2 activeLines:(unsigned long long)a3;
- (double)scaleToMatchSize:(id)a0;

@end
