@class NSArray;

@interface REMeshSkinningModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *inverseBindPoseAttributes;
@property (readonly, nonatomic) NSArray *skinningParts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)estimateContainerSize;
- (id)initWithInverseBindPoseAttributes:(id)a0 skinningParts:(id)a1;
- (id)initWithMeshSkinningData:(const void *)a0 meshParts:(struct Slice<re::MeshAssetPart> { struct MeshAssetPart *x0; unsigned long long x1; })a1 inverseBindPoseAttributes:(id)a2 deformerBuilders:(void *)a3 payloadBuilder:(void *)a4;
- (id)initWithSkinningAttributeDescriptor:(const void *)a0 inverseBindPoseAttributes:(id)a1 payloadBuilder:(void *)a2;
- (id)initWithSkinningData:(const void *)a0 inverseBindPoseAttributes:(id)a1 deformerBuilders:(void *)a2 payloadBuilder:(void *)a3;
- (BOOL)validateWithPayloadSize:(const void *)a0 parts:(id)a1 partIndices:(id)a2 skeletonCount:(unsigned long long)a3 error:(id *)a4;

@end
