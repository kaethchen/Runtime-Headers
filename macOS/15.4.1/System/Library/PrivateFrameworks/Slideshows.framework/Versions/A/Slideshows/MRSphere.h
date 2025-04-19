@interface MRSphere : NSObject {
    float *mVertices;
    float *mTextureCoordinates;
    float *mNormals;
}

@property (nonatomic) unsigned int longitudeResolution;
@property (nonatomic) unsigned int latitudeResolution;
@property (nonatomic) float halfLongitudeAngle;
@property (nonatomic) float halfLatitudeAngle;
@property (nonatomic) float radius;

- (void)dealloc;
- (id)init;
- (void)renderDumbImage:(id)a0 inContext:(id)a1 atPosition:(struct CGPoint { double x0; double x1; })a2 andSize:(struct CGSize { double x0; double x1; })a3;

@end
