@interface MFPBlendStop : NSObject {
    float mFactor;
    float mPosition;
}

- (float)factor;
- (float)position;
- (id)initWithFactor:(float)a0 position:(float)a1;

@end
