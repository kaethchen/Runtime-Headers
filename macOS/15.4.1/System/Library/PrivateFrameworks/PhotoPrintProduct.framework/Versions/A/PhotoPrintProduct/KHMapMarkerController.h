@class NSArray, KHFrame;

@interface KHMapMarkerController : NSObject {
    NSArray *_mapMarkers;
    KHFrame *_mapFrame;
    KHFrame *_recentMarkerLabelFrameSelected;
}

- (void)dealloc;
- (void)_refreshSelectedState;
- (id)initWithMapFrame:(id)a0;
- (void)setMapMarkers:(id)a0;

@end
