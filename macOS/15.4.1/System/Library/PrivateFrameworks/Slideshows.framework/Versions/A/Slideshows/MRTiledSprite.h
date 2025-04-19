@class NSMutableArray;

@interface MRTiledSprite : NSObject {
    BOOL mIsSealed;
    NSMutableArray *mTriangles;
    float *mVertices;
    float *mBasicTextureCoordinates;
    float *mInSpriteCoordinates;
    float *mTextureCoordinates[4];
    NSMutableArray *mMiddleTriangles;
    float *mMiddleVertices;
    float *mMiddleBasicTextureCoordinates;
    float *mMiddleInSpriteCoordinates;
    float *mMiddleTextureCoordinates[4];
    NSMutableArray *mOuterTriangles;
    float *mOuterVertices;
    float *mOuterBasicTextureCoordinates;
    float *mOuterInSpriteCoordinates;
    float *mOuterTextureCoordinates[4];
    struct CGSize { double width; double height; } mInSpriteCoordinatesFactor;
    struct CGPoint { double x; double y; } mInSpriteCoordinatesOffset;
    struct CGSize { double width; double height; } mTextureCoordinatesFactor[4];
    struct CGPoint { double x; double y; } mTextureCoordinatesOffset[4];
    BOOL mNeedsTextureCoordinates[4];
    BOOL mNeedsToUpdateInSpriteCoordinates;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGSize { double width; double height; } halfSize;
@property (readonly, nonatomic) float rotation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } innerRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerRect;
@property (nonatomic) BOOL hitIsActive;
@property (nonatomic) BOOL needsInSpriteCoordinates;
@property (nonatomic) BOOL preservesImageAspectRatio;

- (void)dealloc;
- (void)seal;
- (void)subtractSprite:(id)a0;
- (void)getOpaquePosition:(struct CGPoint { double x0; double x1; } *)a0 andHalfSize:(struct CGSize { double x0; double x1; } *)a1;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1;
- (BOOL)hitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 innerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(id)a4;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 innerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 outerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(id)a5;
- (void)renderDumbImage:(id)a0 inContext:(id)a1;
- (void)renderImage:(id)a0 inContext:(id)a1;
- (void)renderImageInner:(id)a0 inContext:(id)a1;
- (void)renderImageMiddle:(id)a0 inContext:(id)a1;
- (void)renderImageOuter:(id)a0 inContext:(id)a1;
- (void)setNeedsTextureCoordinates:(BOOL)a0 onTextureUnit:(unsigned long long)a1;
- (void)setSpriteCoordinatesFactor:(struct CGSize { double x0; double x1; })a0 andOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)setTextureCoordinatesFactor:(struct CGSize { double x0; double x1; })a0 andOffset:(struct CGPoint { double x0; double x1; })a1 onTextureUnit:(unsigned long long)a2;
- (void)subtractOpaqueSpriteWithPosition:(struct CGPoint { double x0; double x1; })a0 halfSize:(struct CGSize { double x0; double x1; })a1 andRotation:(float)a2;
- (void)subtractSpriteAtPosition:(struct CGPoint { double x0; double x1; })a0 withSize:(struct CGSize { double x0; double x1; })a1 zRotation:(float)a2 andOpaqueRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inContext:(id)a4;
- (void)subtractTriangle:(double[6])a0 fromTriangle:(double[6])a1 addTrianglesTo:(id)a2;
- (void)updateInSpriteCoordinates;

@end
