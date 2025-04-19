@class REAttributeDescriptor;

@interface REMeshSkinningPartDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL packedInfluence;
@property (readonly, nonatomic) BOOL simplifiedPackedInfluence;
@property (readonly, nonatomic) unsigned char influencePerVertex;
@property (readonly, nonatomic) unsigned char simplifiedInfluencePerVertex;
@property (readonly, nonatomic) unsigned int skeletonIndex;
@property (readonly, nonatomic) REAttributeDescriptor *skinningInfluences;
@property (readonly, nonatomic) REAttributeDescriptor *influenceEndIndices;
@property (readonly, nonatomic) REAttributeDescriptor *simplifiedSkinningInfluences;
@property (readonly, nonatomic) REAttributeDescriptor *simplifiedInfluenceEndIndices;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addToSkinningModelBuilder:(void *)a0 payloadBuffers:(const void *)a1;
- (unsigned long long)estimateContainerSize;
- (id)initWithAttributeDescriptor:(const void *)a0 payloadBuilder:(void *)a1;
- (id)initWithSkeletonIndexAndInfluences:(unsigned int)a0 packedInfluence:(BOOL)a1 simplifiedPackedInfluence:(BOOL)a2 influencePerVertex:(unsigned char)a3 simplifiedInfluencePerVertex:(unsigned char)a4 skinningInfluences:(id)a5 influenceEndIndices:(id)a6 simplifiedSkinningInfluences:(id)a7 simplifiedInfluenceEndIndices:(id)a8;
- (BOOL)validateWithPayloadSize:(const void *)a0 skeletonCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2 simplifiedVertexCount:(unsigned long long)a3 error:(id *)a4;

@end
