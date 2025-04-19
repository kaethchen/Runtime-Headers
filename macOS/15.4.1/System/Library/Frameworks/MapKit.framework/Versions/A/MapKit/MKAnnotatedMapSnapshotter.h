@class MKMapSnapshotOptions, NSArray, MKMapSnapshotter, NSAppearance, MKMapCamera;

@interface MKAnnotatedMapSnapshotter : NSObject {
    NSArray *_mapItems;
    struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } _region;
    MKMapCamera *_camera;
    struct CGSize { double width; double height; } _mapSize;
    unsigned long long _mapType;
    MKMapSnapshotOptions *_snapshotOptions;
    BOOL _useSnapshotService;
    MKMapSnapshotter *_snapshotter;
}

@property (readonly, nonatomic) MKMapCamera *camera;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) NSAppearance *appearance;

- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_initSnapshotterWithMapItems;
- (id)initWithMapItems:(id)a0 camera:(id)a1 mapSize:(struct CGSize { double x0; double x1; })a2 mapType:(unsigned long long)a3 useSnapshotService:(BOOL)a4;
- (id)initWithMapItems:(id)a0 mapSize:(struct CGSize { double x0; double x1; })a1 useSnapshotService:(BOOL)a2;
- (id)initWithMapItems:(id)a0 region:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 mapSize:(struct CGSize { double x0; double x1; })a2 mapType:(unsigned long long)a3 useSnapshotService:(BOOL)a4;

@end
