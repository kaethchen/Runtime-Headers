@interface IKBookletPlasticCover : NSObject {
    long long _meshResolution;
    struct { union { struct { double x0; double x1; double x2; } x0; double x1[3]; } x0; } *_points;
    struct { union { struct { double x0; double x1; double x2; } x0; double x1[3]; } x0; } *_faceNormals;
    struct { union { struct { double x0; double x1; double x2; } x0; double x1[3]; } x0; } *_vertexNormals;
    struct { union { struct { double x0; double x1; double x2; } x0; double x1[3]; } x0; } *_invertedVertexNormals;
    double _materialSpecular;
    double _materialShininess;
    double _materialOpacity;
    float _plasticRed;
    float _plasticGreen;
    float _plasticBlue;
    double _currentCurveFactor;
}

@property double curveFactor;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (void)updateWithCurveFactor:(double)a0;

@end
