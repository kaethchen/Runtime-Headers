@class NSImage, VKMapSnapshot, NSAppearance;

@interface MKMapSnapshot : NSObject {
    VKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSAppearance *appearance;

+ (id)createSnapshotWithOptions:(id)a0 timeoutInSeconds:(long long)a1;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })_coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_displayAppleLogoForMapType:(unsigned long long)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_hasNoDataPlaceholders;
- (id)_initWithLoDPISnapshot:(id)a0 hiDPISnapshot:(id)a1 appearance:(id)a2;
- (void)_prepareForRenderWithAnnotationViews:(id)a0 workQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_statsMemoryUsage;
- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)snapshotWithAnnotationView:(id)a0 atCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)snapshotWithAnnotationView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
