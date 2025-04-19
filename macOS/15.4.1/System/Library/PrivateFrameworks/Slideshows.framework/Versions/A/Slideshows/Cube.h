@class MRImage;

@interface Cube : NSObject {
    float _textureCoords[8][2];
    float _sourceTriangleTextures[36][2];
    float _destinationTriangleTextures[36][2];
    long long _xIndex;
    long long _yIndex;
    long long _matrixWidth;
    long long _matrixHeight;
    double _localAspectRatio;
    BOOL _animateCube;
    BOOL _cubeReadyForAnimation;
    int _flipDirection;
    float _rps[3];
    float _position[3];
    float _rotation[3];
    float _scale[3];
}

@property (retain, nonatomic) MRImage *sourceImage;
@property (retain, nonatomic) MRImage *destinationImage;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)draw:(id)a0 withArguments:(id)a1;
- (void)setupTextureInformation:(int)a0;
- (void)updateRotations:(double)a0 rotateHorizontally:(BOOL)a1;

@end
