@class NSArray, VFXMesh, VFXNode, VFXMeshSource;

@interface VFXSkinner : NSObject <NSSecureCoding> {
    struct __CFXSkinner { } *_skinner;
    VFXMesh *_baseMesh;
    VFXNode *_skeleton;
    BOOL _bonesAndIndicesCompression;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VFXNode *skeleton;
@property (readonly, nonatomic) VFXMesh *baseMesh;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } baseMeshBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) VFXMeshSource *boneWeights;
@property (readonly, nonatomic) VFXMeshSource *boneIndices;

+ (id)skinnerWithSkinnerRef:(struct __CFXSkinner { } *)a0;
+ (struct __CFXSkinner { } *)_createSkinnerWithCompressedData:(id)a0 bonesCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
+ (struct __CFXSkinner { } *)_createSkinnerWithVertexCount:(long long)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3 baseMesh:(id)a4;
+ (struct __CFXSkinner { } *)createSkinnerWithBaseMesh:(id)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3;
+ (id)skinnerWithBaseMesh:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)world;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (id)initWithSkinnerRef:(struct __CFXSkinner { } *)a0;
- (struct __CFXSkinner { } *)skinnerRef;
- (void)set_bonesAndIndicesCompression:(BOOL)a0;
- (BOOL)_bonesAndIndicesCompression;
- (BOOL)_setSkeleton:(id)a0;
- (id)joints;
- (void)setBoneInverseBindTransforms:(id)a0;
- (void)setBones:(id)a0;
- (void)_setBaseMesh:(id)a0;
- (struct __CFXWorld { } *)worldRef;

@end
