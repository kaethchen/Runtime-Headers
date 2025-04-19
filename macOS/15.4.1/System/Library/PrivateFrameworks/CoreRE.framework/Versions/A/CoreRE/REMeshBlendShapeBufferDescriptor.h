@class NSArray, REAttributeDescriptor;

@interface REMeshBlendShapeBufferDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REAttributeDescriptor *floatDeltaBuffer;
@property (readonly, nonatomic) REAttributeDescriptor *blendShapeConstantsBuffer;
@property (readonly, nonatomic) REAttributeDescriptor *indexBuffer;
@property (readonly, nonatomic) REAttributeDescriptor *floatSliceBuffer;
@property (readonly, nonatomic) REAttributeDescriptor *coefficientIndexBuffer;
@property (readonly, nonatomic) REAttributeDescriptor *renormalizationBuffer;
@property (readonly, nonatomic) NSArray *blendShapeNames;
@property (readonly, nonatomic) BOOL hasNormals;
@property (readonly, nonatomic) BOOL hasTangents;
@property (readonly, nonatomic) BOOL hasBitangents;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addToBlendShapeModelBuilder:(struct BlendShapeModelBuilder { struct Device { id x0; } x0; struct DeformationModelData *x1; } *)a0 blendShapeIndex:(unsigned long long)a1 blendShapeGroupName:(const struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } *)a2 payloadBuffers:(const void *)a3;
- (unsigned long long)estimateContainerSize;
- (id)initWithBlendShapeBufferPayload:(void *)a0 indexType:(unsigned long long)a1 payloadBuilder:(void *)a2;
- (id)initWithBlendShapeNames:(id)a0 floatDeltaBuffer:(id)a1 blendShapeConstantsBuffer:(id)a2 indexBuffer:(id)a3 floatSliceBuffer:(id)a4 coefficientIndexBuffer:(id)a5 renormalizationBuffer:(id)a6 hasNormals:(BOOL)a7 hasTangents:(BOOL)a8 hasBitangents:(BOOL)a9;
- (BOOL)validateWithPayloadSize:(const void *)a0 error:(id *)a1;

@end
