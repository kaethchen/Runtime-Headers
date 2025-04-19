@class OKSCNDoubleSidedMaterial;

@interface OKSCNOrigamiGeometry : SCNGeometry {
    double _length;
    struct SCNVector3 { double x; double y; double z; } _vertices[20];
    OKSCNDoubleSidedMaterial *_material;
}

@property struct SCNVector3 { double x; double y; double z; } pos0;
@property struct SCNVector3 { double x; double y; double z; } pos1;
@property struct SCNVector3 { double x; double y; double z; } pos2;
@property struct SCNVector3 { double x; double y; double z; } pos4;
@property struct SCNVector3 { double x; double y; double z; } pos5;
@property struct SCNVector3 { double x; double y; double z; } pos8;
@property struct SCNVector3 { double x; double y; double z; } pos9;
@property struct SCNVector3 { double x; double y; double z; } pos10;

+ (id)origamiWithSize:(double)a0;

- (void)dealloc;
- (void)setBackContents:(id)a0;
- (void)setFrontContents:(id)a0;
- (void)updateFoldingRendering:(double)a0;

@end
