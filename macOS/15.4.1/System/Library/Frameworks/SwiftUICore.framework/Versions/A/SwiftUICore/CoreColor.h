@interface CoreColor : NSObject {
    struct CGColor { } *_color;
}

+ (id)blackColorWithSystem:(unsigned char)a0;
+ (id)colorWithSystem:(unsigned char)a0 cgColor:(struct CGColor { } *)a1;
+ (id)systemBlueColorWithSystem:(unsigned char)a0;
+ (id)systemBrownColorWithSystem:(unsigned char)a0;
+ (id)systemCyanColorWithSystem:(unsigned char)a0;
+ (id)systemGrayColorWithSystem:(unsigned char)a0;
+ (id)systemGreenColorWithSystem:(unsigned char)a0;
+ (id)systemIndigoColorWithSystem:(unsigned char)a0;
+ (id)systemMintColorWithSystem:(unsigned char)a0;
+ (id)systemOrangeColorWithSystem:(unsigned char)a0;
+ (id)systemPinkColorWithSystem:(unsigned char)a0;
+ (id)systemPurpleColorWithSystem:(unsigned char)a0;
+ (id)systemRedColorWithSystem:(unsigned char)a0;
+ (id)systemTealColorWithSystem:(unsigned char)a0;
+ (id)systemYellowColorWithSystem:(unsigned char)a0;

- (void)dealloc;
- (void)set;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;

@end
