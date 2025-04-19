@class SCNNode, NSArray, SCNGeometry, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {
    struct __C3DSkinner { } *_skinner;
    SCNGeometry *_baseGeometry;
    BOOL _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SCNNode *skeleton;
@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) SCNGeometrySource *boneWeights;
@property (readonly, nonatomic) SCNGeometrySource *boneIndices;

+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { } *)a0;
+ (struct __C3DSkinner { } *)_createSkinnerWithBones:(id)a0 boneWeights:(id)a1 boneIndices:(id)a2 baseGeometry:(id)a3;
+ (struct __C3DSkinner { } *)_createSkinnerWithCompressedData:(id)a0 bonesCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
+ (id)_skinnerWithBaseGeometry:(id)a0 skinnableGeometry:(id)a1 bones:(id)a2 boneInverseBindTransforms:(id)a3 bindMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a4;
+ (id)skinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)scene;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (id)initWithSkinnerRef:(struct __C3DSkinner { } *)a0;
- (struct __C3DScene { } *)sceneRef;
- (struct __C3DSkinner { } *)skinnerRef;
- (void)set_bonesAndIndicesCompression:(BOOL)a0;
- (BOOL)_bonesAndIndicesCompression;
- (void)_setBaseGeometry:(id)a0;
- (BOOL)_setSkeleton:(id)a0;
- (id)joints;
- (void)setBoneInverseBindTransforms:(id)a0;
- (void)setBones:(id)a0;

@end
