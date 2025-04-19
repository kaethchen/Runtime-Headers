@interface GESSMathAABB : NSObject {
    struct Box3T<float> { struct Vector3T<float> { union UnionType { void /* unknown type, empty encoding */ v; float xyz[3]; } vec; } min_; struct Vector3T<float> { union UnionType { void /* unknown type, empty encoding */ v; float xyz[3]; } vec; } max_; } _boxImpl;
}

@property float minX;
@property float minY;
@property float minZ;
@property float maxX;
@property float maxY;
@property float maxZ;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)boxImpl;
- (void)setBoxImpl:(const void *)a0;

@end
