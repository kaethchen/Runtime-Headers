@class OITSUColor;

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}

- (void).cxx_destruct;
- (float)position;
- (id)color;
- (id)initWithColor:(id)a0 position:(float)a1;

@end
