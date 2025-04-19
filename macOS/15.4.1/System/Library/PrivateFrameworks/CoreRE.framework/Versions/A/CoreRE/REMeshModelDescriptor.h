@class REMeshSkinningModelDescriptor, NSString, NSArray, REMeshBlendShapeModelDescriptor;

@interface REMeshModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *partIndices;
@property (readonly, nonatomic) unsigned int skeletonCount;
@property (readonly, nonatomic) REMeshSkinningModelDescriptor *skinningModel;
@property (readonly, nonatomic) REMeshBlendShapeModelDescriptor *blendShapeModel;
@property (readonly, nonatomic) NSArray *lods;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMax;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct MeshModel { struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } x0; struct AABB { struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x0; struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x1; } x1; struct FixedArray<re::MeshPart> { struct Allocator *x0; unsigned long long x1; struct MeshPart *x2; } x2; struct FixedArray<re::MeshLodLevelInfo> { struct Allocator *x0; unsigned long long x1; struct MeshLodLevelInfo *x2; } x3; struct DeformationModelData { struct unique_ptr<void, std::function<void (void *)>> { struct __compressed_pair<void *, std::function<void (void *)>> { void *x0; struct function<void (void *)> { struct __value_func<void (void *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; } x0; } x0[18]; } x4; })meshModelWithMeshModelContext:(void *)a0 inverseBindPoseBuffers:(const void *)a1 allocator:(struct Allocator { void /* function */ **x0; char *x1; BOOL x2; } *)a2;
- (unsigned long long)estimateContainerSize;
- (id)initWithMeshAssetModel:(const void *)a0 inverseBindPoseAttributes:(id)a1 deformerBuilders:(void *)a2 payloadBuilder:(void *)a3 deformationModelData:(void *)a4;
- (id)initWithName:(id)a0 partIndices:(SEL)a1 skeletonCount:(id)a2 skinningModel:(id)a3 blendShapeModel:(unsigned int)a4 lods:(id)a5 boundingBoxMin:(id)a6 boundingBoxMax:(id)a7;
- (id)initWithResourceDefinitionModel:(const void *)a0 inverseBindPoseAttributes:(id)a1 deformerBuilders:(void *)a2 payloadBuilder:(void *)a3 levels:(struct DynamicArray<re::MeshResourceDefinition::Level> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Level *x4; })a4 deformationModelData:(void *)a5;
- (BOOL)validateWithParts:(id)a0 payloadSize:(struct FixedInlineArray<unsigned long, 8UL> { unsigned long long x0[8]; })a1 error:(id *)a2;

@end
