@interface MRCroppingSpriteVBO : NSObject {
    unsigned int mVBO;
    unsigned char mMiddleOffset;
    unsigned char mOuterOffset;
    unsigned char mNumberOfVertices;
    BOOL mPositionWasUpdated;
    BOOL mRectsWereUpdated;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGSize { double width; double height; } halfSize;
@property (readonly, nonatomic) float rotation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } innerRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerRect;
@property (nonatomic) BOOL preservesImageAspectRatio;
@property (nonatomic) BOOL hitIsActive;
@property (nonatomic) BOOL needsInSpriteCoordinates;
@property (nonatomic) struct CGSize { double width; double height; } spriteCoordinatesFactor;
@property (nonatomic) struct CGPoint { double x; double y; } spriteCoordinatesOffset;
@property (nonatomic) unsigned char meshType;

- (id)init;
- (void)reset;
- (void)fakeRenderInContext:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 andSize:(struct CGSize { double x0; double x1; })a2 zRotation:(float)a3;
- (void)getOpaquePosition:(struct CGPoint { double x0; double x1; } *)a0 andHalfSize:(struct CGSize { double x0; double x1; } *)a1;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1;
- (BOOL)hitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 context:(id)a3;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 innerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(id)a4;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 innerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 outerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(id)a5;
- (void)renderImageInner:(id)a0 inContext:(id)a1;
- (void)renderImageMiddle:(id)a0 inContext:(id)a1;
- (void)renderImageOuter:(id)a0 inContext:(id)a1;
- (void)updateVBOsInContext:(id)a0;

@end
