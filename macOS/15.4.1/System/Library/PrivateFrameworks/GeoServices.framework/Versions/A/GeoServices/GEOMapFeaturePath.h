@class NSArray;

@interface GEOMapFeaturePath : NSObject {
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate3D *, std::allocator<GEOLocationCoordinate3D>> { struct *__value_; } __end_cap_; } _coordinates;
}

@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) NSArray *segments;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct { double x0; double x1; double x2; })coordinateAt:(unsigned long long)a0;

@end
