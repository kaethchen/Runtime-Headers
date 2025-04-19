@class GEOComposedGeometryRoutePersistentData;

@interface GEORouteBuilder_PersistentData : GEORouteBuilderBase

@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;

- (void).cxx_destruct;
- (BOOL)_buildComponents;
- (BOOL)_buildCoordinates;
- (id)_newRouteInstance;
- (BOOL)_setMiscInfo;
- (int)_transportType;
- (id)initWithPersistentData:(id)a0;

@end
