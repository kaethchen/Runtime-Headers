@class PHASEEngine;

@interface PHASEGeometryView : NSObject

@property (weak, nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoShapeHandle;

+ (void)geometryViewWithObject:(id)a0 index:(unsigned long long)a1 callback:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEngine:(id)a0 handle:(struct Handle64 { unsigned long long x0; })a1;

@end
