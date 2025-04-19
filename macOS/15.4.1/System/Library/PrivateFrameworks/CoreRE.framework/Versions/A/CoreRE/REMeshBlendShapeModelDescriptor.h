@class NSArray;

@interface REMeshBlendShapeModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long blendShapeIndexType;
@property (readonly, nonatomic) NSArray *perMeshPartBlendShapeBufferIndex;
@property (readonly, nonatomic) NSArray *blendShapeBuffers;
@property (readonly, nonatomic) NSArray *blendShapeGroupNames;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)estimateContainerSize;
- (id)initWithBlendShapeData:(const void *)a0 meshPartCount:(unsigned long long)a1 payloadBuilder:(void *)a2 deformationModelData:(void *)a3;
- (id)initWithBlendShapeIndexType:(unsigned long long)a0 blendShapeBuffers:(id)a1 perMeshPartBlendShapeBufferIndex:(id)a2 blendGroupNames:(id)a3;
- (id)initWithMeshBlendShapeData:(const void *)a0 meshPartCount:(unsigned long long)a1 payloadBuilder:(void *)a2 deformationModelData:(void *)a3;
- (BOOL)validateWithPayloadSize:(const void *)a0 partCount:(unsigned long long)a1 error:(id *)a2;

@end
