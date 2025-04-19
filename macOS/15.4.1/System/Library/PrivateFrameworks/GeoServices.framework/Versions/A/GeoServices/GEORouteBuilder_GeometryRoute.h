@class GEORawRouteGeometry, NSArray;

@interface GEORouteBuilder_GeometryRoute : GEORouteBuilderBase {
    NSArray *_trafficColorInfos;
}

@property (nonatomic) int transportType;
@property (retain, nonatomic) GEORawRouteGeometry *rawRouteGeometry;
@property (retain, nonatomic) NSArray *destinations;
@property (nonatomic) BOOL isOriginCurrentLocation;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (void)setTrafficColors:(unsigned int *)a0 offsets:(unsigned int *)a1 count:(unsigned long long)a2;
- (BOOL)_buildComponents;
- (BOOL)_buildCoordinates;
- (id)_newRouteInstance;
- (BOOL)_setMiscInfo;
- (int)_transportType;

@end
