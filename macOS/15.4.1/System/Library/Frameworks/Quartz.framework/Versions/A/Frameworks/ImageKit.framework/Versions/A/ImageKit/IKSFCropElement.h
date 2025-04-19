@class CIImage;

@interface IKSFCropElement : IKSFElement {
    id _delegate;
    unsigned int _glTexture;
    BOOL _live;
    CIImage *_image;
}

+ (id)cropElement;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (float)rotation;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })origin;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setRotation:(float)a0;
- (id)initFromDictionary:(id)a0;
- (BOOL)useGPU;
- (void)IKDVGrabberUpdated:(id)a0;
- (float)scaling;
- (void)stopLiveSession;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 rotation:(float)a1 scale:(float)a2;
- (void)setScaling:(float)a0;
- (void)startLiveSession;

@end
