@class NSString;

@interface REMeshInstanceDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int modelIndex;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) struct REMeshLodSelectOptions { struct MeshLodSelectOptions { unsigned char strategy; float bias; } options; } lodSelectOptions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (unsigned long long)estimateContainerSize;
- (id)initWithMeshAssetInstance:(const void *)a0;
- (id)initWithName:(id)a0 modelIndex:(unsigned int)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 lodSelectOptions:(struct REMeshLodSelectOptions { struct MeshLodSelectOptions { unsigned char x0; float x1; } x0; })a3;
- (struct MeshInstance { struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } x0; struct DataArrayHandle<re::MeshModel> { struct ElementPointer { unsigned short x0; unsigned short x1; } x0; unsigned int x1 : 24; unsigned char x2 : 8; } x1; struct MeshLodSelectOptions { unsigned char x0; float x1; } x2; struct Matrix4x4<float> { union { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; struct float4x4 { void /* unknown type, empty encoding */ x0[4]; } x1; struct { struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x0; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x2; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x3; } x2; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x3[4]; float x4[4][4]; float x5[16]; } x0; } x3; struct FixedArray<int> { struct Allocator *x0; unsigned long long x1; int *x2; } x4; struct FixedArray<re::SharedPtr<re::MaterialParameterBlock>> { struct Allocator *x0; unsigned long long x1; void *x2; } x5; })meshInstanceWithModels:(const void *)a0 meshManager:(void *)a1;
- (BOOL)validateWithModelCount:(unsigned long long)a0 error:(id *)a1;

@end
