@class TSCH3DResource, TSCH3DChartMeshSharedResource, TSUOnce, TSCH3DChartTexcoordSharedResource, TSCH3DGeometry, TSCH3DGeometryArrays, NSObject, TSCHChartSeries;
@protocol TSCH3DChartMeshCreator;

@interface TSCH3DChartMeshResources : NSObject {
    NSObject<TSCH3DChartMeshCreator> *_creator;
    TSCHChartSeries *_series;
    TSCH3DChartMeshSharedResource *_vertex;
    TSCH3DChartMeshSharedResource *_bounds;
    TSCH3DResource *_cachedBounds;
    TSUOnce *_cachedBoundsOnce;
    TSCH3DChartMeshSharedResource *_normal;
    TSCH3DChartTexcoordSharedResource *_texcoord;
    TSCH3DGeometryArrays *_arrays;
    TSCH3DGeometry *_geometry;
}

@property (readonly, nonatomic) TSCH3DResource *vertex;
@property (readonly, nonatomic) TSCH3DResource *bounds;
@property (readonly, nonatomic) TSCH3DResource *normal;
@property (readonly, nonatomic) TSCH3DResource *texcoord;

+ (id)nullBuffer;
+ (id)resourcesWithSeries:(id)a0 creator:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)geometryResourceWithPrimitiveType:(int)a0;
- (id)initWithSeries:(id)a0 creator:(id)a1;
- (void)regenerate;
- (void)regenerateBounds;
- (void)regenerateForChild:(id)a0;

@end
