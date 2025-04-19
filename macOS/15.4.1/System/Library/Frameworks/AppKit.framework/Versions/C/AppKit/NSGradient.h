@class NSColorSpace;

@interface NSGradient : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ _locations;
    void /* unknown type, empty encoding */ _colorSpace;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) struct CGGradient { } *CGGradient;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSColorSpace *colorSpace;
@property (nonatomic, readonly) long long numberOfColorStops;

+ (id)intelligenceAmbientGradientWithStartColor:(id)a0 endColor:(id)a1;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColors:(id)a0;
- (void)drawFromCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 toCenter:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3 options:(unsigned long long)a4;
- (void)drawFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 options:(unsigned long long)a2;
- (void)drawInBezierPath:(id)a0 angle:(double)a1;
- (void)drawInBezierPath:(id)a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)getColor:(id *)a0 location:(double *)a1 atIndex:(long long)a2;
- (id)initWithColors:(id)a0 atLocations:(const double *)a1 colorSpace:(id)a2;
- (id)initWithColorsAndLocations:(id)a0;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1;
- (id)interpolatedColorAtLocation:(double)a0;

@end
