@class NSString;
@protocol VKCustomImageProvider;

@interface VKSharedLocationRouteWaypoint : VKRouteWaypointInfo {
    NSString *_customImageKey;
}

@property (readonly, nonatomic) id<VKCustomImageProvider> imageProvider;
@property (readonly, nonatomic) NSString *customImageKey;
@property (copy, nonatomic) NSString *annotationText;

- (void).cxx_destruct;
- (id)initWithWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4 polylineCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a5;
- (void)setImageProvider:(id)a0 withKey:(id)a1;

@end
