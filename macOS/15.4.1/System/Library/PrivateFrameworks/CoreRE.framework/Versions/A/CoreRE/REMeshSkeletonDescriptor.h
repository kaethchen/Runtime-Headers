@class NSString, NSArray;

@interface REMeshSkeletonDescriptor : NSObject <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _localRestPoseScales;
    struct vector<simd_quatf, std::allocator<simd_quatf>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_quatf *, std::allocator<simd_quatf>> { struct *__value_; } __end_cap_; } _localRestPoseRotations;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _localRestPoseTranslations;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _inverseBindPose;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *jointNames;
@property (readonly, nonatomic) NSArray *parentIndices;
@property (readonly, nonatomic) const void *localRestPoseScales;
@property (readonly, nonatomic) const struct { } *localRestPoseRotations;
@property (readonly, nonatomic) const void *localRestPoseTranslations;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *inverseBindPose;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)validateWithError:(id *)a0;
- (id)initWithMeshSkeletonDefinition:(const void *)a0;
- (unsigned long long)estimateContainerSize;
- (id)initWithMeshAssetSkeleton:(const void *)a0;
- (id)initWithName:(id)a0 jointNames:(id)a1 parentIndices:(id)a2 localRestPoseScales:(const void *)a3 localRestPoseRotations:(const struct { } *)a4 localRestPoseTranslations:(const void *)a5 inverseBindPose:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a6;
- (struct MeshAssetSkeleton { struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } x0; struct FixedArray<re::StringID> { struct Allocator *x0; unsigned long long x1; struct StringID *x2; } x1; struct FixedArray<unsigned int> { struct Allocator *x0; unsigned long long x1; unsigned int *x2; } x2; struct FixedArray<re::GenericSRT<float>> { struct Allocator *x0; unsigned long long x1; void *x2; } x3; struct FixedArray<re::Matrix4x4<float>> { struct Allocator *x0; unsigned long long x1; void *x2; } x4; })meshAssetSkeleton;

@end
