@class GEOPDHikeGeometry, GEOPDHikeSummary, GEOPDHikeAssociatedInfo;
@protocol GEOMapItem;

@interface GEORouteBuilder_PlaceDataCuratedHike : GEORouteBuilderBase {
    GEOPDHikeAssociatedInfo *_hikeAssociatedInfo;
    GEOPDHikeGeometry *_hikeGeometry;
    GEOPDHikeSummary *_hikeSummary;
}

@property (retain, nonatomic) id<GEOMapItem> mapItem;

+ (id)builderWithMapItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;
- (id)_anchorPointFromRoute:(id)a0 supportPoint:(id)a1 itemIdentifier:(id)a2;
- (BOOL)_buildComponents;
- (BOOL)_buildCoordinates;
- (id)_newRouteInstance;
- (void)_setAnchorPoints;
- (BOOL)_setMiscInfo;
- (int)_transportType;

@end
